#include<iostream>
#include<fstream>
using namespace std;
	ofstream markt;
string na;
		int l,a;
		
		float pr,d,dis,sum=0;
		void result()
		{
			sum=sum+pr;
			  	cout<<"\n prise"<<pr<<"\n";
			  		markt<<"the prise is:"<<"\n"<<pr<<"\n";
			  	cout<<"the sum :"<<sum;
			  		markt<<"the sum is:"<<"\n"<<sum<<"\n";
			  
		}
		void discount()
		{
			 cout<<"enter the discount !!%"	;
		   		 	 markt<<"enter discount  !!%"<<"\n";
		   		 cin>>d;
		   		 markt<<"discount almdkhal :is:"<<"\n"<<d<<"\n";
		   		 
		   		 dis=sum/100*d;
		   		 cout<<"\n the discount is :"<<dis<<"\n";
		   		 cout<<"the total="<<sum-dis<<"\n";
		   		 markt<<"the total="<<sum-dis<<"\n";
		   		 
		}
		void option()
		{
			cout<<"enter number [1]for back to the acount  or enter number [2] for conntinued the last acount or enter number[3]for discount or enter number[4] for go out  ";	
				markt<<"enter number [1]for back to the acount  or enter number [2] for conntinued the last acount or enter number[3]for discount or enter number[4] for go out  "<<"\n";				
			
		}
void sale()
{
	
		
			{
				cout<<" \n\n enter the alsnf name\n";
				cin>>na;
					markt<<"the name alsnf is:"<<"\n"<<na<<"\n";
				cout<<" enter the alsnf prise:\n";
	         	cin>>pr;
	         		markt<<"the prise alsnf is:"<<"\n"<<pr<<"\n";
				}
}
main()
{

	markt.open("w.txt",ios::out);
	
	{
		
		
		cout<<" =======================================================================================\n";
		cout<<"== *           *    * * * *    *         * * * *    * * * *     * *     * *    * * * *  ==\n";
		cout<<"== *           *    *          *        *          *       *   *   *   *   *   *        ==\n";
		cout<<"== *     *     *    * * * *    *        *          *       *   *    * *    *   * * * *  ==\n";
		cout<<"== *    * *    *    *          *        *          * * * * *   *     *     *   *        ==\n";
		cout<<"== *   *   *   *    *          *        *          *       *   *           *   *        ==\n";
		cout<<"==  * *     * *     * * * *    * * * *   * * * *   *       *   *           *   * * * *  ==\n";
		cout<<" =======================================================================================\n";
		
	    markt<<" =======================================================================================\n";
		markt<<"== *           *    * * * *    *         * * * *    * * * *     * *     * *    * * * *  ==\n";
		markt<<"== *           *    *          *        *          *       *   *   *   *   *   *        ==\n";
		markt<<"== *     *     *    * * * *    *        *          *       *   *    * *    *   * * * *  ==\n";
		markt<<"== *    * *    *    *          *        *          * * * * *   *     *     *   *        ==\n";
		markt<<"== *   *   *   *    *          *        *          *       *   *           *   *        ==\n";
		markt<<"==  * *     * *     * * * *    * * * *   * * * *   *       *   *           *   * * * *  ==\n";
		markt<<" =======================================================================================\n";
		
		
		cout<<"enter number [ 1 ] for acount  ** or enter [0] for go out\n";
			markt<<"enter number [ 1 ] for acount  ** or enter [0] for go out\n"<<"\n";
		
		cin>>l;
		markt<<"tm akhtear is"<<"\n"<<l<<"\n";
		if(l==1)
		{
			 main:	
			sum=0;
			start:
		   sale();
		
			  if(pr>0)
			  {		
			  		result();
			  		goto start;
				
			  }
			  	else
				{
					option();
					cin>>a;
				markt<<"tm :a: khtear the number :is:"<<"\n"<<a<<"\n";
				if(a==1)
				
				{
					goto main;
				}
				if(a==2)
				{
				goto start ;
				
				}
				if(a==3)
				{	
		   		discount();
				}
				
				{
					cout<<endl;
				}
				
				
				
				}  
			  	
		}
		if(l=='0')
		cout<<endl;
			  	
		
	}
	
			  
	         

}
