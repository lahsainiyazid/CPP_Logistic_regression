#include<iostream>
#include "matrix.hpp"

matrix::matrix(size_t r,size_t c):rows(r),cols(c),vec(r*c,0){
  if (r==0||c==0){

    throw std::invalid_argument("Invalid matrix dimension");
  }
};
matrix::matrix(size_t r,size_t c,const std::vector<double>&v):rows(r),cols(c),vec(v){
  if (r==0||c==0||r*c!=v.size()){
    throw std::invalid_argument("Invalid matrix dimension");
  }
}
double& matrix::operator()(size_t r,size_t c){
  return vec[r*cols+c];
} 
double matrix::operator()(size_t r,size_t c )const {
  return vec[r*cols+c];
}
matrix matrix::operator*(double a)const{
  std::vector<double>v(rows*cols,0);
for(size_t i=0;i<v.size();i++){
  v[i]=vec[i]*a;
}
return matrix(rows,cols,v);
}
matrix matrix::operator+(double a)const{
  std::vector<double>v(rows*cols,0);
  for (size_t i=0;i<v.size();i++){
    v[i]=vec[i]+a;
  }
  return matrix(rows,cols,v);
}
matrix matrix::operator-(double a)const{
 std::vector<double>v(rows*cols,0);
 for (size_t i=0;i<v.size();i++){
   v[i]=vec[i]-a;
 }
 return matrix(rows,cols,v);
}
matrix matrix::operator*(const matrix &other)const{
  if (cols!=other.rows){
    throw std::invalid_argument("Inner dimensions must match!");
  }
  std::vector<double>v(rows*cols,0);
  matrix result=matrix(cols,other.cols,v);
  for (size_t i=0;i<rows;i++){
      for(size_t j=0;j<other.cols;j++){
        for (size_t k=0;cols;k++){
          result(i,j)+=(*this)(i,k) *other(k,j);
        }
      }
  }
return result;} 
matrix matrix::operator-(const matrix &other)const{
  if (rows!=other.rows||cols!=other.cols){
    throw std::invalid_argument("Dimensions must match!");
  }
  std::vector<double>v(rows*cols,0);
  for (size_t i=0;i<v.size();i++){
    v[i]=vec[i]-other.vec[i];
  }
  return matrix(rows,cols,v);
}
matrix matrix::operator +(const matrix &other)const{
  if(rows!=other.rows||cols!=other.cols){
    throw std::invalid_argument("Dimensions must match!");
  }
  std::vector<double>v(rows*cols,0);
  for (size_t i=0;i<v.size();i++){
    v[i]=vec[i]-other.vec[i]; }
 return matrix(rows,cols,v); }

matrix matrix::T()const{
  std::vector<double>v(rows*cols,0);
  matrix T=matrix(cols,rows,v);
  for(size_t i=0;i<rows;i++){
    for (size_t j=0;j<cols;j++){
      T(j,i)=(*this)(i,j);
    }
  }
return T;}
int main (){
  return 0;
}
