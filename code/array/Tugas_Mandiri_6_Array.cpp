#include <iostream>		// cout, cin, dan endl
#include <conio.h>		// input tanpa tampilan
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks

using namespace std;

// Header
void header(){
	cout<<endl;
			cout<<setw(56)<<"MENGINPUT DAN MENAMPILKAN ARRAY\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("color 0a");
	// panggil header
	header();
	
	// deklarasikan jumlah elemen pada array yang akan dibuat
	int unsigned jumlah_elemen;
	
	// input jumlah elemen
	cout<<"\n Jumlah Elemen Pada Array : "; cin>>jumlah_elemen;
	// membuat array dengan jumlah jumlah elemen sesuai input
	int arrays[jumlah_elemen-1];
	cout<<endl;
	
	// menginputkan nilai ke elemen array
	for(int h=0; h<=jumlah_elemen-1; h++){	
	
		cout<<" Masukan Nilai Elemen "<<(h+1);
		
		// menyesuaikan spasi pada ":" agar rata
		if(h+1>=10){
			cout<<"  : ";
		}
		else {
			cout<<"   : ";
		}
		// input elemen
		cin>>arrays[h];
		
		// untuk menghapus enter atau "\n" pada inputan 
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	cout<<endl<<endl;
	
	// Menampilkan nilai2 yang sudah diinputkan ke array
	cout<<" Nilai-Nilai Pada Array   : ";
	for(int y = 0; y<jumlah_elemen; y++){
		if(y==jumlah_elemen-1){
			// menambahkam tanda titik pada nilai paling akhir
			cout<<arrays[y]<<".";
		}
		else{
			// menambahkan tanda koma pada nilai awal dan tengah
			cout<<arrays[y]<<", ";
		}
	}
	
	// menunda program tertutup
	getch();
	
	return 0;
}
