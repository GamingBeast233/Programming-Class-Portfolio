#include <iostream>

using namespace std;

int main()

{
	//Beginning of the First Exercise. (Circuit Board Price)

	//Intialize Variables

	double circuit_board_produce_price = 14.95,
		profitProjection = 1.35,
		list_price;

		//Calculate

	list_price = circuit_board_produce_price * profitProjection;



		//Output Results

		cout << "Circuits should be sold for a price of $" << list_price << endl;

		//pauses the system output

	system("pause");

	//Second Exercise; Personal Information

	//Initialize Variables

	string name, houseNum, county, street, streetNum, city, state, zipCode, phoneNum, collegeMajorWord1, collegeMajorWord2;

	//Output Results

	cout << "Hi! What's your name?" << endl;

	cin >> name;

	cout << "Hi, " << name << ". Where do you live? Please enter in your address. After every number/word, press Enter. (EX House Number [Enter], Street [Enter], Etc.)" << endl;

	cin >> houseNum;
	cin >> county;
	cin >> street;
	cin >> streetNum;
	cin >> city;
	cin >> state;
	cin >> zipCode;

	cout << "Oh! Nice place! I used to live around the address of " << houseNum << " " << county << " " << street << " " << streetNum << " " << city << " " << state << " " << zipCode << "." << endl;
	cout << "Let me ask you, what is your phone number? Enter in the space provided." << endl;

	cin >> phoneNum;
	
	cout << "Ohhhhh.... So your phone number is " << phoneNum << "? Nice!" << endl;
	cout << "Well What's your major? Enter your answer in the space provided." << endl;
	
	cin >> collegeMajorWord1;
	cin >> collegeMajorWord2;
	
	cout << collegeMajorWord1 << " " << collegeMajorWord2 << "? Me too!! Hope you do well in your studies." << endl;
	cout << "Well, Buh bye!" << endl;

	system("pause"); //Pauses the System.

	//Third Exercise; Diamond Pattern Picture
	
	//Output Results
	
	cout << "   *   " << endl;
	cout << "  ***  " << endl;
	cout << " ***** " << endl;
	cout << "*******" << endl;
	cout << " ***** " << endl;
	cout << "  ***  " << endl;
	cout << "   *   " << endl;

	//pauses Output

	system("pause");

	//Fourth Exercise; Pay Period Gross Pay

	//Initialize Variables

	double annualPayment = 39000.00,
		rateForBiWeekly = 26.00,
		rateForTwiceMonth = 24.00,
		biWeeklyGross,
		twiceMonthGross;

	//perform operations

	twiceMonthGross = annualPayment / rateForTwiceMonth;

	biWeeklyGross = annualPayment / rateForBiWeekly;

	//output Results

	cout << "A gross payment for an employee that earns a paycheck twice a month is: $" << twiceMonthGross << "." << endl;
	cout << "A gross payment for an employee that earns a paycheck bi-weekly is: $" << biWeeklyGross << "." << endl;

	//Pauses

	system("pause");

	//Fifth exercise; Basketball Player Height

	//Initialize Variables

	int heightInInches = 74,
		inchesPerFoot = 12,
		heightInFeet;
		
		//Calculate

	heightInFeet = heightInInches / inchesPerFoot;

		//Output Results

	cout << "This highschool basketball star is 74 inches tall. That means he is " << heightInFeet << " feet tall" << endl;

	//Pauses

	system("Pause");

	//Sixth Exercise; Stock Loss

	//Initialize Variables

	double numOfShares = 750.00,
		cost1PerShare = 35.00,
		cost2PerShare = 31.15,
		total1For750Shares,
		totalStockSold,
		totalLossFor750Shares;

	//Calculate

	total1For750Shares = numOfShares * cost1PerShare;

	totalStockSold = numOfShares * cost2PerShare;

	totalLossFor750Shares = cost1PerShare - cost2PerShare;

		//Output Results

	cout << "For 750 shares of a $35.00 stock, Kathryn paid $" << total1For750Shares << "." << endl;
	cout << "When she Sold her stock for $31.15, the total recieved is $" << totalStockSold << "." << endl;
	cout << "She lost $" << totalLossFor750Shares << "." << endl;

	system("pause");

	//Final Exercise; Energy Drink Consumption

	//Initialize Variables

	double customersSurveyed = 16500.00,
		percentDrinksPerWeek = .15,
		PercentDrinksPerWeekCitrus = .52,
		customersDrinkPerWeek,
		customersDrinkCitrus;

	//Calculate

	customersDrinkPerWeek = customersSurveyed * percentDrinksPerWeek;

	customersDrinkCitrus = customersDrinkPerWeek * PercentDrinksPerWeekCitrus;

	//Output Results

	cout << "16,500 customers were surveryed, and " << customersDrinkPerWeek << " drink energy drinks per week." << endl;
	cout << "Of the " << customersDrinkPerWeek << " customers, " << customersDrinkCitrus << " of them drink Citrus flavored drinks." << endl;

	system("pause");

		return 0;

}