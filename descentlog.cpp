#include "descentlog.hpp"
#include<stdexcept>

descentlog::descentlog(const matrix& X_train,const matrix& y_train):X(X_train),y(y_train),w(matrix(X_train.cols,1)),b(0){};
void descentlog::fit(size_t epochs,double alpha){
  if (epochs==0){throw std::invalid_argument("Number of epochs can not be=0");}
  for (size_t i=0;i<epochs;i++){
    matrix z=X*w;
    matrix minus_z=z*-1;
   matrix  y_pred=minus_z.sigmoid();
   matrix  error=y_pred-y;
   matrix nabla= X.T()*error*(static_cast<double>((1/X.rows)));
    w=w-(nabla*alpha);
    double error_sum=0;
    for (size_t i=0;i<error.vec.size();i++){
      error_sum+=error.vec[i];
    }
    double db=(1/X.rows)*(error_sum);
    double b=b-alpha*db;
  }
}
matrix descentlog::predict(double treshhold)const{
  if (treshhold<0||treshhold>1){
    throw std::invalid_argument("Treshhold must be >=0 and <=1");
  }
  matrix y_pred= X*w +b;
  for (size_t i;i<y_pred.vec.size();i++){
    if (y_pred.vec[i]>treshhold){
      y_pred.vec[i]=1;
    }
    else {
      y_pred.vec[i]=0;
    }
  }
  return y_pred;
}

