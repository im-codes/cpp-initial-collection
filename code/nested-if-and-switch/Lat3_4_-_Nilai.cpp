#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
//#include <ctype.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(52)<<"If Else - Predikat Nilai\n";
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
			
		int nilai;
		char huruf;
		cout<<"\n\n Silahkan Masukan Nilai : ";cin>>nilai;
		if(nilai >= 81 && nilai <= 100){
			huruf='A';
		}
		else if(nilai >= 71 && nilai < 81){
			huruf='B';
		}
		else if(nilai >= 61 && nilai < 71){
			huruf='C';
		}
		else if(nilai >= 51 && nilai < 61){
			huruf='D';
		}
		else if(nilai < 51){
			huruf='E';
		}
		
		cout<<"\n\n Nilai    : "<<nilai;
		cout<<"\n\n Predikat : "<<huruf;
				
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

Program diatas menggunakan Operator Aritmatika Pointer untuk menjumlahkan nilai dari variabel awal.

*/
