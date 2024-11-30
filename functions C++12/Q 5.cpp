#include<iostream>
using namespace std;
int bigernum(int a,int b)
{if(a>b)
return a;
else
return b;
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
	cout<<"the biger  numbers is   "<<bigernum(x,y);
}
