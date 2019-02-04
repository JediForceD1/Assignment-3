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

int test(int check) {
	if (cin.fail() == true)
	{
		cout << "Input must be numeric!\n";
		return 1;
	}

	else if (check < 0) {
		cout << "Checks cannot be negetive." << endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int testnum;
	int check;
	double total;
	double fee;

	cout << setprecision(2) << fixed;
	cout << "How many checks were written this month?" << endl;
	cin >> check;
	
	testnum = test(check);

	while (testnum == 1){
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> check;
		testnum = test(check);
	}

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

