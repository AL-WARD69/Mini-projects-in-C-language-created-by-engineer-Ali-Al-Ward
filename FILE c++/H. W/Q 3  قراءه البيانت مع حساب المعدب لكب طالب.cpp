#include<iostream>
#include<fstream>
using namespace std;
struct student
{string names;
 float mark1,mark2,mark3;
	
	
};
main()
{
	ifstream file("stud.txt", ios::in);
	student x;
	float n;
	cout<<"student name\tmark1\tmark2\tmak3\tavrg\n";
	while(! file.eof())
	{n=0;
	 file>>x.names>>x.mark1>>x.mark2>>x.mark3;
	 n=(x.mark1+x.mark2+x.mark3)/3;
	 cout<<x.names<<"\t\t"<<x.mark1<<"\t"<<x.mark2<<"\t"<<x.mark3<<"\t"<<n;
	 cout<<"\n";	
	}
	
	file.close();
	
	
}
