#include "descentlog.hpp"
#include<stdexcept>

descentlog::descentlog(const matrix& X_train,const matrix& y_train):X(X_train),y(y_train),w(matrix(X_train.cols,1)){};
void descentlog::fit(size_t epochs,double alpha){
  if (epochs==0){throw std::invalid_argument("Number of epochs can not be=0");}
  for (size_t i=0;i<epochs;i++){
    matrix z=X*w;
    matrix minus_z=z*-1;
   matrix  y_pred=minus_z.sigmoid();
   matrix  error=y_pred-y;
    matrix nabla= X.T()*error*(static_cast<double>((1/X.rows)));
    w=w-(nabla*alpha);
  }
}

