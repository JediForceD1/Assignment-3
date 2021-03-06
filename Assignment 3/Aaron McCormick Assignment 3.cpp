/*
Assignment 3.cpp
Aaron McCormick
Calcuate check fees for a bank
*/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

int main()
{
	bool testnum;
	int check;
	double total;
	double fee;

	cout << setprecision(2) << fixed;
	cout << "How many checks were written this month?" << endl;
	cin >> check;
	
	
	do
	{
		if (cin.fail() == true)
		{
			cout << "Input must be numeric!\n";
			testnum = 1;
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> check;
		}

		else if (check < 0) {
			cout << "Checks cannot be negetive." << endl;
			testnum = 1;
			cin >> check;
		}

		else if (check > 0) {
			testnum = 0;
		}
		
	} while (testnum == 1);

	if (check <= 20) {

		total = check * 0.1 + 15;
		fee = check * 0.1;
	}

	else if (check > 20 && check < 40) {

		total = check * 0.08 + 15;
		fee = check * 0.08;
	}

	else if (check > 40 && check < 60) {

		total = check * 0.06 + 15;
		fee = check * 0.06;
	}

	else if (check > 60) {

		total = check * 0.04 + 15;
		fee = check * 0.04;
	}
	cout << "The fixed bank fee is $15.00" << endl;
	cout << "Your varible check fee is $" << fee << endl;
	cout << "The bank fee this month is $" << total << endl;


}

