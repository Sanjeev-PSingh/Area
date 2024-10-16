/*
	Sanjeev Singh

	area.cpp

	asks user for width of one side of a square and 
	calculates the area of the square
*/

#include <iostream>
using namespace std;

// Variables
float width, area;

int main()
{
	cout << "Widht of one side of the square ";
	cin >> width;

	// calculates area of the square
	area = width * width;

	cout << "Area of squre is " << area << " units" << endl;

	return 0;
}