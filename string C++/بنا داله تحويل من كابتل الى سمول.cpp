#include<iostream>
using namespace std;
main()
{
	char name1[50];
	string name2;
	int n;
	
	cout<<"enter your first name  :";
	cin.getline(name1,50);
		
	cout<<"enter your last name  :";
	getline(cin,name2);
	
	/////////////////////////////////////////////
	for(n=0;name1[n]!='\0';n++);
	cout<<"length of your first name :"<<n<<endl;
	////////////////////////////////////////////
		for(n=0;name2[n]!='\0';n++);
	cout<<"length of your last name :"<<n<<endl;
	
	////////////////////////////////////////////
		for(n=0;name1[n]!='\0';n++)
		{if(name1[n]>=92 && name1[n]!=' ')
		{
			name1[n]-=32;}
		}cout<<"cabtal of your first name :"<<name1<<endl;
		
		////////////////////////////////////////////////
		for(n=0;name2[n]!='\0';n++)
		{if(name2[n]<=90 && name2[n]!=' ')
		{
			name2[n]+=32;}
		}cout<<"small of your last name :"<<name2<<endl;
		
		////////////////////////////////////////////////
/*			int n1,n2;
	for(n1=0;name1[n]!='\0';n1++);
	for(n2=0;name1[n]!='\0';n2++);
	int min=n1;
	if(n2<min)min=n2;
*/		///////////////////////////////////////////////////
		
		for(n=0;name2[n]!='\0';n++)
		{
			char w=name1[n];
			
			   name1[n]=name2[n];
			   name2[n]=w;
		}
		
		cout<<"\n\n";
		name1[n]='\0';
		name2[n]='\0';
		
		cout<<"name1 :"<<name1<<endl;
		cout<<"name2 :"<<name2<<endl;
		
			
		}
	

