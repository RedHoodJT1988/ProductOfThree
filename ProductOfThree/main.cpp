#include <iostream>
using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
	int num1, num2, num3;
	cout << "Please enter a number" << endl;
	cin >> num1;
	cout << "Please enter a second number" << endl;
	cin >> num2;
	cout << "Please enter the final number" << endl;
	cin >> num3;
	int product = multiply(num1, num2, num3);
	cout << "The product of three numbers(" << num1 << ", " << num2 << ", " << num3 << ")" << " is: " << product << endl;
	return 0;
}

int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}