//Chapter 8 Lab Challenge 4; Chips and Salsa
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function Prototypes

int getSales(string[], int[], int);
int largestSale(int[], int);
int smallestSale(int[], int);
void displayOutput(string[], int[], int, int);

//Main Function

int main()
{
	//Inialize Parallel Arrays & total Sales variable

	const int SIZE = 5;
	string name[SIZE] = { "Mild", "Medium", "Sweet", "Hot" , "Zesty" };
	int sales[SIZE];
	int totalSold;

	//Call Functions

	totalSold = getSales(name, sales, SIZE);

	system("pause");

	displayOutput(name, sales, totalSold, SIZE);

	system("pause");

	cout << endl;

	return 0;

}

//This lets the user input and it validates the input for the sales of each type.

int getSales(string name[], int sales[], int SIZE)
{
	//input and accumlate sales into total.

	int total = 0;

	for (int types = 0; types < SIZE; types++)
	{
		cout << "Please enter the total number of jars sold for " << name[types] << " last month:" << endl;
		cin >> sales[types];
		while (sales[types] < 0)
		{
			cout << "ERROR - Sales MUST NOT be a negative number. Please Try again." << endl;
			cout << "Please enter the total number of jars sold for " << name[types] << " last month:" << endl;
			cin >> sales[types];
		}
		total += sales[types];
	}

	return total;
}

//This simply displays the output of all the data and
//calls two more funcions to determine which sale was largest and smallest out of the 5 types.

void displayOutput(string name[], int sales[], int total, int SIZE)
{
	//Function Calls to determine smallest and largest values

	int largestSales = largestSale(sales, SIZE);
	int smallestSales = smallestSale(sales, SIZE);

	//Display inputted values for each type

	cout << "Salsa Type Sales Report" << endl;
	cout << "_______________________" << endl;
	cout << " Name-------------Type " << endl;

	for (int types = 0; types < SIZE; types++)
	{
		cout << name[types] << setw(14) << sales[types] << endl;
	}

	cout << "Total Sales: --------- " << total << endl;
	cout << endl;
	cout << "Highest Selling Salsa: " << name[largestSales];
	cout << endl;
	cout << "Lowest Selling Salsa:  " << name[smallestSales];
	cout << endl;

}

//This uses simple logic to determine which type is the largest sale

int largestSale(int array[], int SIZE)
{
	int indexL = 0;

	for (int posL = 1; posL < SIZE; posL++)
	{
		if (array[posL] > array[indexL])
		{
			indexL = posL;
		}
	}

	return indexL;
}

//Likewise, this does the same thing as the function above, but the OPPOSITE: Which is smaller?

int smallestSale(int array[], int SIZE)
{
	int indexS = 0;

	for (int posS = 1; posS < SIZE; posS++)
	{
		if (array[posS] < array[indexS])
		{
			indexS = posS;
		}
	}

	return indexS;
}