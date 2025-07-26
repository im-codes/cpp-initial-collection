#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

#define Jmlh_struct 10  // jumlah elemen variabel array structure

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(58.5)<<"Tugas Pendahuluan 04 - Array Struktur\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//deklarasi tipe data struktur
struct mahasiswa_str{
	int no_urut;
	char nama[30];
	int usia;
	double nilai;
	
}mahasiswa[Jmlh_struct];//Deklarasi 

int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 
///////////////////////////////////////////////////////////////////////////////////////////////	
	
		char konfirm = 'y'; // konfirmasi input berulang
		int a; // total list input

		// menginput list data karyawan ke stuktur
		for(int ulang=0; (konfirm == 'y' || konfirm == 'Y'); ulang++){
			
			cout<<"\n\n # Nomor Urut                       : "; cin>>mahasiswa[ulang].no_urut;
			cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<  "   Nama Mahasiswa                   : "; cin.getline(mahasiswa[ulang].nama,30);
			cout<<  "   Usia                             : "; cin>>mahasiswa[ulang].usia;
			cout<<  "   Nilai                            : "; cin>>mahasiswa[ulang].nilai;
			
			// MENGHENTIKAN PENGULANGAN JIKA MENCAPAI ATAS STRUKTUR DATA
			if(ulang==Jmlh_struct-1){
				cout<< "\n @ Data Berhasil Disimpan.";
				konfirm = 't';
				
			}
			else{
				cout<< "\n ? Data Berhasil Disimpan, Input Data Lagi[Y/T]";
				konfirm = getch();
			}
			////////////////////////////////////////////		
			
			a = ulang;		
			cout<<"\n\n";
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		}
		
		//MENAMPILKAN DATA YANG SUDAH DIINPUT KE STRUKTUR
		cout<<"\n\n\n"<<setw(35.5)<<"Data Mahasiswa\n";
		//garis atas tabel
		cout<<" ";
		for(int garis=1; garis<=57; garis++){
				cout<<"-";
		}
		cout<<"\n";
		
		//head tabel
		cout.flags(ios::left);
		cout<<" | "<<setw(8)<<"No. Urut"<<setw(30)<<" | Nama"<<setw(7)<<" | Usia"<<setw(8)<<" | Nilai"<<" |\n ";
	
		for(int garis=1; garis<=57; garis++){
				cout<<"-";
		}
		cout<<"\n";
		
		//konten tabel
		for(int i=0;i<=a;i++){
			cout<<" | "<<setw(8)<<mahasiswa[i].no_urut<<" | "<<setw(27)<<mahasiswa[i].nama<<setw(3)<<" | "<<setw(4)<<mahasiswa[i].usia<<setw(3)<<" | "<<setw(5)<<mahasiswa[i].nilai<<" |\n";
		}
		for(int sisa=Jmlh_struct-(a+1);sisa>0;sisa--){
			cout<<" | "<<setw(8)<<" "<<setw(30)<<" | "<<setw(7)<<" | "<<setw(8)<<" | "<<" |\n";
		}
		
		//garis bawah tabel
		cout<<" ";
		for(int garis=1; garis<=57; garis++){
				cout<<"-";
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


