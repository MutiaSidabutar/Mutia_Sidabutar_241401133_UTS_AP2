#include <iostream>
using namespace std;

int main(){
    int nilai_Ap,nilai_pds,  nilai_Os, NIM;
    string nama;
    
    system("CLS");
    cout<<"Masukkan Nama Mahasiswa:"<<"\n";
    getline (cin,nama);
    cout <<" Masukkan NIM:"<<"\n";
    cin >> NIM;
    cout<<"Nilai Mata Kuliah:"<<"\n";
    cout<<" Algoritma dan pemograman:"<<"\n";
    cin >> nilai_Ap;
    cout<<" Probabilitas dan Statistika:"<<"\n";
    cin >> nilai_pds ;
    cout<<" Sistem Operasi:"<<"\n";
    cin >> nilai_Os ;

    cout<<" Algoritma dan pemograman:"<<nilai_Ap<<"\n";
    if (nilai_Ap >= 60){
        cout<<" lulus"<<"\n";
    } else { 
        cout<<" Tidak lulus. Silahakan Ulangi di Tahun Depan"<<"\n";
    } 

    cout<<" Probabilitas dan Statistika:"<<nilai_pds<<"\n";
    if (nilai_pds >=60 ){
        cout<<" lulus"<<"\n";
    } else { 
        cout<<" Tidak lulus. Silahakan Ulangi di Tahun Depan"<<"\n";
    } 
    cout<<" Sistem Operasi:"<<nilai_Os<<"\n";
    if (nilai_Os >=60 ){
        cout<<" lulus"<<"\n";
    } else { 
        cout<<" Tidak lulus. Silahakan Ulangi di Tahun Depan"<<"\n";
    } 

     float Rata= ( nilai_Ap +  nilai_pds +  nilai_Os)/3;

    
    
    cout<<" Nilai Mean:"<<Rata<<"\n";
  

    }
