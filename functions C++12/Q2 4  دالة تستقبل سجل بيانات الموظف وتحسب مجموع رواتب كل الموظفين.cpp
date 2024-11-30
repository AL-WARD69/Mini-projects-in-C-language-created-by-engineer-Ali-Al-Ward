#include<iostream>
using namespace std;
struct employee_data
{string emplname;
int ID;
string department;
int salary;	
};
void sum(employee_data x[],int size)
{float sum=0;
for(int i=0;i<size;i++)
 sum=sum+x[i].salary;
cout<<"\t th summin of employee salary is "<<sum;
}
main()
{
	employee_data a[6];
	int i;
	
	for( i=0;i<3;i++)
	{cout<<"************************************************\n";
	cout<<"enter the name of employee   {"<<i+1<<"} ";
	 cin>>a[i].emplname;
	 cout<<"enter the ID numer of employee {"<<i+1<<"}";
	 cin>>a[i].ID;
	 cout<<"enter the department of employee {"<<i+1<<"}";
	 cin>>a[i].department;
	  cout<<"enter thesalary of employee{"<<i+1<<"} ";
	 cin>>a[i].salary;
	

	cout<<"****************************************************\n";}
	
	sum(a,3);}




