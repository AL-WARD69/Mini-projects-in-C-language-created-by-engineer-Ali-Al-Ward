#include <iostream>
using namespace std;
main()
{
	int a[8]={3,-15,50,-7,6,3,87,-56},x,y=0;
	cout<<"plesz enter the number do you want\n";
	cin>>x;
	for(int i=0;i<8;i++)
	{
		if(a[i]==x)
		y=y+1;}
		{
			if(y==0)
		cout<<" notfound the number"<<endl;
		else
		cout<<"found the number repeted ="<<y<<endl;
		}

	
	
 }
