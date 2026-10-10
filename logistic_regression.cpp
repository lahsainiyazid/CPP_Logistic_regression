#include "logistic_regression.hpp"
#include<stdexcept>


logistic_regression::logistic_regression(matrix X_train,matrix y_train):X(X_train),y(y_train),w(matrix(X_train.cols,1)),alpha(0.1){};
logistic_regression::logistic_regression(matrix X_train,matrix y_train,double lr):X(X_train),y(y_train),w(matrix(X_train.cols,1)),alpha(lr){
  if (lr<=0){throw std::invalid_argument("Learning must not be <=0");}
};

