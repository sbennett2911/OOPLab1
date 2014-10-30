/*Program Name: Basic User Interface
  Programmer: Steven Bennett
  CIS 247C, Week 1 Lab
  Program Description: This program creates a basic user interface for future class Labs.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//method prototypes
void DisplayApplicationInformation();
void DisplayDivider(string outputTitle);
string GetInput(string inputType);
void TerminateApplication();

int main()
{
	//variable declaration
	string input = "";
	string name = "";
	int age = 0;
	double mileage = 0.0;

	//begin program body
	DisplayApplicationInformation();
	DisplayDivider("Start Program");

	DisplayDivider("Get Name");
	name = GetInput("Your Name");
	cout << "Your name is: " + name << endl;

	DisplayDivider("Get Age");
	input = GetInput("Your Age");
	age = stoi(input); //coverts string to int
	cout << "Your age is: " << age << endl;

	DisplayDivider("Get Mileage");
	input = GetInput("Gas Mileage");
	mileage = stod(input); //converts string to double
	cout << "Your car's MPG is: " << fixed << setprecision(2) << mileage << endl;

	TerminateApplication();

	return 0;
}

void DisplayApplicationInformation() //method for displaying application information
{
	cout << "Welcome to the Basic User Interface program." << endl;
	cout << "CIS247C, Week 1 Lab." << endl;
	cout << "Name: Steven Bennett" << endl;
	cout << "This program accepts user input as a string, then makes the appropriate data conversion." << endl;
}

void DisplayDivider(string outputTitle) //method for creating a dividing line with section title
{
	cout << '\n' << "****************** " + outputTitle + " *******************" << endl;
}

string GetInput(string inputType)
{
	cout << "Enter " + inputType + ": ";
	string strInput;
	getline(cin, strInput);

	return strInput;
}

void TerminateApplication()
{
	cout <<'\n' << "Thank you for using the basic user interface!" << endl;
}
