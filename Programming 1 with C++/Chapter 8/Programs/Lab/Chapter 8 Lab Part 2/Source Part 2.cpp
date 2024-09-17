#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes

int largerThanN(int nums[], int SIZE, int n);

//Main Function

int main()
{
	//Initalize Variables
	const int SIZE = 10;
	int nums[SIZE];
	int n;
	int numsLOfN;

	//Input Array Values

	cout << "Please enter in " << SIZE << " Numbers..." << endl;

	//Pause inbetween

	system("pause");

	for (int count = 0; count < SIZE; count++)
	{
		cout << "Enter a Number..." << endl;
		cin >> nums[count];
	}

	//Clear last inputs

	system("cls");
	
	//Input N

	cout << "Now enter in another (Seperate) number [AKA 'n']" << endl;
	cin >> n;

	//Clear screen

	system("cls");

	//Review inputs

	cout << "Let's Review your inputs" << endl;

	system("pause");

	for (int count = 0; count < SIZE; count++)
	{
		cout << nums[count] << endl;
	}

	cout << endl;
	cout << endl;

	//Function Call
	numsLOfN = largerThanN(nums, SIZE, n);

	cout << "Numbers larger than the number you entered (n): " << numsLOfN;

	cout << endl;
	cout << endl;

	return 0;
}

//Larger than N Function; It determines which numbers within the array is larger than n.

int largerThanN(int nums[], int SIZE, int n)
{
	int howmany{};
	for (int count = 0; count < SIZE; count++)
	{
		if (nums[count] > n)
		{
			howmany++;
		}
	}

	return howmany;
}
