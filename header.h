//libraries
#include<iostream>
#include<string.h>
#include<conio.h>//to hold getch() function

using namespace std;
//customer class
class Customer{
	private:
		//member variables
		string name;
		string gender;
		int age;
		string location;
		string phoneNo;	
	public:
		//default and parametrized constructor
		Customer();
		Customer(string,string,int,string,int);
		//member functions
		void getInfo1();
		void displayData();
		void clearScreen();
		~Customer();//destructor
};
//truckstock class
class truckStock{
	private:
		//member variables
		string name;
		string manufactureCompany;
		int model;
		int price;
		char key; //to sheck Status of truck
	public:
		//default and parametrized constructor
		truckStock();
		truckStock(string,int,int,string,char);
		//member functions
		void getInfo2();
		void displayData();
		void clearScreen();
		~truckStock();//destructor
		
};
//programloop class
class programManager{
	private:
		//member variables
		string name,password;
	public:
		char ch;
		//pointer objects
		Customer *P1;
		truckStock *T1;
		//default and parametrized constructor
		programManager();
		programManager(string,string);
		//member function
		void callMainProgramLoop();
};
//extra intro and mainheader function
void intro();
void mainHeader();

