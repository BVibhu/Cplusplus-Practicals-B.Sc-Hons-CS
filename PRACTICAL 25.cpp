#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct student
{int rollno,Class,year,totalmarks;
char name[20];
};
int main()
{
      student s;
      fstream f;
      f.open("student.dat",ios::out|ios::binary);
      if(f.fail())
      cout<<"file does'nt exist";
      else
      {
	   for(int i=0;i<2;i++)
      { 
       cout<<"Enter details of student "<<i+1<<"\n";
	   cout<<"ROLL no. :"; 
         cin>>s.rollno;
         cout<<"NAME :";
         cin>>s.name;
		 cout<<"CLASS :";
         cin>>s.Class;
         cout<<"YEAR :";
         cin>>s.year;
         cout<<"TOTAL MARKS :";
         cin>>s.totalmarks;
         
       f.write((char*)&s,sizeof(s));
      }
	  cout<<"file created";
	  }
     f.close();
return 0;
 }
