#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(47.5)<<"String - STRCPY\n";
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
		
		char word_1[20],word_2[20];
		cout<<"\n Masukan kalimat Variabel (Word_1) : ";cin>>word_1;
		
		strcpy(word_2 , word_1);
		cout<<"\n\n Nilai dari Variabel (Word_1) Sudah Tersalin ke Variabel (Word_2).";
		cout<<"\n\n Isi Dari Variabel (Word_2) Menjadi : \n\n "<<word_2;

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

STRCPY merupakan fungsi yang digunakan untuk menyalin string variabel satu ke variabel string yang lainnya. pada program diatas, program akan diinputkan kalimat dan menyimpannya ke 
dalam variabel word_1. fungsi strcpy akan menyalin isi dari variabel tersebut ke variabel word_2 dan ketika variabel word_2 ditampilkan ke layar, output program menampilkan isi dari 
variabel word_2 yang merupakan salinan dari variabel word_1.


*/
