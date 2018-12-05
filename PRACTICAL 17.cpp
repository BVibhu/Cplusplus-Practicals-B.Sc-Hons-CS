#include <stdio.h>
#include<iostream>
using namespace std;

int main(void)
{
	int a[100],a1[50],a2[50] ,i=0, j=0, n, t,l1,l2;
	

	cout<<"\n Enter the no. of elements for array 1  ";  //getting length
	cin>>l1;
     for (i = 0; i <l1; i++)
	{
		cout<<"\n Enter the "<<i+1<<"th element: ";     //getting values
		cin>>a1[i];
	}
	cout<<"\n Enter the no. of elements for array 1  ";  //getting length
	cin>>l2;
     for (i = 0; i <l2; i++)
	{
		cout<<"\n Enter the "<<i+1<<"th element: ";     //getting values
		cin>>a2[i];
	}
	n=l1+l2;
	for(i=0;i<n;i++)
	if(i<l1)
	a[i]=a1[i];
	else
	a[i]=a2[i-l1];

	for (j=0 ; j<(n-1) ; j++)
	{
		for (i=0 ; i<(n-1) ; i++)
		{
			if (a[i+1] < a[i])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	cout<<"\n Ascending order: ";
	for (i=0 ; i<n ; i++)
	{
		cout<<a[i];
	}

      return 0;
}
