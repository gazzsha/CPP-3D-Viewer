#ifndef S21_CPP4_3DVIEWER_V2_CONTROLLER_H
#define S21_CPP4_3DVIEWER_V2_CONTROLLER_H

#include "../Model/Model.h"
namespace s21
{
class Controller {
private:
    Model *model;
public:
    Controller(Model* m) : model(m) {};
    ~Controller() {};
    void OpenObjFile(const std::string&);
    void MoveFigure(const double&, move);
    void RotateFigure(const double&, move);
    std::vector<std::vector<double>> GetMatrixVertexes();

};
} // namespace s21

#endif // S21_CPP4_3DVIEWER_V2_CONTROLLER_H