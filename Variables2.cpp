using namespace std;

#include<iostream>

int main()
{
	int a,b;
	cout << "Enter first number: ";
	
	//'cin' is used to gain the input from user when the code runs it. '>>' represents input given by the user.
	cin >> a;
	
	cout << "Enter second number: ";
	
	cin >> b;
	
	// Here '\n' is used to enter a new line.
	cout << "\nSum of two numbers you entered is: "<< a+b;
	
	return 0;
}
