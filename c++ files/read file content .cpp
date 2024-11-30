#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
 { 
 // open file for read
 string s;
 int n, total=0;
 	ifstream file("it.txt", ios::in);
	
	while ( ! file.eof() )
  {
  	file >> s >> n;
    cout << s << "\t" << n <<"\n";
  //	total= total+n;
  	
  }
  //cout <<"\n \t" << total;
	file.close ();
	
}


	
