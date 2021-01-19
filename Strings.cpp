#include<iostream>

//Here the strings were loaded with the help of the library 'cstring' being included in the program.
#include<cstring>

using namespace std;

int main()
{
	//The '[]' represents the string place and is used with a vairable to denote the same.
	char c1[] = "Great";
	char c2[] = " Guy";
	//Note: If the '[]' is not used the char command will only be expected to take in single character. Hence, showing the error while execution.
	
	//In Concatenation, the strings are written together as they are.
	cout<<"Concatenation: "<<strcat(c1,c2)<<"\n";
	
	//In Copy, the string c2 will be copied in string c1.
	cout<<"Copy: "<<strcpy(c1,c2)<<"\n";
	
	//The Length of the string is given by strlength function. To find the length of a string, use 'strlength(c1)' or 'strlength(c2)'.
	cout<<"Length: "<<strlen("ABC")<<"\n";
	
	return 0;
}
