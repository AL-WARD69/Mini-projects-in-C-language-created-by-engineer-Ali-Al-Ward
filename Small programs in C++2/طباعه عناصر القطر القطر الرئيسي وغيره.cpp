#include<iostream>
using namespace std;
main()
{int n=3,i,j;
	int a[n][n];
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	cin>>a[i][j];
}

	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	cout<<a[i][j]<<"\n\n";
	
}

	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	if(i==j)
	cout<<a[i][j]<<"\n";
	else
	cout<<"  ";
	cout<<"\n";
}


	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	if(i+j==n-1)
	cout<<a[i][j]<<"\n";
	else
	cout<<"  ";
	cout<<"\n";
}


	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	if(i>j)
	cout<<a[i][j]<<"\n";
	else
	cout<<"  ";
	cout<<"\n";
}


	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	if(i<j)
	cout<<a[i][j]<<"\n";
	else
	cout<<"  ";
	cout<<"\n";
}
}
