#include<iostream>

using namespace std;

int main()
{
	int a=40,b=50,c=55;
	
	if ((a>b)&&(a>c))
	{
		cout<<"A is the greatest value.";
	}
	else if ((b>a)&&(b>c))
	{
		cout<<"B is the greatest value.";
	}
	else
	{
		cout<<"C is the greatest value.";
	}
	
	return 0;
}
