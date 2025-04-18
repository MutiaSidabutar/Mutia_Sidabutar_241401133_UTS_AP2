#include <iostream>
using namespace std;

int main(){
int  code_1, code_2, code_3, hasil;
    system("CLS");
    cout<<" Masukkan Kode ke-1:"<<endl;
    cin>> code_1;
    cout<<" Masukkan kode ke-2:"<<endl;
    cin>> code_2;
    cout<<" Masukkan kode ke-3:"<<endl;
    cin>> code_3;
hasil = code_1 + code_2 + code_3;

if(hasil >=200 && code_1 >= 50 && code_2 >= 50 && code_3 >= 50 ){
    cout<<"Aman"<<endl;// senjata dinonaktifkan
} 
else{
    cout<<"Bahaya"<<endl;//sistem mengunci
    return 0;
}
}