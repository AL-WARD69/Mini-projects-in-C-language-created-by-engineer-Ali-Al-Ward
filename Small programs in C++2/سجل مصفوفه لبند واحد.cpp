#include<iostream>
using namespace std;
struct ali
{
	int ip;
	string nama;
	int t;
	string add;
	int mark[3];
};
main()
{
	ali a1,a2;
	a1.ip=212;
	a1.nama="ali alward";
	a1.t=7740874909;
	a1.add="sarf";
	for(int i=0;i<3;i++)
	
		a1.mark[i]=99;
	
	cout<<a1.ip<<"\n";
	cout<<a1.nama<<"\n";
	cout<<a1.t<<"\n";
	cout<<a1.add<<"\n";
		for(int i=0;i<3;i++)
	{
		cout<<a1.mark[i]<<"\n";
	}
	(a2=a1);
		cout<<a1.ip<<"\n";
	cout<<a1.nama<<"\n";
	cout<<a1.t<<"\n";
	cout<<a1.add<<"\n";

}
