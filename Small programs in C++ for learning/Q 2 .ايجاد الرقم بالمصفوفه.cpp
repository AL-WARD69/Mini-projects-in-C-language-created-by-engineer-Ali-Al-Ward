#include<iostream>
using namespace std;
main()
{
	int a[10]={34,-33,54,2,-33,4,5,6,1,-55},b,z;
	
	cout<<"\t\tenter the number you are looking for :\n";
	cin>>b,z=0;
	
		for(int i=0;i<10;i++)
	{
			if(a[i]==b)
           z++;
		}
		
		
		
		if(z>0)
		
		cout<<"the number is founde\n";
		else
		cout<<"the number is  not founde\n";

		}
