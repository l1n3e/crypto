#include <iostream>
#include <string>
using namespace std;

int main()
{
	string P, C, P1;
	getline(cin, P);
	//Ma hoa
		for(int i=0; i<2; i++)
			for(int j=i; j<P.size(); j=j+2)
				C += P[j];
		cout<<"Chuoi ma hoa: "<<C<<endl;
	//Giai ma
		int du = C.size()%2, nguyen = C.size()/2;
		for(int i=0; i<nguyen; i++)
		{
			P1 += C[i];
			P1 += C[i+nguyen+du];
		}
		if(du != 0)	P1+= C[nguyen];
		cout<<"Chuoi giai ma: "<<P1<<endl;
		cout<<((P == P1)?"Giong nhau!":"Khac nhau!")<<endl;
		
//		//Another way
//		int tg = C.size()/2;
//		if(C.size()%2 != 0)	tg++;
//		for(int i=0; i<tg; i++)
//		{
//			P1 += C[i];
//			if(i+tg < C.size())
//				P1 += C[i+tg];
//		}
//		cout<<"Chuoi giai ma: "<<P1<<endl;
//		cout<<((P == P1)?"Giong nhau!":"Khac nhau!")<<endl;
}
//case1: MEETMEAFTERTHETOGAPARTY - MEMATRHTGPRYETEFETEOAAT