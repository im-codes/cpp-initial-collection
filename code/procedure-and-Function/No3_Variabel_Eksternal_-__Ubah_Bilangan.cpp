#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(58.5)<<"Variabel Eksternal -  Ubah Bilangan\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////
//deklarasi varibel eksternal
int BilX;

//deklarasi prototif fungsi prosedur
void ubahBilX();

//fungsi main/utama
void konten_utama(){
	//ubah variabel eksternal
	BilX = 50;
	
	//output
	cout<<" Sebelum memanggil prosedur bilX = "<<BilX;
	
	ubahBilX();
	
	cout<<"\n Setelah memanggil prosedur bilX = "<<BilX;
}

//deskripsi fungsi prosedur
void ubahBilX(){
	//output
	cout<<"\n Dalam Prosedur                  = "<<BilX;

	//ubah variabel eksternal
	BilX = 100;
	
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
