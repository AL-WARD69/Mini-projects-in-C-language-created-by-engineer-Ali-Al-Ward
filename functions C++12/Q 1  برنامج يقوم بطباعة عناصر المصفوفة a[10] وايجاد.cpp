#include<iostream>
using namespace std;
main()
{
	int a[10]={2,3,66,-7,86,94,6,2,1,6};
	int sum=0;
	cout<<"\t\tthe numbers in arrey :";
	cout<<"\n\n\t\t";
	for(int i=0;i<10;i++)//print all the number in array
	{cout<<a[i]<<"  ";
	 sum+=a[i];	//sum of numbers in array
	}
	cout<<"\n__________________________________________________\n";
	cout<<"the sum of arrey =  "<<sum;
	
	int max=a[0],min=a[0];
		for(int i=1;i<10;i++)//print  the big number and the small number 
	  {if(max<a[i])
	   max=a[i]; 
	  if(min>a[i])
	   min=a[i]; 
	   }
	   	cout<<"\n__________________________________________________\n";
	cout<<"the biger number of arrey =  "<<max;
	   	cout<<"\n__________________________________________________\n";
	cout<<"the biger smaller of arrey =  "<<min<<endl;
		cout<<"\n__________________________________________________\n";
		cout<<"the bositev number :\n";
		for(int i=0;i<10;i++)//print  the positev number and the negtav number 
	{
		if(a[i]>0)
		{
		cout <<a[i]<<"  ";}
	}
			cout<<"\n__________________________________________________\n";
		cout<<"the nigeitev number :\n";
		for(int i=0;i<10;i++)//print  the positev number and the negtav number 
	{
		if(a[i]<0)
		{
		cout <<a[i]<<"  ";}}
				cout<<"\n__________________________________________________\n";
		cout<<"the even number :\n";
		for(int i=0;i<10;i++)//print  the even number and the negtav number 
	{
		if(a[i]%2==0)
		{
		cout <<a[i]<<"  ";}
	}
			cout<<"\n__________________________________________________\n";
		cout<<"the odd number :\n";
		for(int i=0;i<10;i++)//print  the odd number and the negtav number 
	{
		if(a[i]%2!=0)
		{
		cout <<a[i]<<"  ";}}
	
}
