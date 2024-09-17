#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes
int countPerfect(int testscores[], int SCORES);

//Main Function
int main()
{
	//Initalize Variables & Array
	const int SCORES = 20;
	int testscores[SCORES];
	int perfect_scores;

	//Show user how many inputs

	cout << "Please input test scores for this many students: " << SCORES << endl;

	system("pause");

	cout << "Enter Scores Now!" << endl;

	//input values
	for (int count = 0; count < SCORES; count++)
	{
		cin >> testscores[count];
		while (testscores[count] < 0 || testscores[count] > 100)
		{
			cout << "ERROR - Test scores MUST be between 0 and 100. Please try again." << endl;
			cout << "Enter Scores Now!" << endl;
			cin >> testscores[count];
		}

	}

	cout << "To make sure of your input, Let's review your inputs." << endl;
	
	system("pause");

	cout << "Here's the scores you entered:" << endl;

	for (int count = 0; count < SCORES; count++)
	{
		cout << testscores[count] << endl;
	}

	system("pause");

	perfect_scores = countPerfect(testscores, SCORES);

	//report number of 100s

	cout << "Number of Perfect Scores (AKA 100): " << perfect_scores << endl;

	return 0;
}

int countPerfect(int testscores[], int SCORES)
{
	int numPerfect = 0;

	for (int count = 0; count < SCORES; count++)
	{
		if (testscores[count] == 100)
		{
			numPerfect++;
		}
	}

	return numPerfect;
}
