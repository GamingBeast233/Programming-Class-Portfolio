#include <iostream>

using namespace std;

int main()

{
	//This program is the sum of 50 and 100 and outputs the total. (First Exercise)

	//Defining Variables.

	int num1, num2, total;
	num1 = 50; //First variable is 50.
	num2 = 100; //Second variable is 100
	total = num1 + num2; //This is the sum of Num1 and Num2

	//This is what the output is.
	
	cout << "The total of " << num1 << " and " << num2 << " is " << total << endl;
	
		system("pause");

	//second exercise. This is an estimated total sales for East Coast.
	float SalesPct = .58; //Floating value for sales percent (58%)
	double TotalSales = 8600000.00;  //This is the total sales. It is 8,600,000.00.
	double PredictedSales = SalesPct * TotalSales;
	cout << "Predicted East Coast Sales = $ " << PredictedSales << endl;

		system("pause");

	//Third Exercise
	//Calculates Sales Tax
	
	double salePrice = 95.00, //This is how much the item is.
		stateTaxPercent = .065, //This is the rate of State Tax.
		countyTaxPercent = .02, //This is the Tax rate relative to the county within the state.
		stateTax, //This is the State Tax calculated as an ammount.
		countyTax, // This is the County Tax calculated as an ammount.
		totalSale; //This is how much is charged after tax.
	
	// Now time to do math. AKA calculate the sales tax.

	stateTax = salePrice * stateTaxPercent;
	countyTax = salePrice * countyTaxPercent;
	totalSale = stateTax + countyTax;

	//Output

	cout << "The price for a random item is: $" << salePrice << endl;
	cout << "The calculated State Tax on the item is: $" << stateTax << endl;
	cout << "The calculated County Tax on the item is: $" << countyTax << endl;
	cout << "The total sale of the item is: $" << totalSale << endl;

		system("pause");

	//Fourth Exercise. This calculates a resturant bill with tax and tip.

	//Defining and setting ammounts for Variables.
	
	double mealCost = 44.50,
		taxRate = .0675,
		tipRate = .15,
		taxAmt,
		tipAmt,
		totalBill;

	taxAmt = taxRate * mealCost;
	tipAmt = tipRate * (mealCost + taxAmt);
	totalBill = mealCost + taxAmt + tipAmt;

	//Output

	cout << "Meal Cost $" << mealCost << endl;
	cout << "Tax       $" << taxAmt << endl;
	cout << "Tip       $" << tipAmt << endl;
	cout << "Total     $" << totalBill << endl;

		system("pause");

	//Exercise 5; Miles per Gallon

	//Define Variables
	double gallonsInTank = 16.0; //Gallons within the tank
	double milesPerTank = 312.0; //Miles you can drive per refill.
	double milesPerGallon; //Miles per gallon (Obviously)

	//Caluculations

	milesPerGallon = milesPerTank / gallonsInTank;

	//Output

	cout << "This car can get " << milesPerGallon << " Miles per 1 gallon in the tank.\n";

		system("pause");

	//Eighth Exercise. This calculates the sqr feet and number of square meters in a Half acre of land.

	//Defining the Variables.

	double sqrFtPerAcre = 43560.0,
		sqrFtPerSqrMeter = 10.7639,
		HalfAcrePerSqrFt,
		HalfAcrePerSqrMeters;

	//Calculations

	HalfAcrePerSqrFt = sqrFtPerAcre / 2;
	HalfAcrePerSqrMeters = HalfAcrePerSqrFt / sqrFtPerSqrMeter;

	//Output

	cout << "A 1/2 acre of land is equivalant to " << HalfAcrePerSqrFt << " Square feet and " << HalfAcrePerSqrMeters << " square meters. \n";
	
		system("pause");

	return 0;

}
