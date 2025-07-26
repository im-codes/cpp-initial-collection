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
void header(){
	cout<<endl;
			cout<<setw(55)<<"Lat5_4 - Fungsi Dengan Pointer\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}
///////////////////////////////////////////////////////////////////////////////////////////////	


//deklarasi fungsi prototif
void Tukar (int *a, int *b); 

//deklarasi prosedur main
void mains(void){
	//deklarasi variabel
	int a=8, b=-5; 
	cout<<" Nilai a dan b sebelum ditukar : "<<a<<" & "<<b; 
	Tukar (&a, &b); 
	cout<<"\n Nilai a dan b setelah ditukar : "<<a<<" & "<<b; 
}


void Tukar (int *x, int*y) 
{ 
   int z; 
   z = *x; 
   *x = *y; 
   *y = z ; 
}

///////////////////////////////////////////////////////////////////////////////////////////////	

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


