//Chapter 6 Lab 2 Part 2; Population

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototype

double calcPopProjection(int, float, float, int);


//Main Function
int main()
{
	//initialize variables
	int populationA,
		years;
	float births,
		deaths,
		birthrate,
		deathrate;
	//obtain variables
	cout << "Please enter in the starting population" << endl;
	cin >> populationA;
	cout << "How many people were born in the population?" << endl;
	cin >> births;
	cout << "How many people died in the population?" << endl;
	cin >> deaths;
	cout << "How many years are you projecting?" << endl;
	cin >> years;

	//Calculate rates
	birthrate = births / 1000;
	deathrate = deaths / 1000;

	calcPopProjection(populationA, birthrate, deathrate, years);



		system("pause");
		return 0;
}

double calcPopProjection(int populationA, float birthrate, float deathrate, int years)
{
	double newpopulation;
	int populationA;
	
	newpopulation = (1 + birthrate)(1 - deathrate);

	return newpopulation;
}
