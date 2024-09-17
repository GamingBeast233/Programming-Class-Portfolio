#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{

	//Start of the 1st exercise; Property Tax

	//Initialize Variables

	double actualPropertyValue,
		assessedValue,
		taxableRate,
		totalTax;

	//Input Value for actual property value.

	cout << "Please input the 'actual' property value:" << endl;
	cin >> actualPropertyValue;

	//Calculate

	assessedValue = actualPropertyValue * .60;
	
	//Output Result
	
	cout << "The Assessed Value for a value of $" << actualPropertyValue << " of property is $" << assessedValue << endl;

	//Input next Value

	cout << "Please input a tax rate:" << endl;
	cin >> taxableRate;

	//Calculate

	totalTax = assessedValue / 100 * taxableRate;

	//Output Result

	cout << "Total Property Tax: $" << totalTax << endl;
	
	//pause system

	cout << endl;
	cout << endl;
	cout << endl;

	//Start of the 2nd exercise; Senior Citzen Property Tax

	//Initialize Variables

	double Property,
		assessedNum,
		taxableRat,
		totalBQuarter,
		total;

	//Input Value for actual property value.

	cout << "Please input the 'actual' property value:" << endl;
	cin >> Property;

	//Calculate

	assessedNum = Property * .60 - 5000;

	//Output Result

	cout << "The Assessed Value for a value of $" << Property << " of property is $" << assessedNum << endl;

	//Input next Value

	cout << "Please input a tax rate:" << endl;
	cin >> taxableRat;

	//Calculate

	totalBQuarter = assessedNum / 100 * taxableRat;

	//Output Result

	cout << "Total Tax: $" << totalBQuarter << endl;

	//Calculate Quarterly Payment

	total = totalBQuarter / 4;

	//Output Result

	cout << "You Pay: $" << total << endl;

	//Pause System

	cout << endl;
	cout << endl;
	cout << endl;

	//3rd Exercise; Math Tutor

	//Ouput Numbers to be added

	srand(time(0));

	int x = (rand() % 10),
		y = (rand() % 10);

	cout << x << endl;
	cout << y << endl;

	//Initialize Variable

	int answer;

	//Input Value

	cout << "What's the answer when you add (+) the two numbers above?" << endl;
	cin >> answer;

	//If Statement

	if (answer == x + y)
	{

		cout << "Correct! Good job!" << endl;

	}
	else
	{

		cout << "That is the wrong answer." << endl;

	}
	
	//pauses system

	cout << endl;
	cout << endl;
	cout << endl;

	//4th Exercise; Interest Earned

	//Initialize Variables

	double amount,
		principle,
		interestRate,
		tCompounded,
		interest,
		interestAsPct;

	//Input Values

	cout << "Please enter in your balance:" << endl;
	cin >> principle;
	cout << "Please enter in the interest rate:" << endl;
	cin >> interestRate;
	cout << "And, Finally, Please enter in the times compounded during the year:" << endl;
	cin >> tCompounded;

	// Calculate interest earned and amount in account at end of one year
	amount = principle *
		pow((1 + (interestRate / tCompounded)), tCompounded);
	interest = amount - principle;
	interestAsPct = interestRate * 100;

	//Output Result

	cout << "Starting Balance: $" << principle << endl;
	cout << "Interest Rate: " << interestAsPct << "%" << endl;
	cout << "Times Compounded: " << tCompounded << endl;
	cout << "Interest: $" << interest << endl;
	cout << "Final Balance: $" << amount << endl;

	//Skip lines

	cout << endl;

	system("pause");
	
	return 0;

}


