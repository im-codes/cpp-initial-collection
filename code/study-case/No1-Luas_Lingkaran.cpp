#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(53)<<"Algoritma Luas Lingkaran\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	do{	
		system("CLS");
		header();
		cout<<"\n\n";
///////////////////////////////////////////////////////////////////////////////////////////////	
		
		// deklarasi nilai-nilai
		int R=0;
		float L=0;
		const float PI = 3.14;
		
		// input tinggi dan panjang
		cout<<" Masukkan Jari-Jari Lingkaran  : ";
		cin>>R;
		
		// hitung l
		L = PI * R * R;
		
		// menampilkan Luas dan k
		cout<<"\n Luas Lingkaran adalah         = "<<L;
	
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
