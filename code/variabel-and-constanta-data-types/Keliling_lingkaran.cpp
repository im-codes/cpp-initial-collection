#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks

using namespace std; 

// HEADER
void header(){
	cout<<endl;
	
	//Judul
	cout<<setw(49)<<"KELILING LINGKARAN\n";
	
	// Nama
	cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
	
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
		const float phi=3.14;
		int r=0;
		float K=0;
		
		// input jari-jari lingkaran
		cout<<"\n Masukkan Jari-Jari Lingkaran : ";
		cin>>r;
		
		// hitung keliling lingkaran
		K = 2 * phi * r;
		
		// menampilkan keliling lingkaran
		cout<<"\n\n Keliling Lingkaran adalah    : "<<K<<endl;
		
		// membuat garis bawah
		for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
			cout<<"-";
		}	
		
		// Keterangan Reset
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		
		// Input untuk reset/tidak
		jwb = getch();
		
		/* program akat direset apabila menjawab
		y atau Y */ 
	} while(jwb == "y" || jwb == "Y");
	
	return 0;
	
}

