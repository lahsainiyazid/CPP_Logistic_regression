#pragma once 
#include "matrix.hpp"
class descentlog{
  public:
  matrix X;
  matrix y;
  matrix w;
  double b;
  descentlog(const matrix &X_train,const matrix& y_train);
 void fit (size_t epochs,double alpha);
 matrix predict();
};
