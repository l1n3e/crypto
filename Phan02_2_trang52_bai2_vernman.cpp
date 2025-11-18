#include <iostream>
#include <string>
using namespace std;

int main()
{
	string P, C;
	string K;
	getline(cin, P);
	getline(cin, K);
	//Ma hoa
		int dem = 0;
		for(int i=0; i<P.size(); i++)
		{
			C = C + (char)(P[i]^K[dem]);
			dem++;
			if(dem == K.size())	dem = 0;
		}
			
		cout<<"Chuoi ma hoa: "<<C<<endl;
	//Giai ma
		P="";
		dem = 0;
		for(int i=0; i<C.size(); i++) 
		{
			P = P + (char)(C[i]^K[dem]);
			dem++;
			if(dem == K.size())	dem = 0;
		}
		cout<<"Chuoi giai ma: "<<P<<endl;
}
