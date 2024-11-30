#include<iostream>
using namespace std;
struct employee_data
{string emplname;
int ID;
string department;
int salary;	
};
void print(employee_data emp  )
{
	cout<<emp.emplname<<"\t\t   ";
	cout<<emp.ID<<"\t\t    ";
	cout<<emp.department<<"\t\t   ";
	cout<<emp.salary<<"\t\t   ";
}
main()
{ employee_data emp;
	{cout<<"************************************************\n";
	cout<<"enter the name of employee  =  ";
	 cin>>emp.emplname;
	 cout<<"enter the ID numer of employee = ";
	 cin>>emp.ID;
	 cout<<"enter the department of employee =";
	 cin>>emp.department;
	  cout<<"enter thesalary of employee = ";
	 cin>>emp.salary;}
	 	cout<<"****************************************************\n";
	 	cout<<"\n\name of employee\t  ID numer of employee\tdepartment of employee\tthesalary of employee\n";
	
	print(emp);
}
