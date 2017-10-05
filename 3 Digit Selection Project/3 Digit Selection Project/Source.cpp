/*

Steven Romero - 1st 

3 Digit Numbers Selection:*

Using 3 digits to create a if statement

*/

//Libraries 

#include <iostream> // gives access to cin, cout, end1, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN

void main() {

	pause(); // pauses to see the displayed text
}


int x; // 3 digit number 

int A = (x / 250);
int B = (x/ 20);
int C = x % 5;

bool ascending = A != B && B != C;














