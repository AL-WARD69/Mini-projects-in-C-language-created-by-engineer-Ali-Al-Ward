#include<iostream>
#include<fstream>
using namespace std;
int main()
{ int a;
ifstream ali;
ali.open("alii.txt",ios::in);
while(!ali.eof());
{

	ali>>a;
	cout<<a;
}
ali.close();
}
