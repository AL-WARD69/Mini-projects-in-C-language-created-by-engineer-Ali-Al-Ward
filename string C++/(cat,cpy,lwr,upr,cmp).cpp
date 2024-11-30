#include<iostream>
#include<cstring>
using namespace std;
main()
{ 
char name[50],name2[50];
cout<<"enter first name:";
cin.getline(name,50);
cout<<"enter second name:";
cin.getline(name2,50);//for character
cout<<"your first name  is:"<<name<<endl;	
cout<<"your second name  is:"<<name2<<endl;
	
	
//	cout<<"\n____________________________________________\n";//founction for size (string and character)

//cout<<"length of yor first name is :"<<name.length()<<endl;
//cout<<"length of your first name is:"<<name.size()<<endl;
//cout<<"length of your second name is:"<<strlen(name2)<<endl;

	cout<<"\n____________________________________________\n";//founction for (small and capital letters),(cut andcpy)  (string and character)
cout<<"small of yor second name is :"<<strlwr(name2)<<endl;//for small letters
cout<<"capital of yor second name is :"<<strupr(name2)<<endl;//for capital letters
cout<<"your second name  is:"<<name2<<endl;

strcpy(name2,name);//for cpy the name2 of name
strcat(name,name2);//for  dmmge like these namemame2
cout<<"result of comarision="<<strcmp(name,name2)<<endl;//for comarision

cout<<"your first name  is:"<<name<<endl;	
cout<<"your second name  is:"<<name2<<endl;
}
