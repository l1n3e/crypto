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
	string P, C, K;
	cout<<"Nhap chuoi: "; getline(cin, P);
	cout<<"Nhap K: "; getline(cin, K);
	//Ma hoa
		for(int i=0; i<P.size(); i++)
		{
			int j = KT_S(P[i]);	
			C += K[j];
		}
		cout<<"Chuoi ma hoa: "<<C<<endl;
	//Giai ma
		P = "";
		for(int i=0; i<C.size(); i++)
		{
			int j;
//			//Cach 1
//				for(j=0; j<26; j++)
//				{
//					if(C[i]==K[j])	break;
//				} //lay pos trong K de a.xa lai bang alphabet 
			//Cach 2
				j = K.find(C[i]);
			P += S_KT(j);
		}
		cout<<"Chuoi giai ma: "<<P<<endl;
}
//ABCDEFGHIJKLMNOPQRSTUVWXYZ - alphabet
//QWERTYUIOPASDFGHJKLZXCVBNM - case1
//ZXVTRPNLJHFDBQOMKIGECUYSWA - case 2

