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
			cout<<setw(54.5)<<"Lat3_4 - Array dalam Struktur\n";
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
   char Nim [13]; 
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
		Mahasiswa Mhs[5] ; 
		
		//input 5 data mahasiswa ke struktur
		cout<<" # Input Data Mahasiswa\n";
		int i ; 
		for (i=0; i<3; i++){ 
			cout<<"   + Mahasiswa "<<i+1;
			cout<<"\n\tNIM           : "; cin.getline (Mhs[i].Nim, 13 ) ; 
					
			cout<<"\tNama          : "; cin.getline (Mhs[i].Nama, 25 ) ; 
			
			cout<<"\tAlamat        : \n" ; 
			cout<<"\t\t   Jalan    : ";cin.getline ( Mhs[i].Alamat.Jaln, 40 ) ; 
			cout<<"\t\t   Kota     : "; cin.getline ( Mhs[i].Alamat.Kota, 15 ) ; 
			cout<<"\t\t   Kode pos : "; cin.getline ( Mhs[i].Alamat.Pos, 6 ) ; 
			
			
			cout<<"\n\t   Tanggal Lahir : \n"; 
			cout<<"\t\t   Tanggal : "; cin>> Mhs[i].Lahir.Tanggal ; 
			cout<<"\t\t   Bulan   : "; cin>>Mhs[i].Lahir.Bulan ; 
			cout<<"\t\t   Tahun   : "; cin>>Mhs[i].Lahir.Tahun ; 
			cout<<endl<<endl; 
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		
		//cetak/output stuktur data
		cout<<"\n\n\n # Mencetak Kembali Nilai Anggota\n";
		for (i=0; i<3; i++){
			cout<<"   + Mahasiswa "<<i+1; 
			cout<<"\n\t   NIM           : "<<Mhs[i].Nim ; 
			cout<<"\n\t   Nama          : "<<Mhs[i].Nama ; 
			cout<<"\n\t   Alamat        : "; 
			cout<<"\n\t\t  Jalan    : "<<Mhs[i].Alamat.Jaln; 
			cout<<"\n\t\t  Kota     : "<<Mhs[i].Alamat.Kota; 
			cout<<"\n\t\t  Kode Pos : "<<Mhs[i].Alamat.Pos; 
			cout<<"\n\n\t   Tanggal Lahir : "<<Mhs[i].Lahir.Tanggal<<"-"; 
			cout<<Mhs[i].Lahir.Bulan<<"-"<<Mhs[i].Lahir.Tahun;
			cout<<endl<<endl; 
		}
		
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


