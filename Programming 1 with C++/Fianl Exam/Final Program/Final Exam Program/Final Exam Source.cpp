//Final Exam Program
//This program demostrates the concept of passing Arrays as arguments to your functions
#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes
void displayarrays(int array1[], int array2[], int SIZE);
void reversearrays(int array1[], int array2[], int SIZE);
int minimumnum1(int array1[], int SIZE);
int minimumnum2(int array2[], int SIZE);
void sumarrays(int array1[], int array2[], int SIZE);
double meanarrays1(int array1[], int SIZE);
double meanarrays2(int array2[], int SIZE);
void lessthanfive(int array1[], int SIZE);
void compare_arrays(int array1[], int array2[], int SIZE);

//Main Function
int main()
{
	//Initalize Array 1, Array 2, and other Variables
	const int SIZE = 10;
	int array1[SIZE];
	int array2[SIZE];
	int minimum1;
	int minimum2;
	double average_array1;
	double average_array2;

	//Input values for Array 1
	cout << "Please input " << SIZE << " values for the first array:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> array1[i];
		cout << endl;
	}

	//Input Values for Array 2 (Used Later On)
	cout << "Please input " << SIZE << " values for the second array:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> array2[i];
		cout << endl;
	}

	cout << endl;
	cout << "Now let's review your inputs..." << endl;
	
	system("pause");

	//Call display Function
	displayarrays(array1, array2, SIZE);

	cout << "Now let's see these values in reverse order!" << endl;

	system("pause");

	//Call reverse display function
	reversearrays(array1, array2, SIZE);

	cout << "Now let's see the lowest value of the two arrays." << endl;

	system("pause");
	
	minimum1 = minimumnum1(array1, SIZE);

	cout << "The Smallest value of array one is..." << endl;

	system("pause");

	cout << minimum1 << endl;

	minimum2 = minimumnum2(array2, SIZE);

	cout << "The Smallest value of array two is..." << endl;

	system("pause");

	cout << minimum2 << endl;

	cout << endl;

	cout << "Now let's add up the sum of the two arrays." << endl;

	system("pause");

	sumarrays(array1, array2, SIZE);

	cout << "Now let's find the average of the two arrays." << endl;

	system("pause");

	average_array1 = meanarrays1(array1, SIZE);

	cout << "The average of array one is:" << endl;
	cout << average_array1 << endl;

	average_array2 = meanarrays2(array2, SIZE);

	cout << "The average of the second array is:" << endl;
	cout << average_array2 << endl;

	system("pause");

	lessthanfive(array1, SIZE);

	system("pause");

	cout << "Now let's compare the two arrays we have created at the beginning!" << endl;

	system("pause");

	compare_arrays(array1, array2, SIZE);
	
	system("pause");

	return 0;
}


//Display Array function simply display the values stored in the two arrays.
void displayarrays(int array1[], int array2[], int SIZE)
{
	//Display Values for Array 1
	cout << "Array 1:" << endl;
	system("pause");
	for (int i = 0; i < SIZE; i++)
	{
		cout << array1[i] << endl;
	}

	//Display values for Array 2
	cout << "Array 2:" << endl;
	system("pause");
	for (int i = 0; i < SIZE; i++)
	{
		cout << array2[i] << endl;
	}
}

//This function works the same as the one above EXCEPT it displays values in reverse order/Backwards.
void reversearrays(int array1[], int array2[], int SIZE)
{
	//Display values of array 1 backwards
	cout << "Array 1:" << endl;
	system("pause");
	for (int i = 9; i > 0; i--)
	{
		cout << array1[i] << endl;
	}

	//Display Values for array 2 Backwards
	cout << "Array 2:" << endl;
	system("pause");
	for (int i = 9; i > 0; i--)
	{
		cout << array2[i] << endl;
	}
}

//This function determines the lowest value of the First array
int minimumnum1(int array1[], int SIZE)
{
	//Initialize Variable
	int lowest_num1;

	//find lowest value of array 1
	lowest_num1 = array1[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (array1[i] < lowest_num1)
		{
			lowest_num1 = array1[i];
		}
	}

	return lowest_num1;
}

//This function does the same as the one above, but with the second array.
int minimumnum2(int array2[], int SIZE)
{
	//initialize Variable
	int lowest_num2;

	//find lowest value of array 2
	lowest_num2 = array2[0];
	
	for (int i = 1; i < SIZE; i++)
	{
		if (array2[i] < lowest_num2)
		{
			lowest_num2 = array2[i];
		}
	}
	return lowest_num2;
}

//This function sums up the total of the two arrays
void sumarrays(int array1[], int array2[], int SIZE)
{
	//Initailize Accumulator
	int total1 = 0;
	int total2 = 0;

	//Calculate sum of the two arrays together
	for (int i = 0; i < SIZE; i++)
	{
		total1 += array1[i];
		total2 += array2[i];
	}

	cout << "Total of First Array:" << endl;
	cout << total1;
	cout << endl;
	system("pause");
	cout << "Total of second Array:" << endl;
	cout << total2;
	system("pause");
}

//This function calculates the Mean (average) of the First array
double meanarrays1(int array1[], int SIZE)
{
	//initialize Variables
	int total1 = 0;
	double average1;

	for (int i = 0; i < SIZE; i++)
	{
		total1 += array1[i];
	}

	average1 = total1 / SIZE;

	return average1;
}

//This function does the same as the one above, but for the Second array
double meanarrays2(int array2[], int SIZE)
{
	int total2 = 0;
	double average2;

	for (int i = 0; i < SIZE; i++)
	{
		total2 += array2[i];
	}

	average2 = total2 / SIZE;

	return average2;
}

void lessthanfive(int array1[], int SIZE)
{
	cout << "Here's the values of the first array that are less than 5:" << endl;
	system("pause");
	for (int i = 0; i < SIZE; i++)
	{
		if (array1[i] < 5)
		{
			cout << array1[i] << endl;
		}
	}
}

//This function Compares the two arrays and determines if they are equal (true) or not (false)
void compare_arrays(int array1[], int array2[], int SIZE)
{
	bool status = true;
	int i = 0;

	while (status && i < SIZE)
	{
		if (array1[i] != array2[i])
		{
			status = false;
		}
		i++;
	}
	if (status)
	{
		cout << "The arrays are equal, so this is a true statement!" << endl;
	}
	else
	{
		cout << "The arrays are not equal, so this is a false statement!" << endl;
	}
}
