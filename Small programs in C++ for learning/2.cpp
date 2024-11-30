#include<iostream>
using namespace std;
main()
{
	int a,x,max,min;
	cout<<"Enter number:";
	cin>>a;
	max=a;
	min=a;
	for(x=2;x<6;x++)
	{
		cout<<"Enter number:";
		cin>>a;
		if(a>max)max=a;
		if(a<min)min=a;
	}
	cout<<"max number ="<<max<<endl;
	cout<<"min number ="<<min<<endl;
}
