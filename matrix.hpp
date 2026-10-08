#include<vector>


class matrix {
  private:
  //Private elements of our matrix class:
  size_t cols;
  size_t rows;
  std::vector<double>vec;
  public:
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
};
