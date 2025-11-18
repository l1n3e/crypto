#include <iostream>
#include <string>
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
	string K;
	cout<<"Nhap chuoi P: "; getline(cin, P);
	cout<<"Nhap khoa K: "; getline(cin, K);
	//Ma hoa
		int dem = 0;
		for(int i=0; i<P.size(); i++)
		{
			int p = KT_S(P[i]);
			int k = KT_S(K[dem]);
			dem++;
			int c = (p + k)%26;
			C += S_KT(c);
			if(dem == K.size())	dem = 0;
		}
		cout<<"Chuoi ma hoa: "<<C<<endl;
	//Giai ma
		P = "";
		dem = 0;
		for(int i=0; i<C.size(); i++)
		{
			int c = KT_S(C[i]);
			int k = KT_S(K[dem]);
			dem++;
			int p = (c - k +26)%26;
			P += S_KT(p);
			if(dem == K.size())	dem = 0;
		}
		cout<<"Chuoi giai ma: "<<P<<endl;
}
