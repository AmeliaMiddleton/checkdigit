// checkdigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int doubleDigitValue(int digit) {
	int doubledDigit = digit * 2;
	int sum;
	if (doubledDigit >= 10) sum = 1 + doubledDigit % 10;
	else sum = doubledDigit;
	return sum;
}

int main()
{
	int digit;
	cout << "Enter a single digit number, 0-9: ";
	cin >> digit;
	int sum = doubleDigitValue(digit);
	cout << "Sum of digits in doubled number: " << sum << "\n";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
