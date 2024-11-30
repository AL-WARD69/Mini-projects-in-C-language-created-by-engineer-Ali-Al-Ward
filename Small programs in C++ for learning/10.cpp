#include<iostream>
using namespace std;
main()
{
	int a[10];
	int large,location;
	for(int i=0;i<10;i++)
	{cin>>a[i];
	}
	
	
	large=a[0];
	for(int i=0;i<10;i++)
	{
	
	if(large<a[i])
	{

	large=a[i];
	location=i;	}
	}
	cout<<"largest="<<"["<<location<<"]="<<large<<endl;
}
