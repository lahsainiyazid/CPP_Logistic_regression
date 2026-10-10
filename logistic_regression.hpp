#pragma once 
#include "matrix.hpp"

class logistic_regression{
  public:
    matrix X ;
    matrix y ;
    matrix w;
    double alpha;
    logistic_regression(matrix X_train,matrix y_train);
    logistic_regression(matrix X_train,matrix y_train,double lr);
    void fit(logistic_regression reg);
};
