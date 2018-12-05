#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,product=1;
	cout<<" enter the no. ";
	cin>>num;
	while(num%10!=0)
	{
		product=product*(num%10);
		sum=sum+(num%10);
		num=(num/10);
	}
	cout<<"sum is "<<sum<<endl<<"product is "<<product;
	
}
