#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class account
{
	int acno;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();	//function to get data from user
	void show_account();     //function to show data
	void modify();		//function to add new data
	void dep(int);		//function to accept amount and add to balance
	void draw(int);		//function to accept amount and subtract
	void report() const;	//functioon to show data
	int retacno() const;	//function to return amount
	int retdeposit() const;	//function to return balance
	char rettype() const;	//function to return type of account
};
void account::create_account()
{
	cout<<"\nEnter The account No. :";
	cin>>acno;
	cout<<"\n\nEnter The Name of The account Holder : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nEnter Type of The account (C/S) : ";
	cin>>type;
	type=toupper(type);
	cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
	cin>>deposit;
	cout<<"\n\n\nAccount Created..";
}
