#pragma once 
#include "matrix.hpp"
class descentlog{
  public:
  matrix X;
  matrix y;
  matrix w;
  double alpha;
  descentlog(const matrix &X_train,const matrix& y_train);
  descentlog(const matrix& X_train,const matrix& y_train,double lr);
};
