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

void Cetak(int data [], int N)  
{ 
	int i ;  
	for ( i=0 ; i<N ; i++) 
		cout<<setw ( 3 )<<data [ i ] ;  

} 

void InputData(int data[], int &N){
	int i;
		
	//input banyak bilangan
	cout<<" Masukan Banyak Bilangan : "; 
	cin>>N; 
	
	cout<<endl; 
	//input nilai bilangan
	for(i=0;  i<N;  i++ ) 
	{ 
		cout<<" Elemen ke-"<<i<<"  :  "; 
		cin>>data[ i ] ; 
	} 
	
}

void BubbleSortMenaik(int data[], int N){
	
	int i, j, k; 
	int temp ; 
	bool tukar ; 
	
	//Proses Pengurutan 
	i=0; 
	tukar = true; 
	while ((i<=N-2) && (tukar)) 
	{ 
		tukar=false; 
		for (j=N-1;  j>=i+1;  j--) 
		{ 
			if( data [ j ]  < data [ j-1 ] ) 
			{ 
		
			temp = data [ j ]; 
			data [ j ] = data [ j-1]; 
			data [ j-1 ] = temp; 
			tukar = true; 
			
			cout<<"\n Untuk j = "<<j<<" : "; 
			
			for (k=0;  k<N;  k++) 
				cout<<setw(3)<<data [ k ] ; 
			} 
		} 
		i++ ; 
	} 
	
	
}

void BubbleSortMenurun(int data[], int N){
	
	int i, j, k; 
	int temp ; 
	bool tukar ; 
	
	//Proses Pengurutan 
	i=0; 
	tukar = true; 
	while ((i<=N-2) && (tukar)) 
	{ 
		tukar=false; 
		for (j=N-1;  j>=i+1;  j--) 
		{ 
			if( data [ j ]  > data [ j-1 ] ) 
			{ 
				temp = data [ j ]; 
				data [ j ] = data [ j-1]; 
				data [ j-1 ] = temp; 
				tukar = true; 
				cout<<endl; 
				for(k=0; k<N;  k++ ) 
					cout<<setw (3)<<data [ k ] ; 
			} 
		} 
		i++ ; 
	} 
	
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
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(59)<<"Lat7.4 - Menu Lat7_1 - Lat7_2 - Lat7_3\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	menu:
		// pendeklarasian variabel
		int Nilai [ 20 ]; 
		int N;
		int pilih; 	
						
		system("CLS");
		header();
		cout<<endl<<endl; 
		
		cout<<"\n DAFTAR MENU PROGRAM :";
		cout<<"\n 1. Input Bilangan";
		cout<<"\n 2. Pengurutan Bubble Sort Secara Menaik";
		cout<<"\n 3. Pengurutan Bubble Sort Secara Menurun ";
		cout<<"\n 4. Pengurutan Quick Sort Secara Menaik\n";
		
		while(true){				
			pilih = 0;
						
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(pilih<5){
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n DAFTAR MENU PROGRAM :";
				cout<<"\n 1. Input Bilangan";
				cout<<"\n 2. Pengurutan Bubble Sort Secara Menaik";
				cout<<"\n 3. Pengurutan Bubble Sort Secara Menurun ";
				cout<<"\n 4. Pengurutan Quick Sort Secara Menaik\n";
				cout<<"\n Pilihlah Sesuai Dengan Nomor Program";					
			}
		}
		
		cout<<endl<<endl;
		ulang:
			system("cls");					
			header();
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. Input Bilangan";
			cout<<"\n 2. Pengurutan Bubble Sort Secara Menaik";
			cout<<"\n 3. Pengurutan Bubble Sort Secara Menurun ";
			cout<<"\n 4. Pengurutan Quick Sort Secara Menaik\n";
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "<<pilih;
			// membuat garis atas
			cout<<endl;
			for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
				cout<<"-";
			}	
			cout<<endl<<endl;
			
			system("cls");					
			header();
			cout<<endl<<endl;
			
			switch ( pilih ) {	
	        	case 1:
	        		cout<<" 1. Input Bilangan.\n\n";
					InputData(Nilai, N);
					cout<<"\n\n Data Berhasil Dimasukkan.";
	         		break ;
	 
	         	case 2:
	         		cout<<" 2. Pengurutan Bubble Sort Secara Menaik.\n";
	            	BubbleSortMenaik(Nilai, N);
	            	cout<<"\n\n Data Berhasil Diurutkan.";
	         		break ;
	 
	         	case 3:
	         		cout<<" 3. Pengurutan Bubble Sort Secara Menurun.\n";
	            	BubbleSortMenurun(Nilai, N);
	            	cout<<"\n\n Data Berhasil Diurutkan.";
	        		break ;
	        	
	        	case 4:
	        		cout<<" 4. Pengurutan Quick Sort Secara Menaik\n";
	            	Quick_Sort(Nilai, 0, N-1 );
	            	cout<<"\n\n Data Berhasil Diurutkan.";
	        		break ;
        	}
        	cout<<endl;
        	
        	cout<<"\n\n Data :  ";Cetak(Nilai, N);
        	
			cout<<endl;	        	
        	
        	// membuat garis bawah
			for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
				cout<<"-";
			}		
			cout<<" Tekan <R> Jika Ingin Menghitung Ulang.\n";
			cout<<" Tekan <M> Jika Ingin Memilih Program.\n";
			cout<<" Tekan Apa Saja Untuk Menutup Program.";
		// input jawaban ulang/tidak
		jwb = getch();
	
	
	/*  program akan kembali ke label ulang 
       jika diinputkan y atau Y */
	if(jwb=="m" || jwb=="M") 
		goto menu;
	else if(jwb=="r" || jwb=="R")
		goto ulang;
 	return 0;
}


