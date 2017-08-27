#include "PID.h"

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
  p_error = 0;
  i_error = 0;
  d_error = 0;
}

double PID::UpdateError(double cte) {
  // p_error is previous error
  d_error = cte - p_error;
  i_error += cte;
  p_error = cte;

  return -Kp * p_error - Kd * d_error - Ki * i_error;
}

double PID::TotalError() {
}

