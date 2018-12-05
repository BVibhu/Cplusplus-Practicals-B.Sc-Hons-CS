#include<iostream>
using namespace std;
#define swap(a,b)
{
		a=a+b;
	b=a-b;
	a=a-b;
};
int main()
{int x,y;
 cout>>"enter values of x and y ";
 cin>>x>>y;
 cout<<"entered value of x = "<<x<<" and of y = "<<y<<endl;
 swap(x,y);
 cout<<"after reverse value of x = "<<x<<" and of y = "<<y;
 return 1;
}


