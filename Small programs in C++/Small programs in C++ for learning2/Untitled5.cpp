#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int ar[5];
	for(int x=0;x<5;x++)
	{
	cout<<"ar["<<x<<"]=";
	cin>>ar[x];
}
cout<<"\n\n\n\n";
for(int x=0;x<5;x++)
if(ar[x]%2==0)
cout<<ar[x]<<"  ";	
}
