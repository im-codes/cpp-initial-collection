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
   int i, k, N, l; 
   int temp, jarak, s; 
   cout<<" Masukan Banyak Bilangan : "; 
   cin>>N; 
   for (i=0; i<N; i++) 
   { 
      cout<<" Elemen ke-"<<i<<" : "; 
      cin>>Nilai [ i ] ; 
   } 
   //Proses Cetak Sebelum diurutkan 
   cout<<"\n\n Data sebelum diurut : "; 
   for (i=0; i<N; i++) 
      cout<<setw (4)<<Nilai [ i ]; 
   //Proses pengurutan 
   jarak = N/2; 
   
   cout<<endl;
   cout<<"\n Jarak = "<<jarak;
   while (jarak >= 1) 
   { 
      do 
      { 
         s=0; 
         for (i =0; i<=(N-jarak)-1; i++) 
         { 
            k=i+ jarak; 
            if(Nilai [i] < Nilai [k]) 
            { 
               temp = Nilai [i]; 
               Nilai [i] = Nilai [k]; 
               Nilai [k] = temp; 
               s=1; 
               for(l=0; l<N; l++) 
                  cout<<setw (4)<<Nilai [l]; 
               cout<<"\n\t"; 
            getch(); 
            } 
         } 
      } 
      while(s!=0); 
      jarak /=2; 
      cout<<"\n Jarak = "<<jarak; 
   } 
   cout<<"\n Data Setelah diurut : "; 
   for(i=0; i<N ;i++) 
      cout<<setw (4)<<Nilai [i];
            
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(66.5)<<"Lat9_2 -  Metode Shell Sort Pengurutan Secara Menurun\n";
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


