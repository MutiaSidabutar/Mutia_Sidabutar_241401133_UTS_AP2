#include<iostream>
using namespace std;
 int main(){
    int angka, jumlah;
    
    system("CLS");
    cout<<"Masukkan angka 3 digit:"<<"\n";
    cin>> angka;
   
   
    if(angka < 100||angka > 999){
         cout<<"Kode Salah"<<"\n";
         return 0;
        }
        
            int ratusan = angka/100;
            int puluhan = (angka/10) % 10;
            int satuan = angka % 10;
             
            jumlah = ratusan + puluhan + satuan;
            cout<<" Jumlah angka 3 digit adalah: "<< jumlah <<"\n";

return 0;
         
    }
      
    
 