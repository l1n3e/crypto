#include <iostream>
#include <string>
using namespace std;

int main()
{
	string P, C;
	char K;
	getline(cin, P);
	cin>>K;
	for(int i=0; i<P.size(); i++)
		C = C + (char)(P[i]^K);
	cout<<"Chuoi ma hoa: "<<C<<endl;
	P="";
	for(int i=0; i<C.size(); i++)
		P = P + (char)(C[i]^K);
	cout<<"Chuoi giai ma: "<<P<<endl;
}
