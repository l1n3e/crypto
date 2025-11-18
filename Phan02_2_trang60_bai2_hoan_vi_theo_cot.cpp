#include <iostream>
#include <string>
using namespace std;

int main()
{
	string P, C, P1;
	char a[5][5];
	getline(cin, P); //ko qua 25 ki tu
	//Ma hoa
		int dem = 0;
		for(int i=0; i<5; i++)
			for(int j=0; j<5; j++)
			{
				if(dem==P.size())	a[i][j] = 'X';
				else	
				{
					a[i][j] = P[dem];
					dem++;
				}
			}
		for(int j=0; j<5; j++)
			for(int i=0; i<5; i++)
				C += a[i][j];
		cout<<"Chuoi ma hoa: "<<C<<endl;
	//Giai ma
		for(int i=0; i<5; i++)
			for(int j=0; j<5; j++)
				P1 += a[i][j];
		//xu ly P1 de so sanh voi P chinh xac
		dem=0;
		for(int i=24; i>=0; i--)
		{
			if(P1[i] == 'X')	dem++;
			else
			{
				P1.erase(i+1, dem);
				break;
			}
		}			
		cout<<"Chuoi giai ma: "<<P1<<endl;
		cout<<((P1==P)?"Giong nhau!":"Khac nhau!")<<endl;
}
//case1: ATTACKPOSTPONEDUNTILTWOAM - TTNAAPTMTSUOAODWCOIXKNLYPETZ


