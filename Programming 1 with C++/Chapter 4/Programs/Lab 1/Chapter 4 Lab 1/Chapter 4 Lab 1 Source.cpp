#include <iostream>

using namespace std;

int main()
{

	//Start of the 1st exercise; Roman Numeral Converter

	//Initalize Variables

	int x;

	//Input Values

	cout << "Please input two numbers greater than 1, but less than 10:" << endl;

	cin >> x;

	//Decision Statements

	switch (x)
	{
	case 1: cout << 'I' << endl;
		break;
	case 2: cout << "II" << endl;
		break;
	case 3: cout << "III" << endl;
		break;
	case 4: cout << "IV" << endl;
		break;
	case 5: cout << 'V' << endl;
		break;
	case 6: cout << "VI" << endl;
		break;
	case 7: cout << "VII" << endl;
		break;
	case 8: cout << "VIII" << endl;
		break;
	case 9: cout << "IX" << endl;
		break;
	case 10: cout << "X" << endl;
		break;
	default: cout << "You entered an invalid number. Please try again. Remember: Must be between 1 and 10." << endl;
	}

	//Seperate Programs

	cout << endl;
	cout << endl;
	cout << endl;

	//Start of the second exercise; Magic Dates

	//initialize variables

	int month,
		day,
		year;

	//Input Values

	cout << "Please enter in the month (as a numeric number), day, and the LAST two digits of the year and see if your date is MAGIC!" << endl;
	
	cin >> month;
	cin >> year;

	//If/Else Statement

	if (month < 1 || month > 12)
	{
		cout << "Please enter in the day:" << endl;
	}
	else (cout << "Please enter in a Month between 1 and 12") << endl;
	
	if (month * day == year)
	{
		cout << "Congradulations!! This date is a MAGIC date!" << endl;
	}
	else (month * day != year)
	{
		cout << "Sorry... This date is not a MAGIC date!" << endl;
	}

}