#include<iostream>
using namespace std;
int main()
{int num;
cout<<"enter the no. you want to know factors of ";
cin>>num;
cout<<" the factors are ";
for(int i=1;i<=num;i++)
{
	if(num%i==0)
	cout<<i<<",";

}
return 0;
}
