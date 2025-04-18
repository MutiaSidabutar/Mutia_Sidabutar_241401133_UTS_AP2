#include <iostream>
using namespace std;

int main(){

    string daftarJudul;
    system("CLS");

    cout<<"masukkan daftar judul buku:"<<"\n";
    getline(cin,daftarJudul);
   int count =0, i=0;
   bool inWorld = false;
    while (i<daftarJudul.length()) {
        if (daftarJudul[i] != ' '&& !inWorld){
          count++;
            inWorld = true;
            }
            else if (daftarJudul[i]==' '){
        
                inWorld = false; 
            }i++;
        
}
cout<<"jumlah judul buku:"<<count<<"\n";
}