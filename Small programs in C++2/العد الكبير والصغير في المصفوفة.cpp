#include<iostream>
using namespace std;
main()
{
	int a[7]{1,2,3,4,5,6,7};
	int m=a[0],n=a[0];
	for (int i=1;i<7;i++)
	{
		if(a[0]<a[i])
		m=a[i];
		if(a[0]>a[i])
		n=a[i];
		}	
		cout<<m;
		cout<<n;
		

}
