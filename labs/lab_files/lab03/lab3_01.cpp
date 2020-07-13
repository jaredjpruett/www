/* 
   File: lab3_01.cpp

   Author:
   CS1428.102
   9/15/11
   
   The purpose of this exercise is to learn to recognize common mistakes made
   while working with file input/output.
   
   This program should read in three grades from an input file - grades.txt. 
   Then, it should calculate the average of the grades and print the answer to
   the output file - reportCard.txt.
   
   Correct the errors in the program...
*/

#include <fstream>

using namespace std;

int main()
{
    double grade1;
           grade2;
           grade3;
           average;
    
    Ifstream readIn;
    ofstream readOut;
    
    readIn.open("grades");
    out.open("reportCard.txt");
    
    readIn >> grade1 >> grade2 << grade3;
    
    average = (grade1 + grade2 + grade3) / 3.0;
    
    readOut << "The students grades are: " grade1 << ", " << grade2
			<< , << grade3 << ".\n" 
            << "The average of the three grades is: " << average;
    
    readOut.close("reportCard.txt");
    
    return 0;
}
