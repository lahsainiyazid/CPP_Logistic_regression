#pragma once 
#include "matrix.hpp"
class descentlog{
  public:
  matrix X;
  matrix y;
  matrix w;
  descentlog(const matrix &X_train,const matrix& y_train);
 void fit (int epochs,double alpha); 
};
