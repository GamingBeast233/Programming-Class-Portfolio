//This program calculates the average of 5 test scores where the lowest test score is dropped. Program Challenge 8; Lowest Score Drop
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;
//prototype function names
void getscore(int);
void calcavg(int, int, int, int, int, int);
int findlowest(int, int, int, int, int);

//Main Function
int main()
{
	//initialize variables
	int score1{}, score2{}, score3{}, score4{}, score5{};

	//call the function Multiple times
	getscore(score1);
	getscore(score2);
	getscore(score3);
	getscore(score4);
	getscore(score5);

	findlowest(score1, score2, score3, score4, score5);



	system("pause");

	return 0;
}

void getscore(int)
{
	//Initalize and input values.
	int score;
	cout << "NOTE - This process repeats 5 times." << endl;
	cout << "Please enter a test score:" << endl;
	cout << "NOTE: Test scores must be between 0 - 100." << endl;
	cin >> score;
	//Loop to validate input
	while (score < 0 || score > 100)
	{
		cout << "ERROR - Score must be between 0 - 100! Please try again" << endl;
		cout << "Please enter a test score:" << endl;
		cin >> score;
	}
}
//This Function calculates the average of the 4 test scores
void calcavg(int score1, int score2, int score3, int score4, int score5, int lowestScore)
{
	//Initialize average variable
	double avgbdivide, avg;
	//Calculate the average
	avgbdivide = (((float)score1 + score2 + score3 + score4 + score5) - lowestScore);
	avg = avgbdivide / 4.00;
	//Format Output
	cout << setw(4);
	cout << fixed << setprecision(2);
	cout << "Average of Test Scores w/o Lowest:" << avg << endl;
}


int findlowest(int score1, int score2, int score3, int score4, int score5)
{
	int lowestScore = score1;

	if (score2 < lowestScore)
	{
		lowestScore = score2;
	}
	else if (score3 < lowestScore)
	{
		lowestScore = score3;
	}
	else if (score4 < lowestScore)
	{
		lowestScore = score4;
	}
	else if (score5 < lowestScore)
	{
		lowestScore = score5;
	}

	cout << "Lowest Test Score: " << lowestScore << endl;

	return lowestScore;
}
