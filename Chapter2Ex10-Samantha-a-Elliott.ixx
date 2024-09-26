//Chapter2Ex10-Samantha-a-Elliott

#include <iostream>
using namespace std;

int main() {
	//variables to hole the gallons of gas and miles driven 
	double gallons = 15.0;
	double miles = 375.0;

	//calculate miles per gallon
	double mpg = miles / gallons;
	
	//display results
	cout << "the car gets " << mpg << " miles per gallon." << endl;

	return 0;

}