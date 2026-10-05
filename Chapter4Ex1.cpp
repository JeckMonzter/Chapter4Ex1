/*
1. Minimum/Maximum

Write a program thats asks the user to enter two different integers.
The program should use the conditional operator to determine which
number is the smaller and which is the larger.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int int1;
	int int2;

	cout << "Please enter the first integer: ";
	cin >> int1;
	cout << "Please enter the second integer: ";
	cin >> int2;

	int1 == int2 ? cout << int1 << " is equal to " << int2 : 
		int1 > int2 ? cout << int1 << " is greater than " << int2 : cout << int1 << " is less than " << int2;

	return 0;
}