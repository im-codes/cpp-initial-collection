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

void MaxMenaik(int Nilai[], int &N){

	int i, j , l ; 
	int temp, U, Imaks; 
	
	//Proses Pengurutan 
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
	
}

void MaxMenurun(int Nilai[], int &N){
	
	int i, j, l; 
	int temp, U, Imaks; 
	
	//Proses pengurutan 
	U=N-1; 
	for(i=0; i<=N-2; i++) 
	{ 
		Imaks = i; 
		for(j=i+1; j<=U; j++) 
		{ 
		if(Nilai[ j ] > Nilai [Imaks]) 
			Imaks = j; 
		} 
		
		temp = Nilai [ i ]; 
		Nilai [ i ] = Nilai [ Imaks ]; 
		Nilai [Imaks] = temp; 
		cout<<endl; 
		
		for(l=0; l<N; l++) 
			cout<<setw(3)<<Nilai [l]; 
	} 
	
}

void MinMenaik(int Nilai[], int &N){

	int i, j, l; 
	int temp, Imin; 
	
	//Proses pengurutan 
	for (i=0;i<=N-2; i++) 
	{ 
		Imin = i; 
		for(j=i+1; j<N; j++) 
		{ 
			if(Nilai [j] < Nilai [Imin]) 
				Imin = j; 
		} 
		
		temp = Nilai [i]; 
		Nilai [i] = Nilai [Imin]; 
		Nilai [Imin] = temp; 
		
		cout<<endl; 
		for(l=0; l<N; l++) 
			cout<<setw(3)<<Nilai [l]; 
	} 
	
}

void MinMenurun(int Nilai[], int &N){
	
	int i, j, l; 
	int temp,U, Imin; 
		
	//Proses Pengurutan 
	U = N - 1; 
	for(i=0; i<=N-2; i++) 
	{ 
		Imin = 0; 
		for (j=1; j<=U; j++) 
		{ 
			if(Nilai [ j ] <Nilai [Imin]) 
				Imin = j; 
		} 
		
		temp = Nilai [ U ]; 
		Nilai [ U ]=  Nilai [ Imin ]; 
		Nilai [ Imin ] = temp; 
		
		cout<<endl; 
		U--;
		 
		for(l=0; l<N; l++) 
			cout<<setw ( 3 )<<Nilai [ l ]; 
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
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(68)<<"Lat8.5 - Menu Lat8_1 - Lat8_2 - Lat8_3 - Lat8_4 - Lat7_1\n";
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
		cout<<"\n 1. Input Bilangan.";
		cout<<"\n 2. Pengurutan Maximum Sort Secara Menaik.";
		cout<<"\n 3. Pengurutan Maximum Sort Secara Menurun.";
		cout<<"\n 4. Pengurutan Minimum Sort Secara Menaik.";
		cout<<"\n 5. Pengurutan Minimum Sort Secara Menurun.";
		cout<<"\n 6. Pengurutan Bubble Sort Secara Menaik.\n";
		
		while(true){				
			pilih = 0;
						
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(pilih<7){
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n DAFTAR MENU PROGRAM :";
				cout<<"\n 1. Input Bilangan.";
				cout<<"\n 2. Pengurutan Maximum Sort Secara Menaik.";
				cout<<"\n 3. Pengurutan Maximum Sort Secara Menurun.";
				cout<<"\n 4. Pengurutan Minimum Sort Secara Menaik.";
				cout<<"\n 5. Pengurutan Minimum Sort Secara Menurun.";
				cout<<"\n 6. Pengurutan Bubble Sort Secara Menaik.\n";
				cout<<"\n Pilihlah Sesuai Dengan Nomor Program";					
			}
		}
		
		cout<<endl<<endl;
		ulang:
			system("cls");					
			header();
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. Input Bilangan.";
			cout<<"\n 2. Pengurutan Maximum Sort Secara Menaik.";
			cout<<"\n 3. Pengurutan Maximum Sort Secara Menurun.";
			cout<<"\n 4. Pengurutan Minimum Sort Secara Menaik.";
			cout<<"\n 5. Pengurutan Minimum Sort Secara Menurun.";
			cout<<"\n 6. Pengurutan Bubble Sort Secara Menaik.\n";
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
			
			if( pilih == 1 ){	
        		cout<<" 1. Input Bilangan.\n\n";
				InputData(Nilai, N);
				cout<<"\n\n Data Berhasil Dimasukkan.";
			}
			else if(pilih == 2){
				cout<<" 2. Pengurutan Maximum Sort Secara Menaik.\n";
            	MaxMenaik(Nilai, N);
            	cout<<"\n\n Data Berhasil Diurutkan.";
			}
			else if(pilih == 3){
				cout<<" 3. Pengurutan Maximum Sort Secara Menurun.\n";
            	MaxMenurun(Nilai, N);
            	cout<<"\n\n Data Berhasil Diurutkan.";
			}
			else if(pilih == 4){
				cout<<" 4. Pengurutan Minimum Sort Secara Menaik.\n";
            	MinMenaik(Nilai, N);
            	cout<<"\n\n Data Berhasil Diurutkan.";
			}
			else if(pilih == 5){
				cout<<" 5. Pengurutan Minimum Sort Secara Menurun.\n";
            	MinMenurun(Nilai, N);
            	cout<<"\n\n Data Berhasil Diurutkan.";
			}
			else{
				cout<<" 6. Pengurutan Bubble Sort Secara Menaik.\n";
            	BubbleSortMenaik(Nilai, N);
            	cout<<"\n\n Data Berhasil Diurutkan.";
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


