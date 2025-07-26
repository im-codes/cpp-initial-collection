#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	
#include <sstream> 	// Untuk membuat fungsi format rupiah

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(52)<<"IF Else - Profile Kursus\n";
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
	
	/* mengembalikan nilai dari bilangan yang sudah
	diformat  ke rupiah kepada pemanggil dan menambahkan
	",00" pada nilai tersebut */	
	return rp + ",00";														
}

int main(){
	system("color 0a");
	string jwb;
	do {
		system("CLS");
		header();
//////////////////////////////////////////////////////////////////////////////		
	
	long int kode=0, jumlah=0, sks=0, semester=0;
	char nama[100];
	cout<<"\n\n Silahkan Masukan Kode   [1 -3]    : ";cin>>kode;
	cout<<"\n Jumlah SKS Per-Semester [20 - 25] : ";cin>>sks;
	
	if(kode==1){
		
		strcpy(nama, "Teknik Informatika");
		jumlah = 30000*sks;
		semester = jumlah*2;
		
	}
	else if(kode==2){
		strcpy(nama, "Akutansi");
		jumlah = 20000*sks;
		semester = jumlah*2;
	}
	else if(kode==3){
		strcpy(nama, "Manajemen");
		jumlah = 15000*sks;
		semester = jumlah*2;
	}
	else{
		cout<<"\n Masukkan Kode Hanya berupa Digit [1 - 3].";
		strcpy(nama,"Tidak Ada");
		
	}
	
	cout<<"\n\n----------------------------------------";
	cout<<"\n\n Nama Kursus                 : "<<nama;
	cout<<"\n Pembayaran dalam 1 semester : Rp"<<format_rupiah(jumlah);
	cout<<"\n Pembayaran dalam 1 Tahun    : Rp"<<format_rupiah(semester);
	
//////////////////////////////////////////////////////////////////////////////			
		cout<<"\n\n\n";
		for(int bates_atas=1; bates_atas<=78; bates_atas++){
				cout<<"-";
			}	
		cout<<"\n\n";
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();	
	 
	}
	while(jwb=="y" || jwb=="Y");
	
	return 0;
}


/*

Program diatas menggunakan Operator Aritmatika Pointer untuk menjumlahkan nilai dari variabel awal.

*/
