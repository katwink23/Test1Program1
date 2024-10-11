// Test1Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Katlyn Winkelhake

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string keepGoing = "YES";
	double sales;
	double comPercent;
	double advancePay;
	double takeHome;
	double totalCom;

	while (keepGoing == "YES")
	{
		cout << "Enter the salesperson's monthly sales: " << endl;
		cin >> sales;

		if (sales <= 10000)
			comPercent = 0.05;
		if (sales >= 10000 and sales <= 15000)
			comPercent = 0.1;
		if (sales >= 15000 and sales <= 18000)
			comPercent = 0.12;
		if (sales >= 18000 and sales <= 22000)
			comPercent = 0.14;
		if (sales >= 22000)
			comPercent = 0.16;



		cout << "Enter the amount of advanced pay:" << endl;
		cin >> advancePay;

		totalCom = sales * (comPercent);

		takeHome = totalCom - advancePay;

		cout << endl;
		cout << "Pay Results" << endl;
		cout << "-------------" << endl;
		cout << "Sales: $" << sales << endl;
		cout << "Commission Rate: " << comPercent * 100 << "%" << endl;
		cout << "Commission: $" << totalCom << endl;
		cout << "Advanced Pay: $" << advancePay << endl;
		cout << "Remaining Pay: $" << takeHome << endl;
		cout << endl;
		cout << "Would you like to enter another salesperson?"
			<< "(YES or NO)" << endl;
		cin >> keepGoing;

	}



	return 0; 


}

