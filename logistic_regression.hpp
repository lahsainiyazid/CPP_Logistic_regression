#pragma once 
#include "matrix.hpp"

class logistic_regression{
  public:
    matrix X ;
    matrix y ;
    matrix w;
    logistic_regression(matrix X_train,matrix y_train);
};
