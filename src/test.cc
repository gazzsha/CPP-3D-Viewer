
#include "Controller/Controller.h"

int main() {
  s21::Model &a = s21::Model::GetInstanceModel();
  s21::Controller b(&a);
  b.OpenObjFile("cube.obj");
  std::cout << b.get_count_of_facets();
}