#include<iostream>
using namespace std;
int main()
{   int x,sum=0;
    cout<<"enter the length of this series ";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
    if(i%2==0)
    sum=sum-i;
    else
    sum=sum+i;
}
    cout<<"sum is "<<sum;
    return 0;
}
