#include<vector>


class matrix {
  private:
  size_t cols;
  size_t rows;
  std::vector<double>vec;
  public:
  matrix(size_t c,size_t r);
  matrix (size_t c,size_t r,const std::vector<double>&vals);
};
