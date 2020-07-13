//============================================================================
// Name        : Your name goes here
// Lab         : 2
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	//Constants for later
	const int COLUMNS = 9;
	const int ROWS = 9;
	const int NEIGHBORS = 8;
	const int MINES = 10;
	const int CHAR_OFFSET = 48;

	//set current game's mines
	int minesleft = MINES;

	//Stores user input
	int choice;

	cout  << "This is my Minesweeper game." << endl << endl
		  << "Choose one of the options below:" << endl
		  << "(1) Start Game" << endl
		  << "(2) View Best Times" << endl
		  << "(3) Quit" << endl << endl
		  << "Enter Selection: ";
	cin >> choice;

	cout << "You selected " <<  choice  << endl << endl;

	//display game board
	cout << "  012345678" << endl
		 << "0:#########" << endl
		 << "1:#########" << endl
		 << "2:#########" << endl
		 << "3:#########" << endl
		 << "4:#########" << endl
		 << "5:#########" << endl
		 << "6:#########" << endl
		 << "7:#########" << endl
		 << "8:#########" << endl << endl
		 << "Mines left: " << minesleft ;

	return 0;
}