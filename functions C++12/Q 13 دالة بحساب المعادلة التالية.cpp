#include<iostream>
using namespace std;
int power(int x,int y)
{int z=1;
for(int i=1;i<=y;i++)
z=z*x;
return z;	
}
main()
{
		int a,c=0,m;
		cout<<"\t\t______________________\n";	
		cout<<"\t\tenter the virbil X :";
	cin>>a;
	for(int i=2;i<7;i++)
	{m=i*power(a,i);
	c=c+m;
		
	}
	cout<<"\t\t______________________________________\n";	
	cout<<"\t\tthe answer of equation is   "<<c;
	
}
