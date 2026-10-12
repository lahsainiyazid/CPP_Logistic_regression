#include "descentlog.hpp"
#include<stdexcept>

descentlog::descentlog(const matrix& X_train,const matrix& y_train):X(X_train),y(y_train),w(matrix(X_train.cols,1)){};
void descentlog::fit(int epochs,double alpha){
  if (alpha<=0){throw std::invalid_argument("Lr must be >0");}
  if (epochs<=0){throw std::invalid_argument("Number of epochs must be>0");}
  if(X.rows==0){throw std::invalid_argument("Number of rows must be >0");}
  for (size_t i=0;i<epochs;i++){
  matrix z=X*w;
  matrix y_pred=(1/1+exp(-z));
  matrix e=y_pred-y;
  matrix nabla= X.T()*e *static_cast<double>(1/X.rows);
  w=w-nabla*alpha;
  }
}
