#pragma once 
#include<vector>
#include<cmath>

class matrix {
  //elements of our matrix class:
  public:
  size_t rows;
  size_t cols;
  std::vector<double>vec;
  //Constructors:
  matrix(size_t c,size_t r);
  matrix (size_t c,size_t r,const std::vector<double>&vals);
  
  //Selection operators:
  double& operator()(size_t r,size_t c);
  double operator()(size_t r,size_t c)const ;
  
  //Scalar operators:
  matrix operator*(double a)const;
  matrix operator+(double a)const;
  matrix operator-(double a)const;
  
  //Matrix operations:
  matrix operator*(const matrix &other)const;
  matrix operator+(const matrix &other)const;
  matrix operator-(const matrix &other)const;
  matrix T()const; 
  //Mathematical operations:
  void e();
};
