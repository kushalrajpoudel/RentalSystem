#ifndef __CONTROLLER_H
#define __CONTROLLER_H

#include "vehicle.h"
#include <string>
#include <vector>

class Controller{
public:
    void executeCommand(int commandNumber);
    void askCommand();
    void addVehicle();
    void displayVehicle();
    void rentVehicle();
    void returnVehicle();
    void removeVehicle();
private:
    int commandNumber;
    int year;
    std::string make;
    std::string model;
    Body_Style body_Style;
    std::string bodyStyle_toString(Body_Style body_Style);
    std::vector<Vehicle> _vehicles;
    int bodyNumber;
    Body_Style Number_toEnum(int bodyNumber);
};


#endif
