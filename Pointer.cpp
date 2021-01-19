using namespace std;

#include<iostream>

int main()
{
	string name = "What a great guy!";
	//Here the string is a command that will store the long sentence in the variable 'name'. The sentence is written in "".
	
	string *ptr = &name;
	//To indicate a pointer * is used. Here the use of &name means that the value of the address of the name will be stored in the pointer. Not the value of name.
	
	cout<<"Value in the variable is: "<<name<<"\n\n";
	
	cout<<"Address of the variable is: "<<ptr<<"\n\n";
	
	cout<<"Address of the variable is: "<<&name<<"\n\n";
	
	return 0;
}
