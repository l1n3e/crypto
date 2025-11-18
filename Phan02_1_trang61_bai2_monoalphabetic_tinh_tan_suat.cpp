//tinh tan suat xuat hien cua cac ki tu
#include <iostream>
#include <string>
#include <iomanip>
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
	cout << fixed << setprecision(2); //in ra lam tron den so thap phan thu 2
	
	string C;
	float dem[26] = {0};//gan 0 cho dem[0], p.tu con lai mac dinh la 0
	cout<<"Nhap van ban: "; getline(cin, C);
	for(int i=0; i<C.size(); i++)
	{
		int tg = KT_S(C[i]);
		dem[tg]++;
	}
	for(int i=0; i<26; i++)
	{
		dem[i] = (dem[i]*100)/C.size();
		cout<<S_KT(i)<<" - "<<dem[i]<<"%"<<endl;
	}
}
