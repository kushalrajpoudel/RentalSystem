//
//  Controller.cpp
//  RentalSystem
//
//  Created by Kushal Poudel on 2/16/19.
//  Copyright © 2019 Kushal Poudel. All rights reserved.
//

#include <stdio.h>
#include "Controller.h"
#include <iostream>

void Controller::askCommand(){
    printf("What would you like to do?\n"
           "1. Add Vehicles\n"
           "2. Remove Vehicles\n"
           "3. Rent Vehicles \n"
           "4. Return Vehicles \n"
           "5. View Vehicles\n"
           );
    std::cin>>commandNumber;
    executeCommand(commandNumber);
}
void Controller::executeCommand(int commandNumber){
    switch (commandNumber) {
        case 1:
            addVehicle();
            break;
        case 2:
            removeVehicle();
            break;
        case 3:
            rentVehicle();
            break;
        case 4:
            returnVehicle();
            break;
        case 5:
            displayVehicle();
            break;
            
        default:
            std::cout<<"Wrong Option Number, Retry Again"<<std::endl;
            break;
    }
}

void Controller::addVehicle(){
    std::cout<<std::endl;
    std::cout<<"Enter the Year , Make , Model and BodyStyle of Vehicle"<<std::endl;
    std::cout<<"BodyStyle options available are :"<<std::endl;
    std::cout<<"1. SEDAN"<<std::endl;
    std::cout<<"2. HATCHBACK"<<std::endl;
    std::cout<<"3. MINIVAN"<<std::endl;
    std::cout<<"4. TRUCK"<<std::endl;
    std::cout<<"5. SUV"<<std::endl;
    std::cout<<"6. CROSSOVER"<<std::endl;
    std::cin>>year;std::cin.ignore();
    std::getline(std::cin,make);
    std::getline(std::cin,model);
    std::cin>>bodyNumber;std::cin.ignore();
    body_Style = Number_toEnum(bodyNumber);
    std::cout<<"Year = "<<year<<" Make = "<<make<<" Model = "<<model<<" BodyStyle = "<<bodyStyle_toString(body_Style)<<std::endl;
    
}
void Controller::removeVehicle(){
    
}
void Controller::displayVehicle(){
    
}
void Controller::rentVehicle(){
    
}
void Controller::returnVehicle(){
    
}

Body_Style Controller::Number_toEnum(int bodyNumber){
    Body_Style body=Body_Style::SEDAN;
    switch (bodyNumber) {
        case 1:
            body = Body_Style::SEDAN;
            break;
        case 2:
            body = Body_Style::HATCHBACK;
            break;
        case 3:
            body = Body_Style::MINIVAN;
            break;
        case 4:
            body = Body_Style::TRUCK;
            break;
        case 5:
            body = Body_Style::SUV;
            break;
        case 6:
            body = Body_Style::CROSSOVER;
            break;
        default:
            std::runtime_error{"Error No Such Body Found!"};
            break;
    }
    return body;
}
std::string Controller::bodyStyle_toString(Body_Style body_Style){
    std::string body;
    switch (body_Style) {
        case Body_Style::SEDAN:
            body = "SEDAN";
            break;
        case Body_Style::HATCHBACK:
            body = "HATCHBACK";
            break;
        case Body_Style::MINIVAN:
            body = "MINIVAN";
            break;
        case Body_Style::TRUCK:
            body = "TRUCK";
            break;
        case Body_Style::SUV:
            body = "SUV";
            break;
        case Body_Style::CROSSOVER:
            body = "CROSSOVER";
            break;
        default:
            std::runtime_error{"Error Body Type!"};
            break;
    }
    return body;
}

