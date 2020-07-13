#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

void readFile(int[], string[], double[], ifstream &);
void enterHours(int[], string[], double[]);
void calcWages(double[], double[], double[]);
void writePayRoll(int[], double[], double[], double[], ofstream &);

const int SIZE = 6;

int main()
{
    int empId[SIZE];
    string empName[SIZE];
    double hours[SIZE];
    double payRate[SIZE];
    double wages[SIZE];
    
    ifstream fin;
    fin.open("E_PayRoll.txt");
    readFile(empId, empName, payRate, fin);
    fin.close();
    
    enterHours(empId, empName, hours);
    calcWages(hours, payRate, wages);
    
    ofstream fout;
    fout.open("lab11_EmpPayRoll.txt");
    writePayRoll(empId, hours, payRate, wages, fout);
    fout.close();
    
    return 0;
}

void readFile(int id[], string name[], double rate[], ifstream & inFile)
{
     for(int i = 0; i < SIZE; i++)
             inFile >> id[i] >> name[i] >> rate[i];
}

void enterHours(int id[], string name[], double hrs[])
{
    for(int i = 0; i < SIZE; i++)
    { 
      cout << "Enter the number of hours employee number "
           << id[i] << ", " << name[i] << " worked: ";
      cin >> hrs[i];

      while(hrs[i] < 0)
      {
    	  cout << hrs[i] << " is not a valid entry.  Please "
    		   << "enter a non-negative value.";
    	  cin >> hrs[i];
      }
    }
}

void calcWages(double hrs[], double rate[], double pay[])
{
     for(int i = 0; i < SIZE; i++)
             pay[i] = hrs[i] * rate[i];
}

void writePayRoll(int id[], double hrs[], double rate[], double pay[], ofstream & outFile)
{
     outFile << "Employee ID      Hours Worked      Pay Rate     Wages Earned" << endl
             << "____________________________________________________________" << endl
             << fixed << setprecision(2);
             
     for(int i = 0; i < SIZE; i++)
             outFile << '\t' << id[i] << "\t\t\t" << hrs[i] << "\t\t\t$"
                     << rate[i] << "\t\t\t$" << pay[i] << endl;
}
