#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(53.5)<<"Fungsi Rekursif - Fibonacci\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}


int fibo(int I){
	if (I == 0 || I == 1){
		return I;
	}
	else{	// Pemanggilan fungsi diri sendiri
		return ( fibo( I - 1 ) + fibo(I - 2) );
	}

}

	
int main(){
	system("COLOR 0A");
	string jwb;
	do{	
		system("CLS");
		header();
///////////////////////////////////////////////////////////////////////////////////////////////	


	int R=0, F=0;
	cout<<"\n Silakan Masukan Batas Deret Bilangan : ";cin>>R;
	cout<<"\n Deret Fibonacci                      : \n\n ";
	for(F = 1; F <= R; F++){
		cout<<fibo(F-1)<<" ";
	}	
	
	
//////////////////////////////////////////////////////////////////////////////////////////////		
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

Bilangan fibonacci adalah deret angka sederhana yang susunan angkanya merupakan penjumlahan dari dua angka sebelumnya. Pada gambar script dibawah, baris ke 25 dari script merupakan 
pemanggilan fungsi rekursif yang berfungsi untuk menambahkan nilai dengan deret fibonacci sebelumnya.

*/
