#include<iostream>
using namespace std;
int main()
{   float x,sum=0;
    cout<<"enter the length of this series ";
    cin>>x;
    for(float i=1;i<=x;i++)
    sum=sum+(1/i);
    cout<<"sum is "<<sum;
    
	return 0;
}
