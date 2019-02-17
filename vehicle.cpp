#include "vehicle.h"
#include<stdexcept>

Vehicle::Vehicle(int year, std::string make,std::string model, Body_Style body_Style){
	_year = year;
	_make = make;
	_model = model;
	_body_Style = body_Style;
}

void Vehicle::return_Vehicle(){
	if(!_isRented){
		std::runtime_error{
			"This vehicle has not been rented. Error Code : 2 - Cannot Return Vehicle that has not been rented"
        };
	}else{
		_isRented = false;
    }
}

