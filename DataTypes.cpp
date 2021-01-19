using namespace std;

#include<iostream>

int main()
{
	cout << "Sizes of fundamental Data Types in C++:\n";
	cout << "\n\n";
	
	//Here 'sizeof' command gives the information of the size of data types or values.
	cout << "The size of Character Data Type (char) is: " <<sizeof(char)<< " bytes \n";
	cout << "\nThe size of Short Data Type (short) is: " <<sizeof(short)<< " bytes \n";
	cout << "\nThe size of Integer Data Type (int) is: " <<sizeof(int)<< " bytes \n";
	cout << "\nThe size of Long Data Type (long) is: " <<sizeof(long)<< " bytes \n";
	cout << "\nThe size of Long Long Data Type (long long) is: " <<sizeof(long long)<< " bytes \n";
	cout << "\nThe size of Float Data Type (float) is: " <<sizeof(float)<< " bytes \n";
	cout << "\nThe size of Double Data Type (double) is: " <<sizeof(double)<< " bytes \n";
	cout << "\nThe size of Long Double Data Type (long double) is: " <<sizeof(long double)<< " bytes \n";
	cout << "\nThe size of Boolean Data Type (bool) is: " <<sizeof(bool)<< " bytes \n";
	
	return 0;
}
