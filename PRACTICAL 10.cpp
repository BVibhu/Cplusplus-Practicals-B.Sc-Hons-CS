#include<iostream>
using namespace std;
int main()
{ int ar[100],length,i,choice;
 float avg,sum=0;
 cout<<"enter length of array ";
 cin>>length;
 for(i=0;i<length;i++)
 {
 	cout<<" enter value for no. "<<i+1<<" ";
 	cin>>ar[i];
 }
 cout<<"\nEnter \n1)Print the even-valued elements \n2)print the odd-valued elements \n3)Calculate and print the sum and average of the elements of array\n4) Print the maximum and minimum element of array \n5) Remove the duplicates from the array\n6) Print the array in reverse order";
 cin>>choice;
 if(choice==1)	
    {
    cout<<"even valued lements are ";
	for(i=0;i<length;i++)
	{
	 if(ar[i]%2==0)
	 cout<<ar[i]<<" ";
}
}
else if(choice==2)	
 {
    cout<<"odd valued lements are ";
	for(i=0;i<length;i++)
	 {
	 if(ar[i]%1==0)
	 cout<<ar[i]<<" ";
	}}	
else if(choice==3)	
    {
    cout<<"sum and average of elements are ";
	for(i=0;i<length;i++)
	 {
	 sum=sum +ar[i];
	 
	 avg=sum/length;	
}
	cout<<sum<<"  "<<avg<<endl;
}
 else if(choice==4)	
 {
  int max=0,min=0;
  for(i=0;i<length;i++)
  {if(min>=ar[i])
  min=ar[i];
  if(max<=ar[i])
  max=ar[i];
}
  cout<<" max is "<<max<<" min is "<<min;
}
else if(choice==6)
{
	cout<<" array in reverse order is ";
	for(i=length;i>=0;i--)
	cout<<ar[i]<<" ";
}
}
