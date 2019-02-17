//In case vehicle is used in multiple C++ files, we need to make sure that the compiler doesnot recompile the Vehicle.H multiple times and hence
// we need to include #ifndef and #def
#ifndef __VEHICLE_H
#define __VEHICLE_H

//including <> checks system directory
// "" checks system directory and all user directory for the file


#include<string>
#include<ostream>

#include"Body_style.cpp"

class Vehicle{
public:
	/*	Includes public methods
		Here we define Vehicle entry methods, which enters the data ito vehicle and then other method takes the vehicle object,
		puts it in a vector and stacks it in memory.
	*/

	// The method vehicle is a constructor to the class.
	// Here, it takes in input of the year the vehicle was built, the make and model and the ENUM body type of vehicle.

	Vehicle(int year,std::string make,std::string model,Body_Style body_Style);

	// This method when invoked calls returns the to string method of vehicle to display vehicle.
	void return_Vehicle();

private:
	// All private Variables should be named starting with a _ which is common practice

	int _year;
	std::string _make;
	std::string _model;
	Body_Style _body_Style;
	bool _isRented;

	//

};

#endif
