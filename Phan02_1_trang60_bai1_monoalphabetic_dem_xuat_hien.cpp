//dem so lan xuat hien ki tu dau tien
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string C;
	cout<<"Nhap chuoi: "; getline(cin, C);
	int dem = 0;
	for(int i=0; i<C.size(); i++)
	{
		if(C[0]==C[i])	dem++;
	}
	cout<<"So lan xuat hien C[0]: "<<dem<<endl;
	
}
