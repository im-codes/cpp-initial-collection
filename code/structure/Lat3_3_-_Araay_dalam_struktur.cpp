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
			cout<<setw(51.5)<<"Lat3_3 - Array Struktur\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//deklarasi tipe data struktur
struct Mahasiswa 
{ 
   char Nim [13] ; 
   char Nama [25] ; 
   char Alamat [40] ; 
   int Umur ; 
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
		Mahasiswa Mhs [5] ; 
		
		//input array struktur data
		cout<<" # Input Data Mahasiswa\n";
		int i ; 
		for (i =0; i<5; i++ ){ 
			cout<<"   + Mahasiswa "<<i+1;
			cout<<"\n\tNim    : "; 
			cin>>Mhs[i].Nim ; 
			cout<<"\tNama   : "; 
			cin>>Mhs[i].Nama ; 
			cout<<"\tAlamat : "; 
			cin>>Mhs[i].Alamat ; 
			cout<<"\tUmur   : "; 
			cin>>Mhs[i].Umur ;
			cout<<endl<<endl; 
		} 
		
		//cetak/output struktur data 
		cout<<" # Data Mahasiswa\n";
		for( i =0; i<5; i++ ){ 
			cout<<"   + Mahasiswa "<<i+1;
			cout<<"\n\tNim    : "<<Mhs [i].Nim; 
			cout<<"\n\tNama   : "<<Mhs [i].Nama; 
			cout<<"\n\tAlamat : "<<Mhs [i].Alamat; 
			cout<<"\n\tUmur   : "<<Mhs [i].Umur;
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


