#include<iostream>
using namespace std;
main()
{int n=0,t;

char name1[50],name2[50];
cout<<"enter your first name:";
cin.getline(name1,50);
cout<<"enter your second name:";
cin.getline(name2,50);
cout<<"\n\n\n";
cout<<"\t\tyour name first is : "<<name1<<endl;

cout<<"\t\tyour name last is : "<<name2<<endl;
cout<<"\n___________________________________________\n";
	
cout<<"your frist name is  :";
while(name2[n]!='\0')
{
t=name1[n];
name1[n]=name2[n];
name2[n]=t;
cout<<name1[n];
n++;}

cout<<"\n___________________________________________\n";	
cout<<name1<<endl;	
cout<<name2;	
}
