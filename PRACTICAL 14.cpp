#include <iostream>
using namespace std;
float area=0.0, circum=0.0;
void calc(float *p);

int main()
{
	float r;
	cout<<"\n\tEnter radius of circle : ";
	cin>>r;
	calc(&r);
	cout<<"\n\t  Area of circle = "<<area<<"\n\t  Circumference of circle = "<<circum;
}

void calc(float *p)
{
	area=3.14159 * *p * *p;
	circum=2 * 3.14159 * *p;
}
