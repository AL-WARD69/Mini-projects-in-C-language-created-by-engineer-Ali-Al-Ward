#include<iostream>
using namespace std;
void prnt(int a,char b)
{for(int i=0;i<a;i++)
 cout<<b<<"  ";	
}
main()
{        char y;
		int x;
	cout<<"\t*********************************\n";
	cout<<"\t enter the first number  ";
	cin>>x;
		cout<<"\t*********************************\n";
	cout<<"\t enter the scound number  ";
	cin>>y;
	cout<<"___________________________________________________________________\n";
    prnt(x,y);


}

