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
	//deklarasi variabel 
	int Nilai [ 20 ]; 
	int i, j, N; 
	int temp, awal, akhir, tengah, Bilangan ; 
	
	//proses penginputan data 
	cout<<" Banyak bilangan : "; 
	cin>>N; 
	for (i=0; i<N; i++){ 
		cout<<" Elemen ke-"<<i<<" = "; 
		cin>>Nilai [ i ] ; 
	} 
	
	cout<<"\n Elemen Sebelumnya diurut = "; 
	for (i=0; i<N; i++ ) 
		cout<<setw ( 3 )<<Nilai[i] ; 
	
	//proses pengurutan data 
	for (i=0; i<N; i++ ){ 
		for (j=i+1; j<N;   j++ ){ 
			if (Nilai [ i ] > Nilai [ j ] ){ 
				temp = Nilai [ i ]; 
				Nilai [ i ] = Nilai [ j ]; 
				Nilai [ j ] = temp; 
			} 
		} 
	} 
	
	cout<<"\n Elemen Setelah diurut     = " ; 
	for ( i=0; i<N; i++ ) 
		cout<<setw ( 3 )<< Nilai [ i ]; 
	
	cout<<"\n Indeks Elemen             = " ; 
	for ( i=0; i<N; i++ ) cout<<setw ( 3 )<<i; 
		cout<<"\n Masukan data yang akan anda cari : " ; 
	cin>>Bilangan; 
	
	
	
	//proses pencarian data 
	awal = 0 ; 
	akhir = N-1; 
	do{ 
		tengah =( akhir + awal ) / 2; 
		if ( Bilangan < Nilai [ tengah ] ) 
			akhir = tengah - 1; 
		else  
			awal = tengah + 1 ; 
	} 
	while (( akhir >= awal) && ( Nilai [ tengah ] != Bilangan )) ; 
	
	if ( Nilai [ tengah ] == Bilangan ){ 
		cout<<"\n Data "<<Bilangan<<" ada dalam array "; 
		cout<<" pada posisi "<<tengah; 
	} 
	else 
		cout<<"\n Data "<<Bilangan<<" tidak ada dalam array\n"; 
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(52)<<"Lat6_3 - Binary Search 2\n";
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


