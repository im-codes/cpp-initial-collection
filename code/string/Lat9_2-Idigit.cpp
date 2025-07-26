#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
//#include <ctype.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(48)<<"String - ISDIGIT\n";
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
		
		if(isdigit(word)){
			cout<<"\n\n\n\n Karakter "<<word<<" Merupakan digit atau angka.\n";
		}
		else{
			cout<<"\n\n\n\n Karakter "<<word<<" bukan digit atau angka.\n";
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

ISDIGIT akan mengnghasilkan nilai true atau 1 jika argumennya berupa digit atau karakter 0-9 dan sebaliknya akan menghasilkan nilai salah atau 0 jika argumennya bukan digit. Program 
menggunakan fungsi tersebut untuk menentukan jenis dari karakter yang diinputkan dimana jika diinputkan angka maka program akan menegaskan bahwa yang diinputkan adalah angka atau digit dan 
selain dari itu maka program akan menegaskan bahwa yang diinputkan bukan angka atau digit.

*/
