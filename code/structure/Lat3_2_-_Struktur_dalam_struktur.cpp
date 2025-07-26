#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(56.5)<<"Lat3_2 - Struktur dalam Struktur\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//deklarasi tipe data struktur
struct Tinggal { 
   char Jaln [40] ; 
   char Kota [15] ; 
   char Pos [5] ; 
}; 
struct Tgl_Lahir { 
   int Tanggal ; 
   int Bulan ; 
   int Tahun ; 
}; 
//deklarasi tipe data stuktur utama
struct Mahasiswa { 
   char Nim [12]; 
   char Nama [25]; 
   Tinggal Alamat; 
   Tgl_Lahir Lahir; 
};


int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 
///////////////////////////////////////////////////////////////////////////////////////////////	
		//deklarasai variabel struktur
		Mahasiswa Mhs ; 
		
		//input data mahasiswa ke struktur
		cout<<" # Input Data Mahasiswa\n";
		cout<<"\n   NIM           : "; cin.getline (Mhs.Nim, 13 ) ; 
				
		cout<<"   Nama          : "; cin.getline (Mhs.Nama, 25 ) ; 
		
		cout<<"   Alamat        : \n" ; 
		cout<<"\t   Jalan    : ";cin.getline ( Mhs.Alamat.Jaln, 40 ) ; 
		cout<<"\t   Kota     : "; cin.getline ( Mhs.Alamat.Kota, 15 ) ; 
		cout<<"\t   Kode pos : "; cin.getline ( Mhs.Alamat.Pos, 6 ) ; 
		
		
		cout<<"\n   Tanggal Lahir : \n"; 
		cout<<"\t   Tanggal : "; cin>> Mhs.Lahir.Tanggal ; 
		cout<<"\t   Bulan   : "; cin>>Mhs.Lahir.Bulan ; 
		cout<<"\t   Tahun   : "; cin>>Mhs.Lahir.Tahun ; 
		
		//cetak/output 
		cout<<"\n\n\n # Mencetak Kembali Nilai Anggota\n"; 
		cout<<"\n   NIM           : "<<Mhs.Nim ; 
		cout<<"\n   Nama          : "<<Mhs.Nama ; 
		cout<<"\n   Alamat        : "; 
		cout<<"\n\t  Jalan    : "<<Mhs.Alamat.Jaln; 
		cout<<"\n\t  Kota     : "<<Mhs.Alamat.Kota; 
		cout<<"\n\t  Kode Pos : "<<Mhs.Alamat.Pos; 
		cout<<"\n\n   Tanggal Lahir : "<<Mhs.Lahir.Tanggal<<"-"; 
		cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
		
////////////////////////////////////////////////////////////////////////////////////////////////		
		cout<<endl<<endl; 		 
		cout<<"===========================================================\n\n";		
		// mencetak keterangan
		cout<<" Tekan Y untuk mengulang program.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban ulang/tidak
		jwb = getch();
	
	
	/*  program akan kembali ke label ulang 
       jika diinputkan y atau Y */
	if(jwb=="y" || jwb=="Y") goto ulang;
 	return 0;
}


