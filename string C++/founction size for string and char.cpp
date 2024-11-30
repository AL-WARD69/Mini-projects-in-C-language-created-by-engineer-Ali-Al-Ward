#include<iostream>
#include<cstring>
using namespace std;
main()
{string name;
char name2[50];
cout<<"enter first name:";
getline(cin,name);//for string
cout<<"enter second name:";
cin.getline(name2,50);//for character
cout<<"your first name  is:"<<name<<endl;	
cout<<"your second name  is:"<<name2<<endl;
	
	
	cout<<"\n____________________________________________\n";

cout<<"length of yor first name is :"<<name.length()<<endl;//for string
cout<<"length of your first name is:"<<name.size()<<endl;//for string
cout<<"length of your second name is:"<<strlen(name2)<<endl;//for character
}
