// Car filter Check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdlib.h>
#include <iostream>
#include<string>
using namespace std;
string make;
int yearOfManufacture = 0;
int numOfCylinders;
string correctModel;
string correctYear;
string correctAgain;
string correctNumOfCil;
string makefilterKey;
int manfactureFilterKey;
int cylinderFilterKey;



void exit(int status);

void again() {
	cout << "would you like to check for another filter?  please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
	cin >> correctAgain;
	if (correctAgain == "yes" || correctAgain == "Yes") {
		exit(42);
	}
	else if (correctAgain == "no" || correctAgain == "No") {
		exit(0);
	}
	else {
		cout << "I'm not sure what that means." << endl;
		again();
	}
}

void getFilterKey() {
	cout << "right so from the data you have given me you own a " << make << " that was manfactured in " << yearOfManufacture << " that has " << numOfCylinders << "from this data we have found you require a filter with the model of " << endl;
	cout << makefilterKey << manfactureFilterKey << cylinderFilterKey << endl;
	again();
	

	}

void findCylinders() {
	cout << " finally we must determin the number of cylinders from the data given before your car is a " << make << endl;
	if (make == "ford" || make == "Ford") {
		while ((cout << "ford's either have an 6 or 8 cylinders how many does your model have?" << endl) && !(std::cin >> numOfCylinders)) {
			cout << "That's not a vaild number; ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}if (numOfCylinders == 6 || numOfCylinders == 8) {
			cout << "So you have " << numOfCylinders << " ?  correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
			cin >> correctNumOfCil;
			if (correctNumOfCil == "yes" || correctNumOfCil == "Yes") {
				cylinderFilterKey = numOfCylinders;
				getFilterKey();
			}else if (correctNumOfCil == "no" || correctNumOfCil == "No") {
				findCylinders();
			}
			else {
				cout << "I'm not sure what that means." << endl;
				findCylinders();
			}

		}
		else { cout << "That's not a vaild number; "; findCylinders(); }
	}else if (make == "nisan" || make == "Nisan") {
		while ((cout << "nisans's either have an 6 or 4 cylinders how many does your model have?" << endl) && !(std::cin >> numOfCylinders)) {
			cout << "That's not a vaild number; ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}if (numOfCylinders == 6 || numOfCylinders == 4) {
			cout << "So you have " << numOfCylinders << " ?  correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
			cin >> correctNumOfCil;
			if (correctNumOfCil == "yes" || correctNumOfCil == "Yes") {
				cylinderFilterKey = numOfCylinders;
				getFilterKey();
			}
			else if (correctNumOfCil == "no" || correctNumOfCil == "No") {
				findCylinders();
			}
			else {
				cout << "I'm not sure what that means." << endl;
				findCylinders();
			}

		}
		else { cout << "That's not a vaild number; "; findCylinders(); }
	}else if (make == "volov" || make == "Volov") {
		while ((cout << "volvos's either have an 15 or 20 cylinders how many does your model have?" << endl) && !(std::cin >> numOfCylinders)) {
			cout << "That's not a vaild number; ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}if (numOfCylinders == 15 || numOfCylinders == 20) {
			cout << "So you have " << numOfCylinders << " ?  correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
			cin >> correctNumOfCil;
			if (correctNumOfCil == "yes" || correctNumOfCil == "Yes") {
				cylinderFilterKey = numOfCylinders;
				getFilterKey();
			}
			else if (correctNumOfCil == "no" || correctNumOfCil == "No") {
				findCylinders();
			}
			else {
				cout << "I'm not sure what that means." << endl;
				findCylinders();
			}

		}
		else { cout << "That's not a vaild number; "; findCylinders(); }
	}else if (make == "jaguar"  || make == "Jaguar") {
		while ((cout << "jaguar's either have an 6 or 12 cylinders how many does your model have?" << endl) && !(std::cin >> numOfCylinders)) {
			cout << "That's not a vaild number; ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}if (numOfCylinders == 6 || numOfCylinders == 12) {
			cout << "So you have " << numOfCylinders << " ?  correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
			cin >> correctNumOfCil;
			if (correctNumOfCil == "yes" || correctNumOfCil == "Yes") {
				cylinderFilterKey = numOfCylinders;
				getFilterKey();
			}
			else if (correctNumOfCil == "no" || correctNumOfCil == "No") {
				findCylinders();
			}
			else {
				cout << "I'm not sure what that means." << endl;
				findCylinders();
			}

		}
		else {
			cout << "That's not a vaild number; "; findCylinders();
		}
	}
	}


void findManufactureYear() {
	while (yearOfManufacture == 0) {
		while ((cout << "Next please enter your cars year of manufacture " << endl) && !(std::cin >> yearOfManufacture)) {
			std::cout << "That's not a number; ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (yearOfManufacture >= 1995 && yearOfManufacture <= 2015) {
			cout << "so your cars year of manufacture is " << yearOfManufacture << " ?  please type either no or No if this incorrect and Yes or yes if this is correct." << endl;
			cin >> correctYear;
			if (correctYear == "No" || correctYear == "no") {
				yearOfManufacture = 0;
				findManufactureYear();
			}
			else if (correctYear == "yes" || correctYear == "Yes") {
				manfactureFilterKey = yearOfManufacture % 100;
				cout << manfactureFilterKey;
				findCylinders();
			}
			else if (make == "quit" || make == "Quit") {
				exit(0);
			}
			else {
				cout << "Invaild response" << endl;
				yearOfManufacture = 0;
				findManufactureYear();
			}
		}
		else {
			cout << "Invaild year; please enter a date between 1995 and 2015" << endl;
			yearOfManufacture = 0;
			findManufactureYear();
		}
	}
		
}

void findMake() {
	while (make.empty() || make == "") {
		cout << "the first piece of data we require is the make of your car please enter your car model" << endl;
		cin >> make;
		if (make == "ford" || make == "Ford" || make == "nisan" || make == "Nisan" || make == "volov" || make == "Volov" || make == "jaguar" || make == "Jaguar") {
			cout << "your car's model is " << make << " correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
			cin >> correctModel;
			if (correctModel == "No" || correctModel == "no") {
				make = "";
				findMake();
			}
			else if (correctModel == "Yes" || correctModel == "yes" && make == "ford" || make == "Ford") {
				cout << "great your car is a ford. lets move onto the next piece of data" << endl;
				makefilterKey = "F";
				findManufactureYear();
			}
			else if (correctModel == "Yes" || correctModel == "yes" && make == "nisan" || make == "Nisan") {
				cout << "great your car is a nisan. lets move onto the next piece of data" << endl;
				makefilterKey = "N";
				findManufactureYear();
			}
			else if (correctModel == "Yes" || correctModel == "yes" && make == "volov" || make == "Volov") {
				cout << "great your car is a volov. lets move onto the next piece of data" << endl;
				makefilterKey = "V";
				findManufactureYear();
			}
			else if (correctModel == "Yes" || correctModel == "yes" && make == "jaguar" || make == "Jaguar") {
				cout << "great your car is a jaguar. lets move onto the next piece of data" << endl;
				makefilterKey = "J";
				findManufactureYear();
			}
			else { cout << "unknown response" << endl; make = ""; findMake(); };
		}
		else if (make == "quit" || make == "Quit") {
			exit(0);
		
		}else{cout << "unknown model" << endl; make = "";findMake();};
	}
}


int main()
{
	cout << "welcome to the Car filter search when prompted please enter the correct respective data if it any point you would like to quit just type quit into any of the forms when prompted" << endl;
	findMake();

}
