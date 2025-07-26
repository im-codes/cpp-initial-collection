#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(47.5)<<"String - STRCAT\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}


int main(){
	system("color 0a");
	string jwb;
	do {
		system("CLS");
		header();
//////////////////////////////////////////////////////////////////////////////		
		
		char word_1[10],word_2[10],word_3[10],goal[10],space[10]={" "};
		cout<<"\n Masukan kalimat ke 1 : ";cin>>word_1;
		cout<<"\n Masukan kalimat ke 2 : ";cin>>word_2;
		cout<<"\n Masukan kalimat ke 3 : ";cin>>word_3;
		
		strcpy(goal , word_1);
		strcat(goal , space);
		strcat(goal , word_2);
		strcat(goal , space);
		strcat(goal , word_3);
		cout<<"\n\n "<<goal<<".";
	

//////////////////////////////////////////////////////////////////////////////			
		cout<<"\n ";
		for(int bates_atas=1; bates_atas<=78; bates_atas++){
				cout<<"-";
			}	
		cout<<"\n\n";
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();	
	 
	}
	while(jwb=="y" || jwb=="Y");
	
	return 0;
}


/*

fungsi STRCAT digunakan untuk menambah string asal ke bagian akhir string tujuan, program diatas menggunakan fungsi tersebut untuk menggabungkan 3 kata menjadi kalimat. Setelah 
program diinputkan 3 kata, masing-masing kata tersebut akan tersimpan ke dalam variabel, isi dari variabel kata ke 1 akan tersalin ke variabel tujuan menggunakan fungsi STRCPY dan untuk 
variabel ke 2 serta ke 3 akan ditambahkan ke variabel tujuan menggunakan fungsi STRCAT.



*/
