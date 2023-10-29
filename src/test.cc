#include "Model.h"

int main() {
    s21::Model &a = s21::Model::GetInstanceModel();
    a.OpenObjFile("cube.obj");
    a.print();
    a.printt();
    return 0;
}