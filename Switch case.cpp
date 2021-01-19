#include<iostream>
using namespace std;
int main()
{
	int a=3;
	switch (a)
	//Switch is used to define and execute the cases.
	
	{
		case 1:
		//Here case is a command that compares the stored and defined value of a with the value written in the line. If it's true it will be executed.
			cout<<"1 is stored in A.";
			break;
		case 2:
			cout<<"2 is stored in A.";
			break;
		case 3:
			cout<<"3 is stored in A.";
			break;
		default:
			cout<<"None of the values match.";
			break;
	}
	
	return 0;
}
