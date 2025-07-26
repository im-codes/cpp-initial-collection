#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(54.5)<<"Variabel Statis - Pencacah\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////

//deklarasi prototif fungsi prosedur
void pencacah();

//fungsi main/utama
void konten_utama(){
	
	//pemanggilan prosedur pencacah dimana setiap setelah pemangngilan ditambah 1
	pencacah();
	pencacah();
	pencacah();
}

//deskripsi fungsi prosedur
void pencacah(){
	//deklarasi varibel statis prosedur pencacah
	static int jumlah=1;
	
	//ourput, variabel jumlah akan ditambah 1 setelah dicetak
	cout<<"\n Prosedur telah dipanggil = "<<jumlah++;
}

///////////////////////////////////////////////////////////
int main(){
	system("COLOR 0A");
	// variable jawaban restart/tutup
	string jwb;
	do{	
		system("CLS");
		header();
		cout<<"\n\n";

		konten_utama();	
	
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
