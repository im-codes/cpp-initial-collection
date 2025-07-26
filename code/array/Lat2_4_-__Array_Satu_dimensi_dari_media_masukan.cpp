#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(54.5)<<"Lat2_4 - Array Media Masukan\n";
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
	
		//pendekarasian dan inisialisasi variabel
		int Nilai [ 20 ]; 
		int Posisi [ 20 ]; 
		int i, N, Bilangan, Banyak=0; 
		bool ketemu; 
		
		//membaca banyaknya deret bilangan
		cout<<" Masukan Banyaknya Bilangan = "; 
		cin>>N; 
		cout<<"\n";
		
		//Membaca elemen Array 
		for (i=0; i<N ;i++){ 
			cout<<" Masukan elemen ke-"<<i<<" = "; 
			cin>>Nilai [i]; 
		} 				
		
		//mencetak Elemen Array 
		cout<<"\n\n Deretan Bilangan    = "; 
		for (i=0; i<N; i++) 
			cout<<Nilai [i]<<" "; 
		
		
		//membaca bilangan
		cout<<"\n\n Masukan Bilangan yang akan dicabut = "; 
		cin>>Bilangan ; 
		
		
		
		//melakukan pencarian 
		for(i=0; i<N; i++){ 
			if(Nilai [i]==Bilangan){ 
				ketemu = true; 
				Posisi [Banyak]=i; 
				Banyak++; 
			} 
		} 
		if(ketemu){ 
			cout<< " Bilangan "<< Bilangan<<" ditemukan sebanyak "<< Banyak; 
			cout<<"\n Pada posisi ke = "; 
			for(i=0; i<Banyak ; i++) 
				cout<<Posisi [i]<<" "; 
		} 
		else 
			cout<<" Bilangan "<<Bilangan<<" tidak ditemukan";
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


