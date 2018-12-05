#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	*a=*a+10;
	*b=*b+10;
	
}

int main()
{
	int x, y;
	cout<<"Enter x : ";
	cin>>x;
	cout<<"\nEnter y : ";
	cin>>y;
	swap(&x,&y);
	cout<<"\n\nAfter Altering(adding 10 to both no. ) :\nx = "<<x<<"\ny = "<<y;
}
