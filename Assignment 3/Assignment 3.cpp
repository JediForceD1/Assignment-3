/*
Assignment 3.cpp
Aaron McCormick

*/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

int check;

int test() {
	if (cin.fail() == true)	
		cin.clear();
		cout << "Input must be numeric!\n";
		return 1;
}

int main()
{
	int testnum;

	cout << "How many checks were written this month?" << endl;
	cin >> check;
	
	do {
		testnum = test();

		cout << testnum;
		cin >> testnum;

	} while (testnum == 1);
	




}

