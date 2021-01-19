using namespace std;

#include<iostream>

class Dimensions
{
	public:
		float side = 10.67;
		//Here the Dimension class gets designated.
};

class Square: public Dimensions
//This line basically tells that the Square class inherits 'Single Inheritance' of public attribute of Dimensions class.
//For Specified type of class there has to be another name replacing 'public' with 'specified' section.
{
	public:
		double area (double x)
		//The double indicates the length possible here is double and the double as a data type can gain double length of data.
		{
			return (x*x);
			//return command here will return with the value x*x whenever called in the main function.
		}
};

int main()
{
	Square s1;
	//The sub-class here creates s1 attribute.
	
	cout<<"Area: "<<s1.area(s1.side);
	/*s1.area(s1.side) means to get the value returning at the end of sub-class inheriting the Dimensions class on public attribute. But using 'side'
	variable as input.*/
	
	return 0;
}
