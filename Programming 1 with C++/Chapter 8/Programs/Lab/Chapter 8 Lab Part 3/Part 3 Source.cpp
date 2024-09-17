//Chapter 8 Lab Part 3; Roman Numeral Converter
#include <iostream>
#include <iomanip>

using namespace std;

//Main Function

int main()
{
	const int SIZE = 21;
	string RN[SIZE] = {" ", "I", "II","III","IV","V",
						"VI", "VII","VIII", "IX",  "X",
						"XI", "XII",  "XIII", "XIV", "XV", 
						"XVI", "XVII", "XVIII", "XIX", "XX"};

	int n;

	cout << endl;

	do
	{
		cout << "Please enter in a number between 1 and 20:" << endl;
		cout << "OR enter 0 to exit the program." << endl;
		cin >> n;
		while (n < 0 || n > 20)
		{
			cout << "ERROR - That isn't a valid input. Please try again." << endl;
			cout << "Enter a number between 1 and 20:" << endl;
			cout << "OR enter 0 to exit the program." << endl;
			cin >> n;
		}
		cout << RN[n] << endl;

	} while (n != 0);
	

	


	return 0;
}