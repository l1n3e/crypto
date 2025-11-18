#include <iostream>
using namespace std;

int KT_S(char c)
{
	return c - 'A';
}
char S_KT(int n)
{
	return 'A' + n;
}

int main()
{
	string P, C;
	int a, b;
	cout<<"Nhap chuoi: "; getline(cin, P);
	cout<<"Nhap a, b: "; cin>>a>>b;
	//Ma hoa
		for(int i=0; i<P.size(); i++)
		{
			int p = KT_S(P[i]);
			int c = (a*p + b)%26;
			C += S_KT(c);
		}
		cout<<"Chuoi ma hoa: "<<C<<endl;
	//Brute-force
		cout<<"Brute-force tim chuoi ban dau\n\n";
		for(int a1=1; a1<26; a1=a1+2)
		{
			if(a1 == 13)	continue;
			for(b=0; b<26; b++)
			{
				P="";
				for(int i=0; i<C.size(); i++)
				{
					int c = KT_S(C[i]);
					int p = (a1*(c - b +26))%26;
					P += S_KT(p);
				}
				cout<<P<<endl;
			}
		}
		
}
