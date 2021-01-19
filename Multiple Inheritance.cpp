#include<iostream>

using namespace std;

class Mom
{
	public:
		
		void mom()
		{
			cout<<"This is Mother.";
		}
};

class Dad
{
	public:
		
		void dad()
		{
			cout<<"\nThis is Father.";
		}
};

class Child: public Mom, public Dad
//The Child gets two public attributes from two classes which is called, "Multiple Inheritance."

{
	public:
		
		void show_child()
		{
			cout<<"\nThis is a child.";
		}
};

int main()
{
	Child obj;
	
	obj.mom();
	obj.dad();
	obj.show_child();
	
	return 0;
}
