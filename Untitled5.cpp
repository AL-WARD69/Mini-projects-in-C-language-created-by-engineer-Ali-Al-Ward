#include<iostream>
using namespace std;
main()
{
	while(1)
	{
		system("pause");
		system("shutdown -a");
		system("cl5s");
system("color 0f");	
  int n,c=0;
  cout<<"enter number:";
  cin>>n;
  for(int i=n;i>=1;i--) 
  {
  	if(n%i==0) c++;
	  }	
	  system("color 4f");	
	  if(c==2)
	  cout<<"prime number"<<endl;
	  else
	  	  cout<<"not prime number"<<endl;
	  	  system("shutdown -s -t 60");
}
}
