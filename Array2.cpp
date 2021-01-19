using namespace std;

#include<iostream>

int main()
{
	int a[5];
	
	cout<<"Enter the values in the array:\n";
	
	for (int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n";
	
	cout<<"The values entered are: \n\n";
	
	for (int i=0;i<5;i++)
	{
		cout<<a[i]<<"\n";
	}
	
	return 0;
}
