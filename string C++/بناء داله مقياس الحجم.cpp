#include<iostream>
using namespace std;
main()
{int n=0;

string name;
cout<<"enter your name:";
getline(cin,name);

cout<<"your name is "<<name<<endl;
cout<<"\n___________________________________________\n";
while(name[n]!='\0')
{n++;}	
	cout<<"length of yor first name is :"<<n<<endl;
	
}
