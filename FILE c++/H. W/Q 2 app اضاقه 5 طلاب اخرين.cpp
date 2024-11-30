#include<iostream>
#include<fstream>
using namespace std;
struct student
{string names;
 float mark1,mark2,mark3;
	
	
};
main()
{
	ofstream file("stud.txt", ios::app);
	student x;
	for(int i=0;i<5;i++)
	{cout<<"enter your name :";
	 cin>>x.names;
	 file<<x.names<<"\t";
	 cout<<"enter your mark1 :";
	 cin>>x.mark1;
	 file<<x.mark1<<"\t";
	 cout<<"enter your mark2 :";
	 cin>>x.mark2;
	 file<<x.mark2<<"\t";
	 cout<<"enter your mark3 :";
	 cin>>x.mark3;
	 file<<x.mark3<<"\n";		
	cout<<"\n";	
	}
	
	file.close();
	
	
}
