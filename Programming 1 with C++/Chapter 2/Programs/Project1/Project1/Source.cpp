#include <iostream>
using namespace std; 
int main()
{
	int number_of_pods, peas_per_pod, total_peas;

	cout << "please press enter after entering a number \n";
	cout << "Enter the number of pods:  ";
	cin >> number_of_pods;
	cout << "Enter the number of peas per pod:   "; 
	cin >> peas_per_pod; 
	total_peas = number_of_pods * peas_per_pod; 

	cout << "If you have "; number_of_pods; "pods, and "; peas_per_pod; " peas per pod, then you have "; total_peas; "peas in total \n";


	system("pause");
	return 0;
}