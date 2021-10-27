// Car filter Check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string make;
int yearOfManufactureYear;
int numOfCylinders;
string correctModel;
string makefilterKey;



int main()
{
	cout << "welcome to the Car filter search when prompted please enter the correct respective data if it any point you would like to quit just type quit into any of the forms when prompted" << endl;
	findMake();

}

void findMake() {
	while(!make.empty()) {
	cout << "the first piece of data we require is the make of your car please enter your car model" << endl;
	cin >> make;
	cout << "your car's model is " << make << " correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
		cin >> correctModel;
		if (correctModel == "No" || correctModel == "no") {
			findMake();
		}else if (correctModel == "Yes" || correctModel == "yes" && make == "honda" || make == "Honda") {
			cout << "great you are car is a honda. lets move onto the next piece of data" << endl;
			makefilterKey = "H";
			findManufactureYear();
		}
		else if (make == "quit" || make == "Quit") {
			quit();
		}
		else {
			cout << "unknown model" << endl;
			findMake();

		};
	}

}

void findManufactureYear() {}

void findCylinders() {}

void quit() {}
