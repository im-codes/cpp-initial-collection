#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop
#include <iomanip>		// untuk mengatur perataan teks
#include <sstream> 		// Untuk membuat fungsi format rupiah
	
using namespace std;
// HEADER
void header(){
	cout<<endl;
			cout<<setw(51)<<"PINJAMAN MODAL NASABAH\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//fungsi untuk merubah bilangan menjadi format rupiah
string format_rupiah(int bilangan, string pemisah = "."){	
	// merubah nilai menjadi string				
	stringstream st; st<<bilangan;
	string rp = st.str();
	
	// mencari jumlah digit untuk lokasi penambahan "."
	int digit = rp.length() - 3;
	
	// selama digit masih lebih besar dari 0
	while(digit > 0){
		
		/* bilangan akan ditambahkan "." pada 
		   digit ke 3 dari kanan */
		rp.insert(digit,pemisah);
		
		// jumlah digit akan di kurang 3									
		digit -= 3;
	}
	
	/*	mengembalikan nilai dari bilangan yang sudah
		diformat  ke rupiah kepada pemanggil dan menambahkan
		",00" pada nilai tersebut	*/	
	return "Rp " + rp + ",00";														
}

int main(){
	system("color 0a");
	string jwb;
	do {
		system("CLS");
		long long unsigned cicil=0,bunga,sisa=0,utang_awal=0,bulan = 0;
		long long unsigned t_cicil=0,t_bunga = 0; 
		
		header();
		
		while(true){
			utang_awal = 0;
			cout<<"\n Pinjaman Modal Nasabah : "; cin>>utang_awal;
						
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(utang_awal >=1000000 && utang_awal<=1000000000 ){
				system("cls");
				header();
				cout<<"\n Pinjaman Modal Nasabah : "<<format_rupiah(utang_awal);
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n Batas Pinjaman Bernilai Sebesar Rp 1.000.000,00 sampai dengan\n";	
				cout<<" Rp 1.000.000.000,00 dan Hanya Berupa Angka.\n";			
			}
		}
		cout<<endl<<endl;
		
		
		if(bulan==0){
			sisa = utang_awal;
		}
		
		cout<<setiosflags(ios::left);
		cout<<" "<<setw(7)<<"Bulan"<<setw(20)<<"Saldo/Sisa Hutang"<<setw(18)<<"Cicilan 10%"<<setw(16)<<"Bunga 1,5%"<<setw(18)<<"Cicilan Perbulan\n";
		cout<<"==============================================================================\n\n";
		while(sisa>=1000000){
			cicil  = sisa / 100 * 10;	
			bunga  = sisa / 100 * 1.5;	
					
			bulan++;		
			
			cout<<" "<<setw(7)<<bulan<<setw(20)<<format_rupiah(sisa)<<setw(18)<<format_rupiah(cicil)<<setw(16)<<format_rupiah(bunga);
			
			sisa  	-= cicil;
			cicil 	+= bunga;	
			t_cicil += cicil;
			t_bunga += bunga;
			
			cout<<setw(18)<<format_rupiah(cicil);
			
		}
		
		if(sisa!=0){
			cicil  = sisa;
			bunga  = sisa / 100 * 1.5;
			
			bulan++;		
						
			cout<<" "<<setw(7)<<bulan<<setw(20)<<format_rupiah(sisa)<<setw(18)<<format_rupiah(cicil)<<setw(16)<<format_rupiah(bunga);
			
			sisa  -= cicil;	
			cicil += bunga;
			t_cicil += cicil;
			t_bunga += bunga;	
				
			cout<<setw(18)<<format_rupiah(cicil);
		}
		cout<<"\n ------------------------------------------------------------------------------\n\n\n";
		
		cout<<resetiosflags(ios::left);
		cout<<" Total Bunga     : "<<format_rupiah(t_bunga)<<endl;
		cout<<" Total Cicilan   : "<<format_rupiah(t_cicil)<<endl;
		cout<<" Diangsur Selama : "<<bulan<<" Bulan";
		
		
		cout<<"\n ------------------------------------------------------------------------------\n\n";	
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();
		
	 
	}
	while(jwb=="y" || jwb=="Y");
	
	return 0;		
}
