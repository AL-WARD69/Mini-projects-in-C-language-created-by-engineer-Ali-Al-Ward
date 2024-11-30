#include<iostream>
using namespace std;
int fact(int x)
{ int z=1;
	for(int i=x;i>=1;i--)
	z=z*i;
return z;}


main()
{
	
	for(int i=1;i<=10;i++)
  {int sum=0;
  sum=sum +fact(i);
	cout<<sum<<endl;
	}
	
}

