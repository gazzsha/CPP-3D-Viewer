#include "Model/Model.h"

int main() {
    s21::Model &a = s21::Model::GetInstanceModel();
    a.OpenObjFile("cube.obj");
    a.print();
    std::cout << '\n';
    a.printt();
    std::cout << a.FindMaxVertexes(s21::move::X) << '\n';
    std::cout << a.FindMinVertexes(s21::move::X) << '\n';
        std::cout << a.FindMaxVertexes(s21::move::Y) << '\n';
    std::cout << a.FindMinVertexes(s21::move::Y) << '\n';
        std::cout << a.FindMaxVertexes(s21::move::Z) << '\n';
    std::cout << a.FindMinVertexes(s21::move::Z) << '\n';

    //std::vector<std::vector<double>> m =  a.GetMatrixVertexes();
    return 0;
}