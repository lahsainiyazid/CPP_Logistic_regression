#include "descentlog.hpp"
#include<stdexcept>

descentlog::descentlog(const matrix& X_train,const matrix& y_train):X(X_train),y(y_train),w(matrix(X_train.cols,1)){};

}
