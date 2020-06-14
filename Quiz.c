#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
int main()
{
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
