#include<iostream>
#include "matrix.hpp"
#include <stdexcept>

matrix::matrix(size_t r,size_t c):rows(r),cols(c),vec(std::vector<double>(r*c,0)){
  if (r==0||c==0){
    throw std::invalid_argument("Invalid dimensions");
  }
};




int main (){
 return 0;
}
