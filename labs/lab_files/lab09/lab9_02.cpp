#include <iostream>

using namespace std;

double getWidth()
{
	double width;

	cout << "Enter rectangle's width: ";
	cin >> width;

	return width;
}

double getLength()
{
	double length;

	cout << "Enter rectangle's length: ";
	cin >> length;

	return length;
}

void displayArea(double area)
{
	cout << "Area of rectangle: " << area << endl;
}

int main()
{
	double length,		// The rectangle's length
		   width,		// The rectangle's width
		   area;		// The rectangle's area
	
	// Call the function to get the rectangle's length:
	
	
	// Call the function to get the rectangle's width:
	
	
	// Calculate the rectangle's area:
	
	
	// Call the function to display the rectangle's area:
	
	
	return 0;
}