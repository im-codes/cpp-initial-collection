#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(52.5)<<"ARRAY - Perpangkatan\n";
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
	
	int pngkat[100];
	int i,r,f;
	
	cout<<"\n Masukan Jumlah Bilangan Perpangkatan : ";cin>>f;
	cout<<endl;
	for(i=0;i<f;i++){
		r=i+1;
		pngkat[i]=r*r;
		cout<<" Pangkat dari "<<r<<" adalah : "<<pngkat[i]<<endl;
		
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

Penggunaan array pada program kali ini berfungsi untuk menyimpan hasil dari pencarian pangkat. pada saat program sudah diinputkan jumlah perpangkatan yang ingin ditempilkan, perintah 
pengulangan FOR akan mencari satu per satu pangkat secara berurutan dari angka 1 sampai dengan angka yang sudah diinputkan berdasarkan rumus perpangkatan. dan hasil dari perhitungan 
tersebut akan disimopn kedalam array secara berurutan yang kemudian akan ditampilkan ke layar.

*/
