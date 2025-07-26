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
void mains(void){
	int Nilai [20]; 
	int Posisi [ 20 ]; 
	int i, N, Bilangan, Banyak= 0; 
	bool Ketemu; 
	cout<<" Masukan Banyaknya Bilangan = "; 
	cin>>N; 
	
	
	
	//Membaca elemen Array 
	for(i=0; i<N; i ++){ 
		cout<<" Masukan elemen ke-"<<i<<" = "; 
		cin>>Nilai [ i ]; 
	} 
	
	
	
	//Mencetak Elemen Array 
	cout<<"\n\n Deretan Bilangan ="; 
	for (i=0; i<N; i++) 
		cout<<Nilai [ i ] <<" "; 
	cout<<"\n\n Masukan Bilangan yang akan dicari = "; 
	cin>> Bilangan; 
	
	
	
	//Melakukan Pencarian 
	for (i=0; i<N; i++){ 
		if (Nilai [ i ] ==Bilangan){ 
			Ketemu = true; 
			Posisi [Banyak] = i; 
			Banyak++; 
		} 
	} 
	
	if (Ketemu){ 
		cout<<" Bilangan "<<Bilangan<<" ditemukan Sebanyak "<<Banyak; 
		cout<<"\n Pada posisi ke ="; 
		for(i=0; i<Banyak; i ++) 
		cout<<Posisi [ i ]<<" ";      
	} 
	else{ 
		cout<<" Bilangan "<<Bilangan<<" tidak ditemukan"; 
	} 
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(54)<<"Lat6_2 - Sequential Search 2\n";
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


