using namespace std;

#include<iostream>

int add(int x,int y)

{
	return x+y;
}

double add(double x, double y)
//For double type of data, both the inputs have to be double type in the function and declared so.
{
	return x+y;
}

int main()
{
	cout<<add(3,4)<<"\n";
	
	cout<<add(6.45,2.55);
	
	return 0;
}
