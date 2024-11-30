#include<iostream>
using namespace std;
int fact(int x)
{ int z=1;
	for(int i=x;i>=1;i--)
	z=z*i;
return z;}


main()
{
	
	for(int i=1;i<=20;i++)//mathroob the number from 1 to 10
	{if(i%2!=0)
	
  {int sum=0;
  sum=sum +fact(i);
	cout<<i<<"="<<sum<<endl;}}}


