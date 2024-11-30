#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string namec;
	int count;
    fstream x;
	
	x.open("osama.txt",ios::in);
	
	cout<<" the name of city is :";
	x>>namec;
	cout<<namec<<" \n";
		cout<<" the number of pepole in city  is :";
	
	x>>count;
	cout<<count<<" \n";
	x.close();
	
	
	
}
