
#include "Controller/Controller.h"

int main() { 
 s21::Model &a = s21::Model::GetInstanceModel();
  s21::Controller b(&a);
  std::vector<std::vector<double>> answer = { 
    {-0.5, -0.5, -0.5}, 
    {-0.5, -0.5, 0.5}, 
    {-0.5, 0.5, -0.5}, 
    {-0.5, 0.5, 0.5}, 
    {0.5, -0.5, -0.5}, 
    {0.5, -0.5, 0.5}, 
    {0.5, 0.5, -0.5}, 
    {0.5, 0.5, 0.5 }
};
  b.OpenObjFile("cube.obj");
}