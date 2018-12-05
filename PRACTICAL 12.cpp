#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

int main()
{
	int x, y;
	cout<<"Enter x : ";
	cin>>x;
	cout<<"\nEnter y : ";
	cin>>y;
	swap(&x,&y);
	cout<<"\n\nAfter swapping :\nx = "<<x<<"\ny = "<<y;
}
