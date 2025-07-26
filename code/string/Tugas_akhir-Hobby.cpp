#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(47.5)<<"String - Hobby\n";
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
		
		char nama[20],hobby[20];
		
		cout<<"\n\ Nama  : ";cin>>nama;
		cout<<"\n\ Hobby : ";cin>>hobby;
		
		cout<<"\n\n Nama Anda Adalah "<<nama<<" dan Hobby Anda Adalah "<<hobby<<".";		
	

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

Pada program diatas, Tipe data string digunakan untuk menyimpan inputan dari NAMA dan HOBBY User ke dalam variabel tersebut. Varibel akan ditampilkan ke layar sebagai jawaban dari 
komputer menggunakan perintah cout.

*/
