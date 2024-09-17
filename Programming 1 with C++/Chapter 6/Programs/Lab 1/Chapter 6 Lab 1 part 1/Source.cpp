#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

double getsales(string);
void findHighest(double, double, double, double);

//Main Function
int main()
{
	//initialize variables

	double totalSalesNE = 0, totalSalesSE = 0, totalSalesNW = 0, totalSalesSW = 0;
	
	//Call Function Multiple times with each division

	getsales("NorthEast");
	getsales("SouthEast");
	getsales("NorthWest");
	getsales("SouthWest");

	findHighest(totalSalesNE, totalSalesSE, totalSalesNW, totalSalesSW);

	system("pause");
	return 0;
	
}
//This Function is called by Main by each division; It lets the user input, validate, and return the sales' value to the Main
double getsales(string dName)
{
	//initialize total sales variable
	double totalSales;
	cout << "Please enter in the quarterly sales for this division: " << dName << endl;
	cin >> totalSales;
	//test the condition and loop until a reasonable input is accepted
	while (totalSales < 0.00)
	{
		cout << "ERROR - That is not an actual sales' amount. Please enter in a positive amount, and please try again." << endl;
		cout << "Please enter in the quarterly sales for this division: " << dName << endl;
		cin >> totalSales;
	}
	return totalSales;
}
//This Function is called by Main to sort the divisions using logics based on the input.
void findHighest(double totalSalesNE, double totalSalesSE, double totalSalesNW, double totalSalesSW)
{
	double highest = totalSalesNE;

	if (highest < totalSalesSE)
	{
		highest = totalSalesSE;
	}
	else if (highest < totalSalesNW)
	{
		highest = totalSalesNW;
	}
	else if (highest < totalSalesSW)
	{
		highest = totalSalesSW;
	}
	cout << "Highest selling division: " << highest << endl;
}