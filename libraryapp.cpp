#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>
class book
{
char bno[6];
char bname[50];
char aname[20];
public:
void create_book()
{
cout<<"\n NEW BOOK ENTRY..\n";
cout<<"\nEnter the book no. ";
cin>>bno;
cout<<"\n\nEnter the Name of the book ";
gets(bname);
cout<<"\n\nEnter the Author's name ";
gets(aname);
cout<<"\n\nBook Created.. ";
}
void show_book()
{
cout<<"\nBook no.:- "<<bno;
cout<<"\nBook Name : ";
puts(bname);
cout<<"\nAuthor's name :-	";
puts(aname);
}
void modify_book()
{
cout<<"\nBook no. :"<<bno;
cout<<"\nModify book name : ";
gets(bname);
cout<<"\nModify Author's name of the book : ";
gets(aname);
}
char*retbno()
{ return bno; }
void report()
{ cout<<bno<<setw(30)<<bname<<setw(30)<<aname<<endl; }
} ;
class student
{
char admno[6];
char name[20];
char stbno[6];
int token;
public:
void create_student()
{
clrscr();
cout<<"\nNEW STUDENT ENTRY.. \n";
cout<<"\nEnter the admission no. :- ";
cin>>admno;
cout<<"\n\nEnter the name of the student ";
gets(name);
token=0;
stbno[0]='\0';
cout<<"\nStudent record Created.. ";
}
void show_student()
{
cout<<"\nAdmission no. :- "<<admno;
cout<<"\nStudent name; ";
puts(name);
cout<<"\nNo. of books issued: "<<token;
if(token==1)
cout<<"\nBook No. "<<stbno;
}

