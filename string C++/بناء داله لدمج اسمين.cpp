#include<iostream>
using namespace std;
main()
{int n=0;

char name1[50],name2[50];
cout<<"enter your first name:";
cin.getline(name1,50);
cout<<"enter your second name:";
cin.getline(name2,50);
cout<<"\n\n\n";
cout<<"\t\tyour name first is : "<<name1<<endl;

cout<<"\t\tyour name last is : "<<name2<<endl;
cout<<"\n___________________________________________\n";
	
cout<<"your fall name is  :";
while(name1[n]!='\0')
{cout<<name1[n];
n++;}
n=0;
while(name2[n]!='\0')
{cout<<name2[n];
n++;}	
	
	
}
