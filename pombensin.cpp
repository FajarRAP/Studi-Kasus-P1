#include<iostream>
#include<windows.h>
using namespace std;

int main(){
  int pilih, liter, total;
  int plite=7000, pmax=9000;
  string nama, bensin;
  
  cout<<"Masukkan nama : ";
  getline(cin,nama);
  
  system("cls");
  cout<<"1. Pertalite\n2. Pertamax"<<endl;
  cout<<"Silakan pilih : ";
  cin>>pilih;
  switch(pilih){
    case 1:
      bensin="Pertalite";
      cout<<"Liter\t\t: ";
      cin>>liter;
      total=plite*liter;
      goto struk;
    break;
    case 2:
      bensin="Pertamax";
      cout<<"Liter\t\t: ";
      cin>>liter;
      total=pmax*liter;
      goto struk;
    break;
    default:
      cout<<"Menu tidak tersedia"<<endl;
  }
  
  struk:
  cout<<"Pengisian Bensin dalam proses ";
  for(int a=0; a<5; a++){
    cout<<".";
    Sleep(1000);
  }
  cout<<endl<<"Pengisian selesai"<<endl;
  cout<<"Mengeprint struk ";
  for(int a=0; a<5; a++){
    cout<<".";
    Sleep(1000);
  }
  
  system("cls");
  cout<<"Nama Pelanggan : "<<nama<<endl;
  cout<<"Jenis Bensin   : "<<nama<<endl;
  cout<<"Jumlah Liter   : "<<liter<<endl;;
  cout<<"Total Harga    : "<<total<<endl;
  return 0;
}
