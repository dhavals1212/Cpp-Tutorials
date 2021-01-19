using namespace std;

#include<iostream>

int main()
{
	int a,b,c=0;
	
	cout<<"Enter First number: ";
	cin>>a;
	cout<<"Enter Second number: ";
	cin>>b;
	
	//Here "++a" indicates value of a will be printed after an increment. For example if entered a = 6, it will show 7, the incremented value.
	//"++a" is known as preincrement operator.
	/*Now "b++" is actually indicative of the value first printed and then being incremented. Which means the values will be
	first shown for example b = 6 will be shown as is 6 in output and later on it's value will be increased to 7 which won't be shown.*/
	cout<<"Unary Operations (numbers++) and (++numbers): "<< ++a <<" "<< b++ <<"\n";
	
	//Binary Operations are simply the operations that take place in simplest form in physical world.
	cout<<"Binary Operations (number+number): "<< a+b <<"\n";
	
	//Here the brackets '(' and ')' are very important as they give the emphasis on executing the operation that way.
	/*The (a>b) simply means to ask if the operation is true or not, whichever the result will be displayed whereas (a:b) does the same
	now the use of '?' is to give the correct answer. If the first condition (a>b) is true that will be printed but if it is false, the later
	condition will be printed. */
	cout<<"Ternary Operator: "<< ((a>b) ? a:b) <<"\n";
	
	//Here the relational operator is put in brackets to emphasize again the procedure, whatever the result it will be displayed.
	cout<<"Relational Operator: "<< (a<b) <<"\n";
	
	//The logical operator "&&" suggests 'and' and "||" suggests 'or' use of operations.
	//Conditions are if (true&&false) the value will be false. If (true&&true) the value will be true as well. In case of last, it will be true as well.
	cout<<"Logical Operator: "<< (true&&false) <<" "<< (true&&true) << (true||false) <<"\n";
	
	//The assignment operator here in place of c simply means c=c+a, whatever the value of c will be added to a and the new value of c will be printed.
	cout<<"Assignment Operator: Sum: c="<<(c+=a)<<"\n";
	
	return 0;
}
