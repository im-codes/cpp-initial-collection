#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks

using namespace std; 

// HEADER
void header(){
	cout<<endl;
	
	//Judul
	cout<<setw(51)<<"Luas Segitiga Sama Sisi\n";
	
	// Nama
	cout<<setw(52)<<"By Tech Gate ID  - MindsX\n";
	
	// Garis Atas			
	for(int bates_atas=1; bates_atas<=80; bates_atas++){
		cout<<"=";
	}
}

int main(){ 
	// Mengubah Warna Background dan Huruf
	system("color 0a");
	
	// Deklarasi jwb
	string jwb;
	
	/* melakukan perintah 
	selama jwb yang diinput user berisi y/Y */	
	do{ 
		// mereset layar
		system("cls");
		
		// menampilkan header
		header();
		
		// deklarasi nilai-nilai
		int a=0;
		int t=0;
		float L=0;
		
		// input tinggi dan panjang
		cout<<"\n Masukkan Tinggi Segitiga : ";
		cin>>t;
		
		cout<<"\n Masukkan Panjang Segitiga : ";
		cin>>a;
		
		// hitung keliling lingkaran
		L = 0.5 * a * t;
		
		// menampilkan Luas Segitiga
		cout<<"\n\n Luas Segitiga adalah    : "<<L<<endl;
		
		// membuat garis bawah
		for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
			cout<<"-";
		}	
		
		// Keterangan Reset
		cout<<" <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		
		// Input untuk reset/tidak
		jwb = getch();
		
		/* program akat direset apabila menjawab
		y atau Y */ 
	} while(jwb == "y" || jwb == "Y");
	
	return 0;
	
}

