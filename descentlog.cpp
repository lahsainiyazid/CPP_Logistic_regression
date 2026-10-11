#include "descentlog.hpp"


descentlog::descentlog(const matrix& X_train,const matrix& y_train):X(X_train),y(y_train),w(matrix(X_train.cols,1)),alpha(0.1){};
descentlog::descentlog(const matrix& X_train,const matrix& y_train,double lr):X(X_train),y(y_train),w(matrix(X_train.cols,1)),alpha(lr){};
