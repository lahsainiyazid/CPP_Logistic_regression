#include<iostream>
#include "matrix.hpp"
#include <stdexcept>

matrix::matrix(size_t r,size_t c):rows(r),cols(c),vec(std::vector<double>(r*c,0)){
  if (r==0||c==0){
    throw std::invalid_argument("Invalid dimensions");
  }
};
matrix::matrix(size_t r,size_t c,const std::vector<double>&v):rows(r),cols(c),vec(v){
  if(r==0||c==0||r*c!=v.size()){
    throw std::invalid_argument("Invalid dimensions");
  }
};
double & matrix::operator()(size_t r,size_t c){
  return vec[r*cols+c];
};
double matrix::operator()(size_t r,size_t c)const{
  return vec[r*cols+c];
};
matrix matrix::operator*(double a)const{
  std::vector<double>v(vec.size(),0);
  for(size_t i=0;i<vec.size();i++){
    v[i]=vec[i]*a;
  }
  return matrix(rows,cols,v);
}
matrix matrix::operator +(double a)const {
  std::vector<double>v(vec.size(),0);
  for(size_t i=0;i<vec.size();i++){
    v[i]=vec[i]+a;
  }
  return matrix(rows,cols,v);
}
matrix matrix::operator -(double a)const{
  std::vector<double>v(vec.size(),0);
  for (size_t i=0;i<vec.size();i++){
    v[i]=vec[i]-a;
  }
  return matrix(rows,cols,v);
}
int main (){
 return 0;
}
