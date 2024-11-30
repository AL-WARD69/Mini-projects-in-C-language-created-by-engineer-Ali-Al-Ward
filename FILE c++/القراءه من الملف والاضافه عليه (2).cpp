#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string namec;
	int count;
   
	
	ofstream x("it.txt",ios::app);
	
	cout<<"enter the name of city  :";
	cin>>namec;
	x<<namec<<"\t";
	
		cout<<"enter the number of pepole in city  :";
	cin>>count;
	x<<count<<"\n";
	
	x.close();
	
	
	
}
