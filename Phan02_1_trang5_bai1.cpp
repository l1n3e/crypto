#include <iostream>
#include <string>
using namespace std;

int main()
{
	//dung char
	char a[100];
	cin.getline(a, 100);
	for(int i=0; a[i]!='\0'; i++)
		a[i] += 3;
	cout<<"Ma hoa: "<<a<<endl;
	//
	for(int i=0; a[i]!='\0'; i++)
		a[i] -= 3;
	cout<<"Giai ma: "<<a<<endl;	
	cout<<"==="<<endl;
	
	//dung string
	string s;
	getline(cin, s);
	for(int i=0; i<s.size(); i++)
		s[i] += 3;
	cout<<"Ma hoa: "<<s<<endl;
	for(int i=0; i<s.size(); i++)
		s[i] -= 3;
	cout<<"Giai ma: "<<s<<endl;	
}
	
