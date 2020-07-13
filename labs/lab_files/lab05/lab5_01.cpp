/*
 * File: lab5_01.cpp
 *
 * Author: *** your name here ***
 *
 * This program displays a menu and asks the user to make a selection:
 * (Use the switch statement to determine which item the user chooses.)
 *
 * The Menu is outlined below:
 *  
 * Geometry Calculator
 *    
 *     1.  Calculate the Area of a Circle   
 *     2.  Calculate the Area of a Rectangle
 *     3.  Calculate the Area of a Triangle
 *     4.  Quit
 *
 *     Enter your choice (1 - 4):
 *         
 * If the user enters 1, the program should ask for the radius of the circle     
 * and then display its area. Write the calculated area in a sentence form to a
 * file named GeoCalculator.txt (e.g. The Area of the Circle is)
 * Use the following formula: 
 *  	   
 * area = PI * radius * radius 
 *   
 * If the user enters 2, the program should ask for the length and width 
 * of the rectangle and then display the rectangle's area. Write the calculated
 * area in a sentence form to a file named GeoCalculator.txt 
 * (e.g. The Area of the rectangle is) Use the following formula: 
 * 
 * area = length * width;
 * 
 * If the user enters 3 the program should ask for the length of the triangle's
 * base and its height, and then display its area. Write the calculated area in a
 * sentence form to a file named GeoCalculator.txt (e.g. The Area of the Triangle is)          
 * Use the following formula:
 * 
 * area = base * height * 0.5
 */ 

#include <iostream>

using namespace std;

int main()
{
    int choice; // Do not use quotes in the switch statement.

    float length, width, base, height, area, radius;
    const float PI = 3.14159;

    // Display the menu as it is formatted above.

    cin >> choice;

    // Write the header for the switch statement.
    {
        // Write the header for the first case.
        {
            cout << "Enter radius:";
            cin >> radius;
            // Calculate and store the area.
            cout << "The area of the circle is " << area;
            // Write the statement that prevents the execution of
            // the cases below. 
        }
        // Write the header for the second case.
        {
            cout << "Enter length:";
            cin >> length;
            cout << "Enter width";
            cin >> width;
            // Calculate and store the area.
            cout << "The area of the rectangle is " << area;
            // Write the statement that prevents the execution of
            // the cases below. 
        }
        // Write the header for the third case.
        {
            cout << "Enter height:";
            cin >> height;
            cout << "Enter base:";
            cin >> base;
            // Calculate and store the area.
            cout << "The area of the triangle is " << area;
            // Write the statement that prevents the execution of
            // the cases below. 
        }
        // Write the header for the fourth case.
        {
            cout << "Goodbye";
            // Write the statement that prevents the execution of
            // the case below. 
        }
        // Write the header for the default case.
        cout << "Error!  Correct input is 1, 2, 3, or 4.";
    }

    return 0;
}
