#include<iostream>
using namespace std;
int recursion(int y)
{
    if (y == 1)
        return 1;
    else
        return y * recursion(y - 1);
}
int iteration(int x)
{int sum=1;
for(int i=x;i>=1;i--)
sum=sum*i;
return sum;
}
	
	
int main()
{
int no,choice,answer;
cout<<"Enter the no to calculate factorial of ";
cin>>no;
cout<<"Enter 1 for calculating using recursion ,2 for iteration ";
cin>>choice;
switch(choice)
{
case 2:answer=iteration(no);
       break;
       
    
case 1:answer=recursion(no);
       break;
default:cout<<"\nwrong input given";	          
       }
cout<<"\nfactorial of "<<no<<" is "<<answer;       
       
return 1;
}
