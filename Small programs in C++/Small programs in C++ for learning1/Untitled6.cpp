#include<iostream>
using namespace std;
main()
{   int n=1,count=0;
	while(n<=100)
	{
  int c=0;
  for(int i=n;i>=1;i--) 
  {
  	if(n%i==0) c++;
	  }	
	  system("color 4f");	
	  if(c==2)
	  {
	  	cout<<n<<" ";
	  	count++;
	  }
	n++;  
}
cout<<"\nthe prime numbers equal to:"<<count<<endl;
}
