#include<iostream>
using namespace std;
int main()
{int num,count=0;;
cout<<"enter the no. you want to check for prime ";
cin>>num;
for(int i=1;i<=num;i++)
{
	if(num%i==0)
	count++;

}
if (count==2)
{cout<<num<<" is prime ";
}
else
cout<<num<<" is not prime ";
return 0;
}
