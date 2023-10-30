#ifndef S21_CPP4_3DVIEWER_V2_CONTROLLER_H
#define S21_CPP4_3DVIEWER_V2_CONTROLLER_H

#include "../Model/Model.h"

class Controller {
private:
    Model *model;
public:
    Controller(Model*) : Model() {};
    ~Controller();
    void OpenObjFile() { Model::OpenObjFile(); }
    

};

#endif // S21_CPP4_3DVIEWER_V2_CONTROLLER_H