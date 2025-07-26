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
			cout<<setw(59.5)<<"Lat5_3 - Return Fungsi - Nilai Terbesar\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}
///////////////////////////////////////////////////////////////////////////////////////////////	


//deklarasi fungsi prototif
int Maksimum ( int a, int b, int c );

//deklarasi prosedur main
void mains(void){
	//deklarasi variabel
	int a =8, b=12, c=-5; 
	cout<<" Nilai a = "<<a; 
	cout<<"\n Nilai b = "<<b; 
	cout<<"\n Nilai c = "<<c; 
	cout<<"\n Nilai Terbesar :  "<<Maksimum ( a, b, c ) ; 
}

//deklarasi fungsi
int Maksimum ( int x, int y, int z ) 
{ 
   int Besar = x; 
   if ( y > Besar ) 
      Besar = y ; 
   if ( z > Besar ) 
      Besar = z; 
   return (Besar) ; 
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


