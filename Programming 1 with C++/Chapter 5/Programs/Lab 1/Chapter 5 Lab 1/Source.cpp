#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//First Exercise; Sum of Numbers

	//Initialize Variables

	int n;
	int sum = 0;

	//Input and Validate Data
	do
	{

	cout << "Please enter in a POSITIVE integer." << endl;
	cout << "Or type 0 to EXIT." << endl;
	cin >> n;

	} while (n <= 0);

	for (int i = 1; n <= i; i++)
	{
		sum += i;
	}
	
	cout << "Sum of " << n << " is: " << sum << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	system("pause");

	return 0;
}