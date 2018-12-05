#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int y;
	char a[50], b[50];
	gets(a);
	y=strlen(a);
		for(int i=0; i<=y; i++)
			b[i]=a[y-i-1];
	if(strcmp(a,b)==0)
		cout<<"Palindrome";
	else
		cout<<"Not";
	return 0;
}
