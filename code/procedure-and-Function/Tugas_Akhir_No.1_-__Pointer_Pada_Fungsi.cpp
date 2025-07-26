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
struct Barang 
{ 
   char NoBarang [ 15 ] ; 
   char Nama [ 25 ] ; 
   char Merek [ 40 ] ; 
   int Jumlah ; 
}; 
void input (Barang *daftar); 
void output (Barang *daftar); 
void mains ( ) 
{ 

   Barang daftar; 
   cout<<"\n Masukkan Data Barang ke Struktur\n"; 
   input (&daftar); 
   cout<<"\n Data Barang dalam Struktur "; 
   output (&daftar); 
  
}  

void input(Barang *daftar) 
{ 
	cout<<"\n\tNomor Barang : "; 
	cin.getline(daftar->NoBarang, 13) ; 
	cout<<"\tNama         : "; 
	cin.getline(daftar->Nama,25) ; 
	cout<<"\tMerek        : "; 
	cin.getline(daftar->Merek, 40); 
	cout<<"\tJumlah       : "; 
	cin>>daftar->Jumlah; 
} 

void output (Barang *daftar) 
{ 
	cout<<"\n\tNoBarang : "<< daftar->NoBarang; 
	cout<<"\n\tNama   : "<< daftar->Nama; 
	cout<<"\n\tMerek  : "<< daftar->Merek; 
	cout<<"\n\tJumlah : "<< daftar->Jumlah; 
} 

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(56.5)<<"Tugas Akhir - Pointer pada Fungsi\n";
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


