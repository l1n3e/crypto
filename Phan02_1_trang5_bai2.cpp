#include <iostream>
#include <string>
using namespace std;

int main()
{
	//dung char
	int K;
	char a[100];
	cout<<"Nhap chuoi: "; cin.getline(a, 100);
	cout<<"Nhap khoa: "; cin>>K;
	for(int i=0; a[i]!='\0'; i++)
		a[i] += K;
	cout<<"Ma hoa: "<<a<<endl;
	//
	for(int i=0; a[i]!='\0'; i++)
		a[i] -= K;
	cout<<"Giai ma: "<<a<<endl;	
	cout<<"==="<<endl;
	
	//dung string
	string s;
	cin.ignore();
	cout<<"Nhap chuoi: "; getline(cin, s);
	cout<<"Nhap khoa: "; cin>>K;
	for(int i=0; i<s.size(); i++)
		s[i] += K;
	cout<<"Ma hoa: "<<s<<endl;
	//
	for(int i=0; i<s.size(); i++)
		s[i] -= K;
	cout<<"Giai ma: "<<s<<endl;	
}
	
