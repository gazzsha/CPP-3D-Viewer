
#include "Controller/Controller.h"

int main() {
  s21::Model &a = s21::Model::GetInstanceModel();
  s21::Controller b(&a);
  b.OpenObjFile("cube.obj");
  b.OpenObjFile("human.obj");
  b.print();
}