#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter a number\n";
	int a;
	cin>>a;
	cout<<"\nReverse of "<<a<<" : ";
	for(;a!=0;a/=10)
	cout<<a%10;
}
