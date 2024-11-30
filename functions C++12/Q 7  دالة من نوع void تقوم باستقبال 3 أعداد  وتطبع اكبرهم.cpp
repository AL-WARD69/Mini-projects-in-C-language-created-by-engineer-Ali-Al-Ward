#include<iostream>
using namespace std;
void bigernum(int a,int b,int c)
{if(a>b&&a>c)
cout<< a;
if(b>a&&b>c)
cout<< b;
if(c>b&&c>a)
cout<< c;
}
main()
{
	int x,y,w;
	cout<<"\t*********************************\n";
	cout<<"\t enter the first number  ";
	cin>>x;
		cout<<"\t*********************************\n";
	cout<<"\t enter the scound number  ";
	cin>>y;
		cout<<"\t*********************************\n";
	cout<<"\t enter the third number  ";
	cin>>w;
	cout<<"_______________________________________________\n";
	cout<<"the biger  numbers is   ";
	bigernum(x,y,w);
}
