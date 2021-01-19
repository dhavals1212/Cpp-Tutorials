#include<iostream>

using namespace std;

int main()
{
	bool MachineisWorking = true;
	//For 'true' the value is given as '1'.
	cout<<"Since the machine is working, its value is "<<MachineisWorking<<"\n";
	
	MachineisWorking = false;
	//For value of 'false' the value given is '0'. Also note that there is no need to again define this as a Boolean operation.
	cout<<"The machine has stopped operating."<<"Now its value is "<<MachineisWorking<<"\n";
	
	return 0;
}
