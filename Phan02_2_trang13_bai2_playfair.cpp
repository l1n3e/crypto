#include <iostream>
#include <string>
using namespace std;

int main()
{
	char k[5][5];
	string K;
	getline(cin, K);//xu ly dau vao chuyen J thanh I
	//Tao key
		K += "ABCDEFGHIKLMNOPQRSTUVWXYZ";
		for(int i=0; i<K.size()-1; i++)
		{
			for(int j=i+1; j<K.size();j++)
			{	
				if(K[j]==K[i])
				{
					K.erase(j,1);
					j--;
				}
			}
		}
		int d=0;
		for(int i=0; i<5; i++)
			for(int j=0; j<5; j++)
			{
				k[i][j] = K[d];
				d++;
			}
	//Ma hoa
		string P, C;
		getline(cin, P);
		for(int i=0; i<P.size(); i=i+2)
		{
			if(i==P.size()-1)
				P.insert(i+1, "X");
			else if(P[i]==P[i+1])
				P.insert(i+1, "X");
			int vt1 = K.find(P[i]);
			int vt2 = K.find(P[i+1]);
			if(vt1/5 == vt2/5)
			{
				C += k[vt1/5][(vt1%5+1)%5];
				C += k[vt2/5][(vt2%5+1)%5];
			}
			else if(vt1%5 == vt2%5)
			{
				C += k[(vt1/5+1)%5][vt1%5];
				C += k[(vt2/5+1)%5][vt2%5];
			}
			else
			{
				C += k[vt1/5][vt2%5];
				C += k[vt2/5][vt1%5];
			}
		}
		cout<<"Chuoi ma hoa: "<<C<<endl;
	//Giai ma
		P = "";
		for(int i=0; i<C.size(); i=i+2)
		{
			int vt1 = K.find(C[i]);
			int vt2 = K.find(C[i+1]);
			if(vt1/5 == vt2/5)
			{
				P += k[vt1/5][(vt1%5-1+5)%5];
				P += k[vt2/5][(vt2%5-1+5)%5];
			}
			else if(vt1%5 == vt2%5)
			{
				P += k[(vt1/5-1+5)%5][vt1%5];
				P += k[(vt2/5-1+5)%5][vt2%5];
			}
			else
			{
				P += k[vt1/5][vt2%5];
				P += k[vt2/5][vt1%5];
			}
		}
		cout<<"Chuoi giai ma: "<<P<<endl;
}
//Kho brute-force va che dau 1 phan thong tin tan suat
//Vay tai sao phai tao ra mat ma moi?
//Phai chang co diem yeu nao?

