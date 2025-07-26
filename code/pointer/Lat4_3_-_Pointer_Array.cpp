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
			cout<<setw(51)<<"Lat4_3 - Pointer Array\n";
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
///////////////////////////////////////////////////////////////////////////////////////////////	
	
		int Nilai [ ] = {45, 23, 50, 8, 12, 10, 15} ; 
		int *Ptr_Nilai ; 
		int i; 
		Ptr_Nilai = Nilai ; 
		cout<<"\n Nilai Ptr_Nilai    = "<<Ptr_Nilai; 
		cout<<"\n Alamat array Nilai = "<<Ptr_Nilai; 
		cout<<"\n Nilai yang ada pada alamat "<<Ptr_Nilai<<" adalah = "<<*Ptr_Nilai; 
		cout<<"\n Elemen Array indeks pertama     : "<<Nilai [0]; 
		cout<<"\n\n Elemen Array (dengan Array)   : "; 
		for ( i=0;i<7;i++) 
			cout<<Nilai [i]<<" "; //mencetak elemen array 
			
		cout<<"\n\n Elemen Array (dengan Pointer) : "; 
		for(i=0;i<7;i++) 
			cout<<*( Nilai+i )<<" "; //mencetak elemen array
		
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


