#ifndef S21_CPP4_3DVIEWER_V2_CONTROLLER_H
#define S21_CPP4_3DVIEWER_V2_CONTROLLER_H

#include "../Model/Model.h"

class Controller {
private:
    Model *model;
public:
    Controller(Model*) : Model() {};
    ~Controller();
    void OpenObjFile() { model->OpenObjFile(); }
    void MoveFigure(const double& value, move type) { model->MoveFigureXYZ(value, type); }
    std::vector<std::vector<double>> getMatrixVertexes() { return model->GetMatrixVertexes(); }

};

#endif // S21_CPP4_3DVIEWER_V2_CONTROLLER_H