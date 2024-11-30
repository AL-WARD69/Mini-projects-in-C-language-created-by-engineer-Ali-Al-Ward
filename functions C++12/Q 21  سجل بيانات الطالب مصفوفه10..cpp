#include<iostream>
using namespace std;
struct student_data
{string studentname;
int ID;
float avreg;	
};
main()
{
	student_data a[10];
	
	for(int i=0;i<10;i++)
	{cout<<"enter the student name numer  {"<<i+1<<"}";
	 cin>>a[i].studentname;
	 cout<<"enter the student ID numer  {"<<i+1<<"}";
	 cin>>a[i].ID;
	 cout<<"enter the avreg in high school  numer {"<<i+1<<"}";
	 cin>>a[i].avreg;
	}
	cout<<"\n\tstudent name\tstudent ID\tavreg in high school\n";
	for(int i=0;i<10;i++)
	{
	 cout<<"     \t"<<a[i].studentname<<"  \t";
	 cout<<"     \t"<<a[i].ID<<"   \t";
	 cout<<"     \t"<<a[i].avreg<<"\n";
	}cout<<"     \t"<<"\n";
}

