#include "Model/Model.h"

int main() {
    s21::Model &a = s21::Model::GetInstanceModel();
    a.OpenObjFile("cube.obj");
        a.MoveFigureXYZ(0.1, s21::move::X);
    a.print();

    // std::cout << a.FindMaxVertexes(s21::move::X);
    // std::cout << a.FindMinVertexes(s21::move::X);
    std::cout << a.max_min_values.x_max_min[0] << a.max_min_values.x_max_min[1] << '\n';
    std::cout << a.max_min_values.y_max_min[0] << a.max_min_values.y_max_min[1] << '\n';
    std::cout << a.max_min_values.z_max_min[0] << a.max_min_values.z_max_min[1] << '\n';
    //std::vector<std::vector<double>> m =  a.GetMatrixVertexes();
    return 0;
}