#include<iostream>
using namespace std;
struct student_data
{string studentname;
int ID;
float avreg;	
};
main()
{
student_data S1,S2,S3;
cout<<"enter the student{1} name :";
cin>>S1.studentname;
cout<<"enter the student{1} ID :";
cin>>S1.ID;
cout<<"enter the avreg in high school for student{1}  :";
cin>>S1.avreg;
cout<<"\n______________________________________________\n";
cout<<"enter the student{2} name :";
cin>>S2.studentname;
cout<<"enter the student{2} ID :";
cin>>S2.ID;
cout<<"enter the avreg in high school for student{2}  :";
cin>>S2.avreg;
S3=S1;

cout<<"\n\tstudentnames\tstudent ID\tavreg in high school\n";	
cout<<"\t   "<<S1.studentname<<"\t    "<<S1.ID<<"       \t"<<S1.avreg<<"\n";
cout<<"\t   "<<S2.studentname<<"\t    "<<S2.ID<<"       \t"<<S2.avreg<<"\n";
cout<<"\t   "<<S3.studentname<<"\t    "<<S3.ID<<"       \t"<<S3.avreg<<"\n";
}




