#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
	//First exercise; Calories Burned

	//initialize Variables

	const double CAL_PR_MIN = 3.9;
	int mins;

	//display chart
	cout << fixed << setprecision(1);
	cout << "Time (Mins)    Calories Burned" << endl;
	cout << "------------------------------" << endl;

	//Loop Calculation

	for (mins = 5; mins <= 30; mins += 5)
	{
		cout << setw(5) << mins << setw(15) << (mins * CAL_PR_MIN) << endl;
	}

	cout << endl;
	cout << endl;

	system("pause");

	//Second Exercise; Membership Fees Increase

	//initalize variables

	
	double feeRate;

	//display chart
	cout << "year" << setw(15) << "Annual Membership Fee" << endl;
	cout << "-------------------------------------------" << endl;
	
	//Loop Calculation

	for (int years = 1; years <= 5; years++)
	{
		feeRate = (3000.00 * 1.03) * years;

		cout << years << setw(15) << feeRate << endl;
	}

	//seperate Programs

	cout << endl;
	cout << endl;
	
	system("pause");

	//third exercise; Random Number Guessing Game

	//initialize variables

	int correctNum,
		userNum;

	//Generate Random Number

	srand(time(0));

	correctNum = 1 + (rand() % 100);
	
	//loop user inputs
	do
	{
		cout << "Guess my number:" << endl;
		cin >> userNum;

		if (userNum > correctNum)
		{
			cout << "Too High. Try again." << endl;
		}

		if (userNum < correctNum)
		{
			cout << "Too Low. Try again." << endl;
		}
	} while (userNum != correctNum);

	//display correct message

	cout << "Congradulations! You are Correct!!" << endl;

	//seperate Programs

	cout << endl;
	cout << endl;

	system("pause");

	//fourth exercise; Random Number Guessing Game Enhanced

	//initialize variables

	int correctNum2,
		userNum2,
		guesses = 0;

	//Generate Random Number

	srand(time(0));

	correctNum2 = 1 + (rand() % 100);

	//loop user inputs
	do
	{
		guesses++;
		cout << "Guess my number:" << endl;
		cin >> userNum2;

		if (userNum2 > correctNum2)
		{
			cout << "Too High. Try again." << endl;
		}

		if (userNum2 < correctNum2)
		{
			cout << "Too Low. Try again." << endl;
		}
	} while (userNum2 != correctNum2);

	//display correct message

	cout << "Congradulations! You are Correct!! Also, It took you... " << guesses << " guesses to answer the question." << endl;

	//seperate Programs

	cout << endl;
	cout << endl;

	system("pause");

	return 0;


}