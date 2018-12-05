#include<iostream>
#include<fstream>
using namespace std;
int main()
{	fstream f,g;
    f.open("base.txt",ios::in);
    g.open("copy.txt",ios::out);
	if(f.fail())
	cout<<"file not exist";
    else
    {while(!f.eof())
    {char ch;
    f>>ch;
    if(ch!=' ')
    g<<ch;
	}
	}
	f.close();
	g.close();
   return 0;
}
