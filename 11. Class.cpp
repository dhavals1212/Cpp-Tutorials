using namespace std;

#include<iostream>

class Phones
//Here the class is defined first. 'Phones' is the object for which the class is being designated.
{
	public:
	//Public here denotes the level of access one can get.
	//3 types public, private and specified are used in the structure of the class in order to obtain information.
	//Having information in public means the access is open to all.
	
	string name;	
	int price;
	string model_name;
	
	void put_details(int i, string n)
	{
		int forprice = i;
		string brand = n;
	}
	
	void get_details()
	//void here acts as a function that asks the value calling from other functions. 'get_details()' is a function.
	{
		cout<<"\n\nBrand of the phone: "<<name;
		cout<<"\n\nName of the model: "<<model_name;
		cout<<"\n\nPrice of the phone: "<<price;
	}
};
//Each class as they are defined have to have ';' in the end of the body of the class.

int main()
{
	Phones s1;
	//Here the object was designated and acknowledged with the variable 'Samsung'.
	
	int forprice;
	string brand;
	
	s1.name = "Samsung";
	
	s1.price = 20000;
	//To denote the various values there now only have to be 'classtype.variable = value';
	
	s1.model_name = "Galaxy XX10";
	//For character, char and strings str.
	
	cout<<"Enter the Brand you wish to purchase: \n";
	cin>>brand;
	
	cout<<"\nEnter your budget: \n";
	cin>>forprice;
	
	s1.put_details(forprice,brand);
	
	s1.get_details();
	//The function is called for in order to get the details when the function of void get_details runs.
	
}
