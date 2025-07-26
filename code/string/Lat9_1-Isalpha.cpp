#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
//#include <ctype.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(48)<<"String - ISALPHA\n";
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
		
		if(isalpha(word)){
			cout<<"\n\n\n\n Karakter "<<word<<" Merupakan Alfabet.\n";
		}
		else{
			cout<<"\n\n\n\n Karakter "<<word<<" Bukan Alfabet.\n";
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

ISALPHA akan mengnghasilkan nilai true atau 1 jika argumennya berupa alfabet atau huruf dan sebaliknya akan menghasilkan nilai salah atau 0 jika argumennya bukan alfabet. Program 
menggunakan fungsi tersebut untuk menentukan jenis dari karakter yang diinputkan dimana jika diinputkan huruf maka program akan menegaskan bahwa yang diinputkan adalah alfabet dan 
selain dari itu maka program akan menegaskan bahwa yang diinputkan bukan alfabet.

*/
