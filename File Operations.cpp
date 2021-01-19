using namespace std;

#include<iostream>
#include<fstream>
//fstream is the library that contains read and write commands.

int main()
{
	ofstream MyFile("Temporary.txt");
	/*Here you can see the ofstream command means to read the file operations. It will create and open the readable temporary.txt file.*/
	
	MyFile<<"This is created temporarily. Will be deleted.";
	//To write inside the file this is how it is used.
	
	MyFile.close();
	//This will close the file.
	
	string myText;
	
	ifstream MyReadFile("Temporary.txt");
	//The above command is to read into the file.
	
	while(getline(MyReadFile, myText))
	//getline is used to read the line after compiling the variables created which are MyReadFile and myText.
	{
		cout<<myText;
		//This will display the file and what string data has been written inside for each line in the MyReadFile that was called to be read.
	}
}
