#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(47.5)<<"Array 3 Dimensi\n";
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
///////////////////////////////////////////////////////////////////////////////////////////////	
	
	
		//Mendeklarasikan array
 		int nomor[2][3][2]={{{11,12},{3,44},{5,56}},{{76,56},{78,86},{46,87}}};

		//Menampilkan array
		for(int i = 0; i<=1; i++){
			cout<<"\n\n Matriks "<<i+1<<"\n\n   ";
			for(int j = 0; j<=2; j++){
				for(int k = 0; k<=1; k++){
					cout<<nomor[i][j][k]<<"\t";
		   		}
			cout<<"\n   ";
		  	}
		
		}


//////////////////////////////////////////////////////////////////////////////////////////////		
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


