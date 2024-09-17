#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
	//Start of exercise one; Miles per Gallon

	//initialize variables

	float gallonsPerTank,
		milesPerFullTank,
		milesPerGallon;


	//input numbers

	cout << "Please press enter after every action..." << endl;
	cout << "Please enter in the gallons your car tank can hold in the space provided." << endl;
	cin >> gallonsPerTank;
	cout << "Ok. Now enter in the space provided the number of miles that your " << gallonsPerTank << endl;
	cout << "gallon tank can drive." << endl;
	cin >> milesPerFullTank;
	cout << "Great! Now with the " << milesPerFullTank << " miles and " << gallonsPerTank << " gallons" << endl;
	cout << "I can calulate... Give me a few moments..." << endl;
	

	//calculate

	milesPerGallon = milesPerFullTank / gallonsPerTank;


	//output results

	cout << " Beep boop boop boot boop bee boop be boop boop... *computer noises and buzzes*" << endl;
	cout << "Thank you for waiting! Now after some calculations... your car can get " << milesPerGallon << " miles per gallon." << endl;


	//pause system output

	system("pause");

	//Start of Second Exercise; Housing Costs

	//initalize Variables

	double monthlyrent,
		utilityPayment,
		phoneLandLinePayment,
		cablePayment,
		totalMonthlyPayment, //This is per month
		totalAnnualPayment; //This is per Year (12 Months)

	//input data

	cout << "Please enter in your payments for each." << endl;
	cout << "Your Monthly Rent:" << endl;
	cin >> monthlyrent;
	cout << "Your Monthly Ultility Payment:" << endl;
	cin >> utilityPayment;
	cout << "Your LandLine Monthly Payment (AKA Your Phone Payment):" << endl;
	cin >> phoneLandLinePayment;
	cout << "And Finally, your Cable Monthly Payment:" << endl;
	cin >> cablePayment;

	//Calculate

	totalMonthlyPayment = monthlyrent + utilityPayment + phoneLandLinePayment + cablePayment;
	
	totalAnnualPayment = totalMonthlyPayment * 12;

	//Output Results

	cout << "Your monthly payment:	$" << totalMonthlyPayment << endl;
	cout << "Your annual payment:	$" << totalAnnualPayment << endl;

	//pause system

	system("pause");

	//Start of the Third exercise; How Much Insurance?

	//intialize variables

	double replacementCost,
		insuranceRate = .80,
		minimumInsuranceCoverage;

	//input

	cout << "Input your replacement cost for a building:" << endl;
	cin >> replacementCost;

	//calculate

	minimumInsuranceCoverage = replacementCost * insuranceRate;

	//output Results

	cout << "Your Coverage is... $" << minimumInsuranceCoverage << "." << endl;

	system("pause");

	//start of the Fourth Exercise; Batting Average

	//initialize Variables

	float timesToBat,
		numOfHits,
		battingAvg;

	//input values

	cout << "Enter the number of times a batter comes to hit:" << endl;
	cin >> timesToBat;
	cout << "How many times did said batter hit?" << endl;
	cin >> numOfHits;

	//calculate

	battingAvg = timesToBat / numOfHits;

	//output results

	cout << "Batting Average:" << endl;
	cout << fixed << setprecision(4) << battingAvg << endl;

	//pauses

	system("pause");

	//Start of Fifth exercise; Test Score Average

	//intialize Variables

	double test1,
		test2,
		test3,
		test4,
		test5,
		testTotal,
		testAvg;

	//input values

	cout << "Please press enter after every score. Input test scores now." << endl;
	cin >> test1;
	cin >> test2;
	cin >> test3;
	cin >> test4;
	cin >> test5;

	//Calculate

	testTotal = test1 + test2 + test3 + test4 + test5; //This adds up the test scores (since divsion would happen first).

	testAvg = testTotal / 5; //This Actually calculatest the average.

	//output Results

	cout << "Test Score Average: " << fixed << setprecision(1) << testAvg << endl;

	system("pause");

	//Start of Final (Sixth) Exercise; Average Rainfall

	//intialize Variables

	string month1,
		month2,
		month3;
	float month1Rainfall,
		month2Rainfall,
		month3Rainfalll,
		totalRainfall,
		avgRainfall;

	//input

	cout << "Please type in the month then press Enter. After that, type in the rainfall for that month. Press Enter." << endl;
	cout << "Month 1:" << endl;
	cin >> month1;
	cin >> month1Rainfall;
	cout << "Month 2:" << endl;
	cin >> month2;
	cin >> month2Rainfall;
	cout << "Month 3:" << endl;
	cin >> month3;
	cin >> month3Rainfalll;

	//Calculate

	totalRainfall = month1Rainfall + month2Rainfall + month3Rainfalll;

	avgRainfall = totalRainfall / 3;

	//output results

	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " was... " << avgRainfall << "." << endl;

	//pauses

	system("pause");


	return 0;
}