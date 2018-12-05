// C program to find GCD of two numbers
#include <stdio.h>
#include<iostream>
using namespace std;
int iteration(int a,int b)
{
int final;
for(int i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            final = i;
    }
return final;    
}
// Recursive function to return gcd of a and b
int recursion(int a, int b)
{
    // Everything divides 0 
    if (a == 0 || b == 0)
       return 0;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return recursion(a-b, b);
    return recursion(a, b-a);
}
 
// Driver program to test above function
int main()
{
int no1,no2,choice,answer;
cout<<"\nEnter the no1 ";
cin>>no1;
cout<<"\nEnter the no2 ";
cin>>no2;
cout<<"\nEnter 1 for calculating using recursion ,2 for iteration ";
cin>>choice;
switch(choice)
{
case 2:answer=iteration(no1,no2);
       break;
       
    
case 1:answer=recursion(no1,no2);
       break;
default:cout<<"\nwrong input given";	          
       }
cout<<"\nGCD of the two number is "<<answer;       
       
return 1;
}
