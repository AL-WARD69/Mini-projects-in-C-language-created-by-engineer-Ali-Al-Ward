#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
 { 
 // open file for read
 string s1, s;
 int n;
 bool found =false;
 	ifstream file("it.txt");
	
	cout <<" enter your searsh  \t: " ;
	cin >> s1;
	while (! file.eof() )
  {
  	file >> s  >> n;
  	if (s1.compare(s)==0)
  	{
  	 	found =true;
		cout << s << "\t"<< n << "\n";
  	}
  }
  if ( found== false)
  cout <<"not found" ;

	file.close ();
	
}


	
