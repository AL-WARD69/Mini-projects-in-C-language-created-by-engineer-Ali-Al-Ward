#include <iostream>
using namespace std;
main()
{
	int a[8]={3,-15,50,-7,6,3,87,-56},x,y=0;
	cout<<"plesz enter the number do you want\n";
	cin>>x;
	for(int i=0;i<8;i++)
	{
	if(x==a[i])
		{
		cout<<" the  location is a["<<i<<"]"<<endl;
		y++;
     	}
	}
		if(y==0)
		cout<<"eleant not found "<<endl;
		

	
	
 }
