using namespace std;

#include<iostream>

class GrandParent
{
	public:
	
	string name;
	
	void get_name(string n)
	{
		name = n;
	}
	
	void put_name()
	{
		cout<<"\nName is: \n"<<name;
	}
	
};

class Parent: public GrandParent

{
	public:
		
		int age;
		
		void get_age(int a)
		{
			age = a;
		}
		
		void put_age()
		{
			cout<<"\nAge is: "<<age;
		}
		
};

class Child: public Parent
//This is calling on to the child master class, 'GrandParent' this is MultiLevel Inheritance.
{
	public:
		string gender;
		
		void get_gender(string g)
		{
			gender = g;
		}
		
		void put_gender()
		{
			cout<<"\nGender is: \n"<<gender;
		}
};

int main()
{
	Child c;
	
	c.get_name("Chandu");
	c.get_gender("Male");
	c.get_age(16);
	
	c.put_age();
	c.put_gender();
	c.put_name();
	
	return 0;
}
