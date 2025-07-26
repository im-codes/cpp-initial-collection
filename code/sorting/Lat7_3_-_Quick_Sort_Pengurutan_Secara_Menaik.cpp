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

void Cetak (int data [], int n)  
{ 
	int i ;  
	for ( i=0 ; i<n ; i++) 
		cout<<setw ( 3 )<<data [ i ] ;  
	cout<<"\n" ; 
} 

int Partisi ( int data [], int p, int r ) 
{ 
	int x, i, j, temp; 
	x = data [ p ]; 
	i=p; 
	j=r; 
	while (1) 
	{ 
		while( data[j]>x) 
			j--; 
		while( data[i]<x) 
			i++;
		if(i<j) 
		{ 
			temp = data [ i ]; 
			data [ i ] = data [ j ]; 
			data [ j ] = temp; 
		} 
		else 
			return j; 
	} 
} 

void Quick_Sort (int data [], int p, int r ) 
{ 
	int q ; 
	if (p<r) 
	{ 
		q=Partisi (data, p,r+1) ; 
		Quick_Sort (data, p, q ) ; 
		Quick_Sort (data, q+1, r) ; 
	} 
} 

void mains(void){
	//deklarasi variabel
	int Nilai [ 20 ]; 
	int i, N ; 
	
	//input banyak bilangan
	cout<<" Masukan Banyak Bilangan : "; 
	cin>>N; 
	
	cout<<endl; 
	//input nilai bilangan
	for(i=0;  i<N;  i++ ) 
	{ 
		cout<<" Elemen ke-"<<i<<"  :  "; 
		cin>>Nilai [ i ] ; 
	} 
	cout<<endl; 
	cout<<"\n Data Sebelum di urut  :  "; 
	Cetak ( Nilai, N ) ; 
	
	cout<<endl; 
	Quick_Sort (Nilai, 0, N-1 ); 
	cout<<"\n Data Setelah di urut  :  "; 
	Cetak (Nilai, N ) ;
	
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(62)<<"Lat7_3 - Quick Sort Pengurutan Secara Menaik\n";
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


