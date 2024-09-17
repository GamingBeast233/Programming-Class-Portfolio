#include <iostream>
#include <cmath>
#include <iomanip> 


using namespace std;

int main()
{
	//First Exercise; Bank Charges

	//initialize variables & input values

	int numOfChecks;
	double totalBankCharges;

	cout << "Please input the number of checks written in the last month, then press Enter to continue." << endl;
	cin >> numOfChecks;

	//validate input

	if (numOfChecks < 0)
	{
		cout << "Please input a number greater than 0." << endl;
		cout << "Program exiting..." << endl;
	}
	else
	{
		if (numOfChecks >= 1 && numOfChecks <= 29)
		{
			totalBankCharges = numOfChecks * .10 + 15;
			cout << "Total Bank Charges for this month: $" << totalBankCharges << endl;
		}
		if (numOfChecks >= 20 && numOfChecks <= 39)
		{
			totalBankCharges = numOfChecks * .08 + 15;
			cout << "Total Bank Charges for this month: $" << totalBankCharges << endl;
		}
		if (numOfChecks >= 40 && numOfChecks <= 59)
		{
			totalBankCharges = numOfChecks * .06 + 15;
			cout << "Total Bank Charges for this month: $" << totalBankCharges << endl;
		}
		if (numOfChecks >= 60)
		{
			totalBankCharges = numOfChecks * .04 + 15;
			cout << "Total Bank Charges for this month: $" << totalBankCharges << endl;
		}
		else if (numOfChecks == 0)
		{
			totalBankCharges = 15;
			cout << "Total Bank Charges for this month: $" << totalBankCharges << endl;
		}
	}

	//seperate programs
	cout << endl;
	cout << endl;
	cout << endl;

	system("pause");

	//Second Exercise; Geometry Calculator

	//initialize variables

	int choice;
	double areaB4Pow,
		AreaAfPow;
	float radius,
		area,
		length,
		width,
		base,
		height;

	//Display Menu

	cout << "Geometry Calculator" << endl;
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit the Program" << endl;
	cout << "Please enter your choice. (1-4)" << endl;
	cin >> choice;

	//Validate Choice
	if (choice >= 1 && choice <= 4)
	{ //Calculate based on user input and ask for other input values
		switch (choice)
		{
		case 1: cout << "Please enter the Radius of the Circle:" << endl;
			cin >> radius;
			areaB4Pow = 3.14159 * radius;
			AreaAfPow = pow(areaB4Pow, 2);
			cout << "Area of the Circle: " << AreaAfPow << endl;
			break;
		case 2: cout << "Please enter the length and width of the rectangle:" << endl;
			cout << "Length:" << endl;
			cin >> length;
			cout << "Width:" << endl;
			cin >> width;
			area = length * width;
			cout << "Area of a Rectangle: " << area << endl;
			break;
		case 3: cout << "Please enter the base and height of a Triangle:" << endl;
			cout << "Base:" << endl;
			cin >> base;
			cout << "Height:" << endl;
			cin >> height;
			area = 0.5 * base * height;
			cout << "Area of a Triangle: " << area << endl;
			break;
		default: cout << "Program Terminating" << endl;
		}
	}
	//Seperate Programs
	cout << endl;
	cout << endl;
	cout << endl;

	//Third Exercise; Running the Race

	//initialize variables
	//string name1,
		//name2,
		//name3;
	//double fTime,
		//sTime,
		//tTime;

	//Can't figure out what to do.

	//Fourth Exercise; Personal Best

	// Refer to Third Exercise

	//Fifth Exercise; Body Mass Index

	//Can't figure out how to plug in a pow function.

	//Sixth Exercise; Fat Gram Calculator

	//Initalize Variables & Input

	int calories, caloriesFromFat, fatCalPercent, fatGrams;

	cout << "Please enter the number of calories in your meal:" << endl;
	cin >> calories;

	if (calories > 0)
	{
		cout << "Please enter in the Fat (in grams) that the meal contains:" << endl;
		cin >> fatGrams;

		if (fatGrams >= 0)
		{
			caloriesFromFat = fatGrams * 9;
			fatCalPercent = caloriesFromFat / calories;
			
			cout << "Percent of calories from fat within your meal: " << fatCalPercent << "%" << endl;
			
			if (fatCalPercent < 30)
			{
				cout << "This meal is low in fat!! Good Healthy eating!" << endl;
			}
		}
		else
		{
			cout << "Please enter either 0 or a number greater than 0." << endl;
			cout << endl;
			cout << "Please try again." << endl;
		}
	}
	else
	{
		cout << "Please enter a number Greater than 0." << endl;
		cout << endl;
		cout << "Please try again." << endl;

	}

	system("pause");

	return 0;

}