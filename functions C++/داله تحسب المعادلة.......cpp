#include<iostream>
using namespace std;
int power(int x,int y)
{ int z=1;
	for(int i=1;i<=y;i++)
	z=z*x;
return z;}


main()
{ 
	int a,c=0;
	cout<<"enter the number :";
	cin>>a;
	int z;
	for(int i=2;i<7;i++)
    {z=i*power(a,i);
c=c+z;}
	cout<<c;
}
