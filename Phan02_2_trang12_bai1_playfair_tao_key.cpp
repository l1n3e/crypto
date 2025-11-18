#include <iostream>
#include <string>
using namespace std;

int main()
{
	char k[5][5];
	string K;
	//1, 2
	getline(cin, K);//xu ly dau vao chuyen J thanh I
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
	cout<<"Chuoi K: "<<K<<endl;//in de k.tra sort ok chua
	//3
	int d=0;
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
		{
			k[i][j] = K[d];
			d++;
		}
	
}

