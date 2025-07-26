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
			cout<<setw(55.5)<<"Tugas Pendahuluan 03 - Struktur\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//deklarasi struktur data
struct Mahasiswa{ 
	long long int Nim; 
	char Nama [25] ; 
	char Alamat[40] ; 
	short Umur ; 
};


int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 
///////////////////////////////////////////////////////////////////////////////////////////////	
	
		//deklarasi variabel struktur data
		Mahasiswa Mhs; 
		
		//input struktur data 
		cout<<" # Input Data Mahasiswa\n\n";
		cout<<"     Nim    : " ;cin>>Mhs.Nim; 
	
		
		cout<<"     Nama   : "; 
		cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cin.getline (Mhs.Nama,25);
		
		cout<<"     Alamat : "; 
		cin.getline (Mhs.Alamat,40);
		
		cout<<"     Umur   : "; 
		cin>>Mhs.Umur ;cin.clear();
		
		//cetak struktur data
		cout<<"\n\n\n # Data Mahasiswa" ;		
		cout<<"\n\n     Nim    : "<< Mhs.Nim; 		
		cout<<"\n     Nama   : "<< Mhs.Nama; 
		cout<<"\n     Alamat : "<< Mhs.Alamat; 		
		cout<<"\n     Umur   : "<< Mhs.Umur;
		
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


