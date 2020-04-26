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
void modify_student()
{
cout<<"\nAdmission no. : "<<admno;
cout<<"\nModify Student Name : ";
gets(name);
}
char* retadmno()
{ return admno; }
char* retstbno()
{ return stbno; }
int rettoken()
{ return token; }
void addtoken()
{ token=1; }
void resettoken()
{ token=0; }
void getstbno(char t[] )
{ strcpy(stbno,t); }
void report()
{      cout<<"\t"<<admno<<setw(20)<<name<<setw(10)<<token<<endl; }
};
fstream fp, fp1;
book bk;
student st;
void write_book()     //Function to write in file
{
char ch;
ofstream fp("book.dat",ios::app||ios::in);

do
{
clrscr();
bk.create_book();
fp.write((char*)&bk,sizeof(book));
cout<<"\n\nDo you want to add more record..(y/n)";
cin>>ch;
}
while (ch=='y'||ch=='Y');
fp.close();
}
void write_student()
{
char ch;
ofstream fp("student.dat",ios::app||ios::in) ;
do
{
st.create_student();
fp.write((char*)&st,sizeof(student));
cout<<"\n\nDo you want to add more record..(y/n) ";
cin>>ch;
} while(ch=='y'||ch=='y');
fp.close(); }
void display_spb(char n[])     //Function to read specific record
{
cout<<"\nBOOK DETAILS\n";
int flag=0;
fp.open("book.dat",ios::in);
while(fp.read((char*)&bk,sizeof(book)))
{
if(stricmp(bk.retbno(),n)==0)
{ bk.show_book();
flag=1;
}
}
fp.close();
if(flag==0)
cout<<"\n\nBook does not exist ";
getch();
}

