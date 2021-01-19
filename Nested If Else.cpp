#include<iostream>

using namespace std;

int main()
{
	int a = 40, b = 50, c = 55;
	
	if (a>b)
	{
		if (a>c)
		{
			cout<<"A is the largest value.";
		}
	}
	else
	{
		if (b>c)
		{
			cout<<"B is the largest value.";
		}
		else
		{
		cout<<"C is the largest value.";
		}
	}
		
	return 0;
}
