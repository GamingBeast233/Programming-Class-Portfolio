//Chapter 6 Lab 2 Part 1; Overloaded Hospital

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes

//show menu
void displaymenu();

//Validates the choice
int getchoice();

//validates input for charges/Days
double validateChargeRateIN(double&, double&, double&);
double validateChargesOUT(double&, double&);
int validateDays(int&);


//Overloaded Functions for calculating the total charges
void totalCharges(string, double&, double&);
void totalCharges(string, int&, double&, double&, double&);

//Main Function
int main()
{
	int choice;
	int days_in_hospital;
	double dailyRate;
	double labTestCharges;
	double hospitalMeds;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		displaymenu();
		choice = getchoice();
		if (choice != 3)
		{
			switch (choice)
			{
			case 1: totalCharges("Outpatient", labTestCharges, hospitalMeds);
				break;
			case 2: totalCharges("Inpatient", days_in_hospital, dailyRate, labTestCharges, hospitalMeds);
				break;
			}
		}

	} while (choice != 3);

	cout << "Thank you for choosing the Overloaded Hospital. Please come back soon for all of your medical needs!" << endl;
	return 0;
}

//Display Menu Function
void displaymenu()
{
	system("cls");
	cout << "Welcome to the Overloaded Hospital" << endl;
	cout << "----------------------------------" << endl;
	cout << "Please select your choice:" << endl;
	cout << "1. Outpatient" << endl;
	cout << "2. Inpatient" << endl;
	cout << "3. Quit the program" << endl;
}

//Validating Choice Function
int getchoice()
{
	int choice;
	cin >> choice;
	return choice;
}

//Overloaded Calculate total charges function for "outpatient"

void totalCharges(string patientO, double&, double&)
{
	double totalOUT{};
	double labTestCharges,
		hospitalMeds;

	cout << "Please enter the values specified for " << patientO << "." << endl;
	cout << "Lab Serivce Charges (EX: Lab Tests, Etc.):" << endl;
	cin >> labTestCharges;
	cout << "Medication charges:" << endl;
	cin >> hospitalMeds;

	totalOUT = labTestCharges + hospitalMeds;

	cout << "Your total charges is: $" << totalOUT << endl;

	system("pause");

}

//Overloaded Calculate total charges function for "Inpatient"

void totalCharges(string patientI, int&, double&, double&, double&)
{
	double totalIN{};
	int days_in_hospital;
	double dailyRate,
		labTestCharges,
		hospitalMeds;
	double dayCharges;

	cout << "Please enter the values specified for " << patientI << "." << endl;
	cout << "How many days did the patient spend in the hosipital?" << endl;
	cin >> days_in_hospital;
	validateDays(days_in_hospital);
	cout << "What is the daily rate?" << endl;
	cin >> dailyRate;
	cout << "Lab Serivce Charges (EX: Lab Tests, Etc.):" << endl;
	cin >> labTestCharges;
	cout << "Medication charges:" << endl;
	cin >> hospitalMeds;
	validateChargeRateIN(dailyRate, labTestCharges, hospitalMeds);

	dayCharges = dailyRate * days_in_hospital;
	
	totalIN = dayCharges + labTestCharges + hospitalMeds;

	cout << "Your total charges is: $" << totalIN << endl;

	system("pause");
}

//Validatation functions

//Daily Rate Validation
double validateChargeRateIN(double& dailyrate, double& labTestCharges, double& hospitalMeds)
{
	while (dailyrate < 0.0)
	{
		cout << "ERROR - Please enter in a positive decimal or 0. Please try again." << endl;
		cin >> dailyrate;
	}
	while (labTestCharges < 0.0)
	{
		cout << "ERROR - Please enter in a positive decimal or 0. Please try again." << endl;
		cin >> labTestCharges;
	}
	while (hospitalMeds < 0.0)
	{
		cout << "ERROR - Please enter in a positive decimal or 0. Please try again." << endl;
		cin >> hospitalMeds;
	}
	return dailyrate, labTestCharges, hospitalMeds;
}

double validateChargesOUT(double& labTestCharges, double& hospitalMeds)
{
	while (labTestCharges < 0.0)
	{
		cout << "ERROR - Please enter in a positive decimal or 0. Please try again." << endl;
		cin >> labTestCharges;
	}
	while (hospitalMeds < 0.0)
	{
		cout << "ERROR - Please enter in a positive decimal or 0. Please try again." << endl;
		cin >> hospitalMeds;
	}
	return labTestCharges, hospitalMeds;
}

//Number of days Validation
int validateDays(int& days_in_hospital)
{

	while (days_in_hospital < 0)
	{
		cout << "ERROR - Days must be a positive integer or 0. Please try again" << endl;
		cin >> days_in_hospital;
	}

	return days_in_hospital;
}