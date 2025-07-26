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

///////////////////////////////////////////////////////////////////////////////////////////////	

//deklarasi fungsi prototif
struct Mahasiswa 
{ 
   char Nim [ 15 ] ; 
   char Nama [ 25 ] ; 
   char Alamat [ 40 ] ; 
   short Umur ; 
}; 
void Baca (Mahasiswa *Mhs); 
void Cetak (Mahasiswa *Mhs); 
void mains ( ) 
{ 

   Mahasiswa Mhs; 
   cout<<"\n Membaca Nilai Anggota Struktur \n"; 
   Baca (&Mhs); 
   cout<<"\n Mencetak Nilai Anggota Struktur "; 
   Cetak (&Mhs); 
  
}  

void Baca(Mahasiswa *Mhs) 
{ 
	cout<<"\n\tNIM    : "; 
	cin.getline(Mhs->Nim, 13) ; 
	cout<<"\tNama   : "; 
	cin.getline(Mhs->Nama,25) ; 
	cout<<"\tAlamat : "; 
	cin.getline(Mhs->Alamat, 40); 
	cout<<"\tUmur   : "; 
	cin>>Mhs->Umur; 
} 

void Cetak (Mahasiswa *Mhs) 
{ 
	cout<<"\n\tNim    : "<< Mhs->Nim; 
	cout<<"\n\tNama   : "<< Mhs->Nama; 
	cout<<"\n\tAlamat : "<< Mhs->Alamat; 
	cout<<"\n\tUmur   : "<< Mhs->Umur; 
} 

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(64.5)<<"Lat6_6 - Pointer Structure sebagai Argumen Fungsi\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 


		mains();			
			
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


