#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(54.5)<<"Lat2_3 - Array Nilai Terbesar\n";
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
		
		//deklarasi variabel
		int Nilai [20]; 
		int i, N, Terbesar; 
		
		//input bilangan
		cout<<" Masukan Banyaknya Bilangan = "; 
		cin>>N; 
		cout<<endl; 
		
		//Membaca elemen array 
		for(i=0; i<N; i++){ 
			cout<<" Masukan elemen ke-"<<i<<" = "; 
			cin>>Nilai [i]; 
		} 
		
		Terbesar = Nilai [0]; //elemen pertama dibuat sebagai Terbesar 
		
		//mencari nilai terbesar
		for (i=1; i<N; i++){ 
			if (Nilai [i]>Terbesar) 
				Terbesar = Nilai [i]; 
		} 
		
		//Mencetak Bilangan Terbesar 
		cout<<"\n Bilangan Terbesar   = "<< Terbesar;

//////////////////////////////////////////////////////////////////////////////////////////////		
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


