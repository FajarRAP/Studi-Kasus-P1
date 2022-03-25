#include <iostream>
using namespace std;

void garis(int a){
	for(int b=0; b<a; b++){
  	cout<<"=";
  	}
  	cout<<endl;
}

int main(){
int ayambakar = 21000, ayamgoreng = 17000, pilih, pcs, diskon;
int pcsag=0, pcsab=0, hargaag=0, hargaab=0, total=0,;
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
		hargaag=pcs*ayamgoreng;
		total+=hargaag;
		goto menu;
		break;
  	case 2:
		cout<<"Pcs : ";
		cin>>pcs;
		pcsab+=pcs;
		hargaab=pcs*ayambakar;
		total+=hargaab;
		goto menu;
		break;
  	case 3:	
		garis(30);
		cout<<"\t\tPEMBAYARAN"<<endl;
		garis(30);
		cout<<"Ayam Goreng\t\tx"<<"\tRp. "<<pcsag<<endl;
		cout<<"Ayam Bakar \t\tx"<<"\tRp. "<<pcsab<<endl;
		if(total>45000){
			garis(30);
			cout<<"Total Harga\t\t\tRp. "<<total<<endl;
			diskon=total*0.1;
			total-=diskon;
			cout<<"Total Setelah Diskon \t\tRp. "<<total<<endl;
			garis(30);
		}else{
			cout<<"Total Harga \t\tRp. "<<total<<endl;
		}
		break;
		default:
			cout<<"Menu tidak tersedia"<<endl;
  }
 	return 0;
}
