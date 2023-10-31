#include "Controller.h"

namespace s21
{
    void Controller::OpenObjFile(const std::string& file_name) { model->OpenObjFile(file_name); }
    
    void Controller::MoveFigure(const double& value, move type) { model->MoveFigureXYZ(value, type); }
    
    void Controller::RotateFigure(const double& angle, move type) {model->RotationByXYZ(angle, type); }
    
    std::vector<std::vector<double>> Controller::GetMatrixVertexes() { return model->GetMatrixVertexes(); }

} // namespace s21
