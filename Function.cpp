using namespace std;

#include<iostream>

int add(int x,int y)
//Here the 'add' is a function which can be written as: 'function(int a, int b, int c,....)'.

{
	return x+y;
	//Here the function is designated with its purpose when it returns the values x+y as it is supposed to add.
	//For integer it is integer value returning. For float it shall be float value. For character, it shall be a character value.
}

int substitute(int j, int g)
{
	
	return j-g;
}

int main()
{
	cout<<add(3,4)<<"\n";
	
	cout<<substitute(6,2);
	
	return 0;
}
