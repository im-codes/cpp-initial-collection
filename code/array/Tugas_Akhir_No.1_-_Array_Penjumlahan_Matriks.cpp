#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(56.5)<<"Tugas Akhir - Penjumlahan Matriks\n";
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
///////////////////////////////////////////////////////////////////////////////////////////////	
		
		//pendeklarasian
		int x,y,a[3][4],b[3][4];
		
		//input nilai matriks
		cout<<" # Matrix 1"<<endl;
		for (x=0;x<=2;x++){
			for (y=0;y<=3;y++){
				cout<<"   Masukkan Nilai Index ("<<x<<","<<y<<") = ";
				cin>>a[x][y];
			}
		}
		cout<<endl<<" # Matrix 2 "<<endl;
		for (x=0;x<=2;x++){
			for (y=0;y<=3;y++){
				cout<<"   Masukkan Nilai Index 2 ("<<x<<","<<y<<") = ";
				cin>>b[x][y];
			}
		}
		
		//hitung dan cetak matriks hasil
		cout<<endl<<" # Matrix 1 + Matrix 2";
		cout<<"\n\n    ---------------------\n";	
		for(int x=0; x<3; x++){			
			if(x==0){
				cout<<"    | ";
			}
			else{
				cout<<"    | ";
			}
			
			for(int y=0; y<4; y++){
				cout<<a[x][y]+b[x][y]<<"  ";
				
				
				cout<<"| ";
			}
			cout<<endl;
			cout<<"    ---------------------\n";
		}
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


