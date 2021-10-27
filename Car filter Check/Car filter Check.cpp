// Car filter Check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdlib.h>
#include <iostream>
using namespace std;
string make;
int yearOfManufacture;
int numOfCylinders;
string correctModel;
string correctYear;
string makefilterKey;
string manfactureFilterKey;

void exit(int status);


int main()
{
	cout << "welcome to the Car filter search when prompted please enter the correct respective data if it any point you would like to quit just type quit into any of the forms when prompted" << endl;
	findMake();

}

void findMake() {
	while(make.empty()) {
	cout << "the first piece of data we require is the make of your car please enter your car model" << endl;
	cin >> make;
	cout << "your car's model is " << make << " correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
		cin >> correctModel;
		if (correctModel == "No" || correctModel == "no") {
			make = "";
			findMake();
		}else if (correctModel == "Yes" || correctModel == "yes" && make == "honda" || make == "Honda") {
			cout << "great your car is a honda. lets move onto the next piece of data" << endl;
			makefilterKey = "H";
			findManufactureYear();
		}else if (correctModel == "Yes" || correctModel == "yes" && make == "nisan" || make == "Nisan") {
			cout << "great your car is a nisan. lets move onto the next piece of data" << endl;
			makefilterKey = "N";
			findManufactureYear();
		}else if (correctModel == "Yes" || correctModel == "yes" && make == "volov" || make == "Volov") {
			cout << "great your car is a volvo. lets move onto the next piece of data" << endl;
			makefilterKey = "V";
			findManufactureYear();
		}else if (correctModel == "Yes" || correctModel == "yes" && make == "jaguar" || make == "Jaguar") {
			cout << "great your car is a jaguar. lets move onto the next piece of data" << endl;
			makefilterKey = "J";
			findManufactureYear();
		}
		else if (make == "quit" || make == "Quit") {
			exit(0);
		}
		else {
			cout << "unknown model" << endl;
			make = "";
			findMake();

		};
	}

}

void findCylinders() {
}

void findManufactureYear() {
	while (!yearOfManufacture > 1995 && !yearOfManufacture < 2015) {
		cout << "Next please enter your cars year of manufacture " << endl;
		cin >> yearOfManufacture;
		cout << "so your cars year of manufacture is " << yearOfManufacture << " ?  please type either no or No if this incorrect and Yes or yes if this is correct." << endl;
		cin >> correctYear;
		if (correctYear == "No" || correctYear == "no") {
			yearOfManufacture = 0;
			findManufactureYear();
		}else if (correctYear == "yes" || correctYear == "Yes"){
			manfactureFilterKey = yearOfManufacture%100;
			cout << manfactureFilterKey;
			findCylinders();
		}else if (make == "quit" || make == "Quit") {
			exit(0);
		}else{
			cout << "Invaild year; please enter a date between 1995 and 2015" << endl;
			yearOfManufacture = 0;
			findManufactureYear;
		}
}




