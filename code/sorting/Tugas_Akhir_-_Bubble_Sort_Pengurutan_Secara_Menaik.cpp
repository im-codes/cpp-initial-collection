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
	
	// pendeklarasian variabel
	int i, j, k, temp, N=15; 
	int Nilai [N]={34, 12, 56, 78, 6, 43, 32, 20, 90, 50, 55, 75, 85, 95, 25}; 
	bool tukar ; 
	
	//Proses Cetak Sebelum diurutkan 
	cout<<"\n Data sebelum diurutkan :"; 
	for (i=0;  i<N ; i++) 
		cout<<setw ( 3 )<<Nilai [ i ]; 
		
	cout<<endl;
		
	//Proses Pengurutan 
	i=0; 
	tukar = true; 
	while ((i<=N-2) && (tukar)) 
	{ 
		tukar=false; 
		for (j=N-1;  j>=i+1;  j--) 
		{ 
			if( Nilai [ j ]  < Nilai [ j-1 ] ) 
			{ 
		
			temp = Nilai [ j ]; 
			Nilai [ j ] = Nilai [ j-1]; 
			Nilai [ j-1 ] = temp; 
			tukar = true; 
			
			cout<<"\n Untuk j = "<<j<<"\t : "; 
			
			for (k=0;  k<N;  k++) 
				cout<<setw(3)<<Nilai [ k ] ; 
			} 
		} 
		i++ ; 
	} 
	
	//Proses Cetak setelah diurutkan 
	cout<<"\n\n Data setelah di urut :  "; 
	for (i=0;  i<N; i++ ) 
		cout<<setw ( 3 )<<Nilai [ i ] ; 
	
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(65)<<"Tugas Akhir - Bubble Sort Pengurutan Secara Menaik\n";
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


