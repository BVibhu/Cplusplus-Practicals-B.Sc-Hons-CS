#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int m, n, p, q;
    char CH;
    int IN;
//Enter dimensions
	cout<<" Enter dimensions of 1st matrix\n";
	cin>>p>>q;
	if(!p||!q)
	cout<<"  No such matrix exists\n\n";
	
	cout<<" Enter dimensions of 2nd matrix\n";
	cin>>m>>n;
	if(!m||!n)
	cout<<"  No such matrix exists\n\n";
	
	if(!p||!q||!m||!n)
	cout<<"\t\tError in dimensions";
	
	else
  {
    int a[p][q], b[m][n], prod[p][n], sum[p][q], diff[p][q];

//Enter matrices
	cout<<"\tEnter the elements of 1st matrix row-wise\n";
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        cin>>a[i][j];
    }

	cout<<"\tEnter the elements of 2nd matrix row-wise\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        cin>>b[i][j];
    }

//Operations:-
//Sum
    if(p==m && q==n)
  {
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        sum[i][j]=a[i][j]+b[i][j];
    }
//Difference
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        diff[i][j]=a[i][j]-b[i][j];
    }
  }

//Multiplication
    if (q==m)
    {
     for(int i=0; i<p; i++)
      {
       for(int j=0; j<n; j++)
        {
        int SUM=0;
         for(int k=0; k<q; k++)
          {
            SUM+=a[i][k]*b[k][j];
            prod[i][j]=SUM;
          }
        SUM=0;
        }
      }
    }


//MENU:-
	char inp;
	loop :
	cout<<"\n\n\n\n__________________________M____E____N____U_____________________________________\n\n1. Enter 'a' to find sum of matrices\n\n2. Enter 'b' to find difference of matrices\n\n3. Enter 'c' to find transpose of matrices\n\n4. Enter 'd' to find product of matrices\n\n5. Enter 'e' to exit to exit the program ";
	cin>>inp;

	switch(inp) {
//Printing Sum
	case 'a':
	if(p==m && q==n)
	{
		cout<<"\n  Sum of matrices entered is :\n";
		for(int i=0; i<p; i++)
		{
			for(int j=0; j<q; j++)
			cout<<sum[i][j]<<"  ";
			cout<<"\n";
		}
	}
	else
	cout<<"\n\tSuch matrices are not added\n";
	
	loopLOL:
	cout<<"\n\n\tEnter 'm' to go to menu again and 'x' to exit : ";
	cin>>CH;
	IN=CH;
	if(IN==77 || IN==109)
	goto loop;
	else if(IN==88 || IN==120)
	exit(007);
	else
	cout<<"\n\n\tInvalid input!!!\tEnter again:-";
	goto loopLOL;
	break;

//Printing Difference
	case 'b':
	if(p==m && q==n)
	{
		cout<<"\n  Difference of matrices entered is :\n";
		for(int i=0; i<p; i++)
		{
			for(int j=0; j<q; j++)
			cout<<diff[i][j]<<"  ";
			cout<<"\n";
		}
		
	}
	else
	cout<<"\n\tSuch matrices are not subtracted\n";
	
	goto loopLOL;
	break;

//Printing transpose
	case 'c':
	cout<<"\n  Transpose of first matrix\n";
		for(int i=0; i<q; i++)
		{
			for(int j=0; j<p; j++)
			cout<<a[j][i]<<"  ";
			cout<<"\n";
		}

	cout<<"\n  Transpose of second matrix\n";
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			cout<<b[j][i]<<"  ";
			cout<<"\n";
		}	
	
	goto loopLOL;
	break;

//Printing product
	case 'd':
	if(q==m)
	{
	cout<<"\n  Product of matrices entered is\n";
		for(int i=0; i<p; i++)
		{
			for(int j=0; j<n; j++)
			cout<<prod[i][j]<<"  ";
			cout<<"\n";
		}
	}
	else
	cout<<"\n\tSuch matrices are not multiplied";
	
	goto loopLOL;
	break;
	
	case 'e':
	exit(786);
	break;

	default :
	cout<<"\n\n\tInvalid input!!!\tEnter again:-";
	goto loop;
  	}
  }
}
