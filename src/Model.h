#ifndef S21_CPP4_3DVIEWER_V2_MODEL_H
#define S21_CPP4_3DVIEWER_V2_MODEL_H

#include <iostream>
#include <vector>

namespace s21
{
enum type {
  VERTEXES = 2,
  FACETS = 3,
};

enum move {
  X = 4,
  Y = 5,
  Z = 6,
};


typedef struct matrix {
  std::vector<std::vector<double>> matrix;
  int rows;
  int cols;
} matrix_t;

typedef struct facets {
  std::vector<int> vertexrs;
  int numbers_of_vertexes_in_facets;
} polygon_t;

typedef struct min_max {
  std::vector<double> x_min_max;
  std::vector<double> y_min_max;
  std::vector<double> z_min_max;
} min_max_t;


class Model {
private:
  unsigned int count_of_vertexrs;
  unsigned int count_of_facets;
  matrix_t matrix_3d;
  std::vector<polygon_t> polygon;
  min_max_t min_max_values;
public:

};    
} // namespace s21


#endif //S21_CPP4_3DVIEWER_V2_MODEL_H


