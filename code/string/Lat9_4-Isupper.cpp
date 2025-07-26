#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
//#include <ctype.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(48)<<"String - ISUPPER\n";
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
		
		char word;
		cout<<"\n Masukan Karakter : ";cin>>word;
		
		if(isupper(word)){
			cout<<"\n\n\n\n Karakter "<<word<<" Merupakan Huruf Besar.\n";
		}
		else{
			cout<<"\n\n\n\n Karakter "<<word<<" Bukan Huruf Besar.\n";
		}


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

ISUPPER akan mengnghasilkan nilai true atau 1 jika argumennya berupa Huruf Besar dan sebaliknya akan menghasilkan nilai salah atau 0 jika argumennya selain Huruf Besar. Program 
menggunakan fungsi tersebut untuk menentukan jenis dari Alfabet yang diinputkan dimana jika diinputkan huruf besar maka program akan menegaskan bahwa yang diinputkan adalah Huruf Besar
dan selain dari itu maka program akan menegaskan bahwa yang diinputkan bukan Huruf Besar.

*/
