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
	int Nilai [ 20 ]; 
	int i, j , N, l ; 
	int temp, U, Imaks; 
	
	cout<<" Masukan Banyaknya Bilangan :"; 
	cin>>N; 
	for(i=0; i<N; i++) 
	{ 
		cout<<"\tElemen ke-"<<i<<" : "; 
		cin>>Nilai [ i ]; 
	} 
	
	//Proses Cetak sebelum diurutkan 
	cout<<"\n\n Data sebelum diurut :"; 
	for(i=0; i<N; i++) 
		cout<<setw ( 3 )<<Nilai [ i ]; 
		
	//Peroses Pengurutan 
	U=N-1 ; 
	for (i=0 ; i<=N-2; i++) 
	{ 
		Imaks =0; 
		for(j=1; j<=U; j++) 
		{ 
			if( Nilai [ j ] > Nilai [ Imaks] ) 
				Imaks = j; 
		} 
		
		temp =Nilai [ U ]; 
		Nilai [ U ] = Nilai [ Imaks]; 
		Nilai [ Imaks ]= temp; 
		
		U--; 
		cout<<endl; 
		
		for(l=0; l<N; l++) 
			cout<<setw ( 3 )<<Nilai [ l ]; 
	} 
	
	cout<<"\n\n Data Setelah di urut : "; 
	for(i=0; i<N; i++) 
		cout<<setw (3 )<<Nilai [ i ] ; 
	
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(63)<<"Lat8_1 - Maximum Sort Pengurutan Secara Menaik\n";
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


