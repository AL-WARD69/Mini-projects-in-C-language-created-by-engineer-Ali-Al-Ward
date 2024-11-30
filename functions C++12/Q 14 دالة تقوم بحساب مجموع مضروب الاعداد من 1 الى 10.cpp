#include<iostream>
using namespace std;
int fact(int x)
{ int z=1;
	for(int i=x;i>=1;i--)
	z=z*i;
return z;}


main()
{
	
	for(int i=1;i<=10;i++)//mathroob the number from 1 to 10
  {int sum=0;
  sum=sum +fact(i);
	cout<<"\t!"<<i<<"="<<sum<<endl;}
	cout<<"********************************************************************************\n";
	int sum=0;
		for(int i=1;i<=10;i++)//tne sum of mathroob the number from 1 to 10
  {
  sum=sum +fact(i);
	}cout<<"\ttne sum of mathroob the number from 1 to 10 ="<<sum<<endl;
}
