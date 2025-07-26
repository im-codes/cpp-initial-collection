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
			cout<<setw(51)<<"Lat5_4 - Pointer While\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}
///////////////////////////////////////////////////////////////////////////////////////////////	


//prosedur mains/utamaa
void mains(void)
{	//deklarasi variabel array satu dimensi
	char String [80], *s;
	int x = 0;
	s = String; 
	
	//input karakter
	cout<<"\n\n Silahkan Masukkan kata    : ";
	cin.getline(String,80); //getline = mengikutsertakan spasi ke inputan
	
	while(*s!='\0'){
		//x meningkat 1
		x++;
		
		//alamat yang ditunjuk pointer bergeser
		s++;
	}
	
	
	cout<<endl;
	//output setelah proses pada fungsi penghitung karakter H
	cout<<" Jumlah Karakternya Adalah : "<<x<<" Karakter "<<endl;

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
		
////////////////////////////////////////////////////////////////////////////////////////////////		
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


