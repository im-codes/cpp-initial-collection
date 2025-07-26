#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(47)<<"Lat2_1 - Array\n";
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
///////////////////////////////////////////////////////////////////////////////////////////////	
	
		//Pendeklarasian Variabel
		int Nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3} ; 
		int i, Jumlah = 0; 
		float Rata_Rata; 
 
		//Menghitung jumlah 
		for (i=0 ; i <10 ; i++) 
			Jumlah += Nilai [ i ]; 
		Rata_Rata =( float ) Jumlah / 10; 
		
		//Mencetak Elemen Array 
		cout<<"\n\n Deretan Bilangan   = "; 
		for ( i=0;i<10;i++) 
			cout<<Nilai[i]<<" " ; 		
		
		//Mencetak Harga Jumlah 
		cout<<"\n Jumlah Bilangan    = "<<Jumlah; 
		cout<<"\n Rata-Rata Bilangan = "<<Rata_Rata;


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


