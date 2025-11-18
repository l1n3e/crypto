#include <bits/stdc++.h>
using namespace std;

char S_KT(int a){
    return a+'A';
}
int KT_S(char a){
    return a-'A';
}
int main(){
    string P,C;
    int K;
    cout << "Nhap plaintext: ";
    getline(cin,P);
    cout << "Nhap khoa: ";
    cin >> K;
    // mã hóa
    for(int i=0;i<P.size();i++){
        int p=KT_S(P[i]);
        int c=(p+K)%26;
        C += S_KT(c);
    }
    cout << "Ciphertext: " << C << endl;
    // giải mã
    P="";
    for(int i=0;i<C.size();i++){
        int c=KT_S(C[i]);
        int p=(c-K+26)%26;
        P += S_KT(p);
    }
    cout << "Plaintext: " << P << endl;
    //brute force key
    int k;
    for(int k=0;k<26;k++){
        P="";
        for(int i=0;i<C.size();i++){
            int c=KT_S(C[i]);
            int p=(c-k+26)%26;
            P += S_KT(p);
        }
        cout << "K=" << k << ": " << P << endl;
    }
    return 0;
}