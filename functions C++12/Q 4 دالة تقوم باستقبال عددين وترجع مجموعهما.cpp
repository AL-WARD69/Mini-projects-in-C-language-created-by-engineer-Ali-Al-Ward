#include<iostream>
using namespace std;
int sum(int a,int b)
{int z=a+b;
return z;
}
main()
{
	int x,y;
	cout<<"\t*********************************\n";
	cout<<"\t enter the first number  ";
	cin>>x;
		cout<<"\t*********************************\n";
	cout<<"\t enter the scound number  ";
	cin>>y;
	cout<<"_______________________________________________\n";
	cout<<"the sum of the numbers is   "<<sum(x,y);
}
