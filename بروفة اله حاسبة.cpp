#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;
ofstream calaulator;
////////////////////////fan////////////////////////////////
int pow(int x,int y)
{
	int i,z=1;
	for(i=1;i<=y;i++)
	{
		z=z*x;
	}
	return z;
}

//////////////////////////////////////////////////////////////////
struct address
{
int tel;
string email;	
};
///////////////////////////////////////////////////////////////////
struct exclusiveness
{
string neme;
address add;
};
main()

{
	calaulator.open("w.txt",ios::out);

        cout<<" *           *    * * * *    *         * * * *    * * * *     * *     * *    * * * *  \n";
		cout<<" *           *    *          *        *          *       *   *   *   *   *   *        \n";
		cout<<" *     *     *    * * * *    *        *          *       *   *    * *    *   * * * *  \n";
		cout<<" *    * *    *    *          *        *          * * * * *   *     *     *   *        \n";
		cout<<" *   *   *   *    *          *        *          *       *   *           *   *        \n";
		cout<<"  * *     * *     * * * *    * * * *   * * * *   *       *   *           *   * * * *  \n";
		


        cout<<"================================================================================\n";
        cout<<"================================================================================";


	int l;
	cout<<"enter number [ 1 ] for exclusiveness \n\n";  
	cout<<" \t \t or \n\n ";
	cout<<"enter [2] for calaulator\n\n'+'\t'-'\t'*'\t'/'\t'%'\n\n";
	cout<<" \t \t or\n \n";
	cout<<"enter [3] for calaulator\n\n";
	cout<<" \t \t or\n \n";
	cout<<"enter [0] for go out\n\n";
	cout<<"====================================";
	cout<<"\n===================================\n";

	cin>>l;
	if(l==1)
	{
	
exclusiveness a;
a.neme="ALI ABDULLH ALWARD\n";
a.add.tel=774087409;
a.add.email="\n alwardy69gmail.com\n";
cout<<a.neme;
cout<<a.add.tel;
cout<<a.add.email;
}

long n1,n2; 
long n3;
int n;
char m;


if(l==2)
{
while(1)
{

cout<< "=====================================\n ";
cout<< "enter the n1 : ";
cin>>n1; 
cout<< "enter the n2 : ";
cin>>n2;
cout<< "enter the sing : ";
cin>>m;
if(m=='+')
{
cout<<"the result is : ";
cout<<n1+n2<<" \n__________________"<<endl;
	
	
}
if(m=='-')
{
cout<<"the result is : ";
cout<<n1-n2<<" \n__________________"<<endl;
	
	
}
if(m=='*')
{
cout<<"the result is : ";
cout<<n1*n2<<" \n__________________"<<endl;
	
	
}
if(m=='/')
{
cout<<"the result is : ";

cout<<n1/n2<<" \n__________________"<<endl;
	
}


if(m=='%')
{
cout<<"the result is : ";

cout<<n1%n2<<" \n__________________"<<endl;


}
}
}
if(l==3)
{
	while(1)
	{
	
float n,g;
cout<<"enter num";
cin>>n;
g=sqrt(n);
cout<<"the root 2 = "<<g<<endl;
}
}
if(l==4)
{
while(1)
{

int x,y,r;
cin>>x;
cin>>y;
r=pow(x,y);
cout<<x<<"^"<<y<<"="<<r;
}
}

if(l==5)
{		while(1)
	{
	
float n,g;
cout<<"enter num";
cin>>n;
g=cbrt(n);
cout<<"the root 3 = "<<g<<endl;
}
}

if(l==6)
{
		while(1)
	{
	
	int m=1,x;
	cout<<"x=";
	cin>>x;
	for(int i=x;i>=1;i--)
	{
		m=m*i;
	}
	cout<<"factorial of x="<<m<<endl;
}
}
{

cout <<"\n*** THANKS *** \n_________________\n\n";
	if(l=='0')
		cout<<endl;
	}
}






