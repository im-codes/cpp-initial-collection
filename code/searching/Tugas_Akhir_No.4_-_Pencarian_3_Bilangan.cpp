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
	
	int elemen=25, Nilai [elemen]={34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12}; 
	int Posisi[ 20 ]; 
	int i, N, banyak, kunci[10]; 
	bool Ketemu; 
	//Mencetak Elemen Array 
	cout<<"\n\n Data : \n "; 
	for (i=0; i<elemen; i++) 
		cout<<Nilai[ i ] <<" "; 
	
	
	cout<<"\n\n Masukan Banyaknya Kunci Pencarian : "; 
	cin>>N; 
	
		
	//Membaca kunci pencarian 
	for(i=0; i<N; i ++){ 
		cout<<" Masukan Kunci ke-"<<i<<" = "; 
		cin>>kunci[i]; 
	} 
	cout<<endl<<endl;
	
	//Melakukan Pencarian	
	for(int h=0;h<N;h++){
		
		Ketemu = false; 
		banyak = 0;
		for (i=0; i<elemen; i++){ 
			if (kunci[h]==Nilai[ i ]){ 
				Ketemu = true; 
				Posisi[banyak] = i; 
				banyak++; 
			} 
		} 
		
		if (Ketemu){ 
			cout<<" Bilangan "<<kunci[h]<<" ditemukan Sebanyak "<<banyak; 
			cout<<"\n Pada posisi ke = "; 
			for(i=0; i<banyak; i ++) 
				cout<<Posisi [ i ]<<" ";      
		} 
		else{ 
			cout<<" Bilangan "<<kunci[h]<<" tidak ditemukan"; 
		} 
		
		cout<<endl<<endl;			
	}
	
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(59.5)<<"Tugas Akhir No.4 - Pencarian 3 Bilangan\n";
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


