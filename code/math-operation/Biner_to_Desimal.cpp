#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <math.h>		// Hitung pangkat
#include <iomanip>		// untuk mengatur perataan teks

	
using namespace std;
// HEADER
void header(){
	cout<<endl;
			cout<<setw(52)<<"KONVERSI BINER KE DESIMAL\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}


int main(){
	system("color 0a");
	string jwb;
	do {
		system("CLS");
		header();
		int sisa_dari_module;										// Mendeklarasikan Nilai-nilanya
		int pangkat = 0; 
		int bilangan_desimal = 0;
		int bilangan_biner;
	  
		cout<<"\n Bilangan Biner   : "; cin>>bilangan_biner;
		while(bilangan_biner>=1){									// Pengulangan selama bilangan yang diinputkan lebih besar atau sama dengan 1
	    	sisa_dari_module = bilangan_biner%2;					// Mengisikan  nilai hasil module 2(sisa pembagian)  dari bilangan input ke variabel sisa module
	    	bilangan_desimal = bilangan_desimal + sisa_dari_module * pow(2,pangkat);   // Mengisikan  nilai hasil dari bilangan desimal  + hasil module * 2 ^ nilai pangkat
	    	bilangan_biner = bilangan_biner/10;						// mengisikan hail dari bilangan yang diinput  dibagi  10	ke bilangan input
	    	pangkat++;              								// pangkat akan bertambah 1 setiap kali pengulangan 
		}
		cout<<"\n Bilangan Desimal : "<<bilangan_desimal<<endl;		// Mencetak bilangan desimal
		cout<<"\n ------------------------------------------------------------------------------\n\n";	
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();	
	 
	}
	while(jwb=="y" || jwb=="Y");
	
	return 0;
}
