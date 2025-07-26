#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(49.5)<<"ARRAY - Matriks 3x3\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}


int main(){
	// mengubah warna background dan huruf
	system("COLOR 0A");
	
	// jawaban hitung ulang atau tidak
	string jwb;
	
	/* program akan menghitung ulang selama jawaban yang
	diinputkan y atau Y pada akhir pengulangan 	*/
	do{	
		// untuk mereset layar pada saat hitung ulang
		system("CLS");
		header();
////////////////////////////////////////////////////////////////////////////		
	
		
		int B[3][3];
		cout<<endl;
		for(int i=0; i<3; i++){
			for (int c=0;c<3;c++){
				 cout<<" Masukan Nilai Baris "<<i+1<<" Kolom "<<c+1<<" : ";
				 cin>>B[i][c]; 
			}
			cout<<endl;
		}
		
		cout<<" Matriks :";
		cout<<"\n    ----------------\n";	
		for(int x=0; x<3; x++){
			
			
			if(x==0){
				cout<<"    | ";
			}
			else{
				cout<<"    | ";
			}
			
			for(int y=0; y<3; y++){
				cout<<B[x][y]<<"  ";
				
				
				cout<<"| ";
			}
			cout<<endl;
			cout<<"    ----------------\n";
		}
			
/////////////////////////////////////////////////////////////////////////////
		cout<<endl<<endl; 				
		 
		cout<<"===========================================================\n\n";
		
		// mencetak keterangan
		cout<<" Tekan Y untuk menghitung ulang.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 
	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}

/*

Penggunaan array dua dimensi untuk menyimpan bilangan matriks dan menampilkannya ke layar, pada program ini array akan diinputkan nilai dari bilangan matriks berordo 3x3 yang jumlah 
bilangannya ada 9. program akan diinputkan 9 bilangan dan menyimpan bilangan tersebut ke dalam array 2 dimensi, pada saat data telah tersimpan, program akan menampilkannya ke layar 
berdasarkan data dari array menggunakan perintah pengulangan FOR.

*/
