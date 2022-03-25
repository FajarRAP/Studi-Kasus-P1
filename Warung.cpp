#include <iostream>
using namespace std;

void garis(int a){
	for(int b=0; b<a; b++){
  	cout<<"=";
  	}
  	cout<<endl;
}

int main(){
int ayambakar = 21000, ayamgoreng = 17000, pilih, pcs, harga, total, diskon;
int pcsag=0, pcsab=0;
menu: 
system("cls");
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
		pcsag+=pcs;
		harga=pcs*ayamgoreng;
		total+=harga;
		goto menu;
		break;
  	case 2:
		cout<<"Pcs : ";
		cin>>pcs;
		pcsab+=pcs;
		harga=pcs*ayambakar;
		total+=harga;
		goto menu;
		break;
  	case 3:	
		garis(30);
		cout<<"\t\tPembayaran"<<endl;
		garis(30);
		cout<<"Ayam Goreng x"<<pcsag<<endl;
		cout<<"Ayam Bakar  x"<<pcsab<<endl;
		if(total>45000){
			diskon=total*0.1;
			total-=diskon;
			cout<<"TOTAL : "<<total<<endl;
		}else{
			cout<<"TOTAL : "<<total<<endl;
		}
		break;
		default:
			cout<<"Menu tidak tersedia"<<endl;
  }
 	return 0;
}
