using namespace std;

#include<iostream>

class MyClass
{
	public:
	//The public here represents the domain in which the data can be attainable.
	
	int a;
	int b;
	
	MyClass(int x, int y)
	//MyClass here is the designated class.
	{
		a=x;
		b=y;
	}
	
	void print()
	{
		cout<<"a:"<<a;
		cout<<"\nb:"<<b;
	}

};

int main()
{
	MyClass m1(10,20);
	//Here we define the m1 attribute to the MyClass class, with values 10 and 20 in positions of a and b.
	
	m1.print();
	//m1.print completes the function and executes the void print function.
	
	return 0;
}
