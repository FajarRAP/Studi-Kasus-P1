#include <iostream>
using namespace std;
 
 int main(){
  int harga, ayambakar = 21000, ayamgoreng = 17000, pilih, pcs, harga, total, diskon;
  menu: 
  cout<<"Daftar menu : "<<endl;
		cout<<"1. Ayam Goreng "<<endl;
 	cout<<"2. Ayam Bakar"<<endl;
  cout<<"3. Bayar"<<endl;
 	cout<<"Silahkan Pilih : ";
 	cin>>pilih;
  switch(pilih){
   case 1:
    cout<<"Pcs : ";
    cin>>pcs;
    harga=pcs*ayamgoreng;
    total+=harga;
    goto menu;
    break;
   case 2:
    cout<<"Pcs : ";
    cin>>pcs;
    harga=pcs*ayambakar;
    total+=harga;
    break;
   case 3:
    break;
    if(total>45000){
      diskon=total*0.1;
      total-=diskon;
      
    }
   default:
    cout<<"Menu tidak tersedia"<<endl;
  }
 	return 0;
}
