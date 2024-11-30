#include<iostream>
using namespace std;
struct employee_data
{string emplname;
int ID;
string department;
int salary;	
};
main()
{
	employee_data a[6];
	int i;
	float sum=0,z=0;
	for( i=0;i<6;i++)
	{cout<<"************************************************\n";
	cout<<"enter the name of employee   {"<<i+1<<"} ";
	 cin>>a[i].emplname;
	 cout<<"enter the ID numer of employee {"<<i+1<<"}";
	 cin>>a[i].ID;
	 cout<<"enter the department of employee {"<<i+1<<"}";
	 cin>>a[i].department;
	  cout<<"enter thesalary of employee{"<<i+1<<"} ";
	 cin>>a[i].salary;
	 sum=sum+a[i].salary;

	cout<<"****************************************************\n";}

cout<<"\t th summin of employee salary is "<<sum;

int max=a[0].salary,w=0;
	for( i=1;i<6;i++)
	{if(max<a[i].salary)
	 {max=a[i].salary;
	 w=i;	
	 }
	}
     
   	cout<<"\n\name of employee\t  ID numer of employee\tdepartment of employee\tthesalary of employee\n";
	 cout<<"     \t"<<a[w].emplname<<"  \t";
	 cout<<"     \t"<<a[w].ID<<"   \t";
	 cout<<"     \t"<<a[w].department<<"\t";
 cout<<"     \t"<<a[w].salary<<"\n";
	cout<<"     \t"<<"\n";
}
