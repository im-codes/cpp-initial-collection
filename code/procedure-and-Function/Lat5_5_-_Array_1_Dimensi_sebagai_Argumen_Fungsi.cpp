#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

const int N=100 ; 

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////	

//deklarasi fungsi prototif
void Baca (int Nilai [ ], int &M) ; 
void Cetak (int Nilai [ N ], int &M); 
void Jumlah (int Nilai [ N ], int &M, int &Jlh, float &Rata) ; 

//deklarasi prosedur main
void mains(void){
	int M; 
	int Nilai [N]; 
	int Jlh =0; 
	float Rata; 
	
	cout<<"\n Banyak Elemen      : "; cin>>M;
	
	cout<<endl; 
	Baca(Nilai, M); //memanggil fungsi Baca 
	
	cout<<"\n Elemen Elemen      :"; 
	Cetak(Nilai,M); //memanggil fungsi cetak 
	
	Jumlah (Nilai, M, Jlh, Rata) ; //memanggil fungsi Jumlah 
	cout<<"\n Jumlah Bilangan    : "<<Jlh; 
	cout<<"\n Rata-Rata Bilangan : "<<Rata; 
  
} 

 

void Cetak (int Nilai [], int &M) 
{ 
   int i; 
   for(i=0;i<M;i++) 
   { 
       cout<<setw (3) <<Nilai [ i ] ; 
   } 
   	
} 

 

void Baca (int Nilai [], int & M) 
{ 
   int i ; 
   for (i=0;i<M;i++) 
   { 
      cout<<"\tElemen ke-"<<i<<" : "; 
      cin>>Nilai[i]; 
   } 
} 

 

void Jumlah (int Nilai [], int &M, int &Jlh, float &Rata) 
{ 
   int i; 
   for (i=0;i<M;i++) 
      Jlh+=Nilai [i] ; 
   Rata = (float) Jlh /M; 
} 

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(63.5)<<"Lat5_5 - Array 1 Dimensi sebagai Argumen Fungsi\n";
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


