#include "Model.h"

int main() {
    s21::Model &a = s21::Model::GetInstanceModel();
    a.OpenObjFile("cube.obj");
    a.print();
    a.printt();
    std::cout << a.FindMaxVertexes(s21::move::Z) << '\n';
    std::cout << a.FindMinVertexes(s21::move::Z) << '\n';
    return 0;
}