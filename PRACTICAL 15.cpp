#include<iostream>
using namespace std;
int main()
{int n,sum=0,*a[20];
cout<<"enter the no. of elements you want to enter(less than 20)";
cin>>n;
for(int i=0;i<n;i++)
a[i]= new int;
cout<<"enter the elements";
for(int i=0;i<n;i++)
{
cin>>*a[i];
sum+=*a[i];}
cout<<"sum= "<<sum;
return 0;
}
