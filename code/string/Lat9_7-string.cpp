#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(47.5)<<"String - LOGIN\n";
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
		
		string username,pass;
		
		cout<<"\n\n"<<setw(40)<<" USERNAME  :  ";cin>>username;
		cout<<"\n"<<setw(40)<<" PASSWORD  :  ";cin>>pass;
		
		if(username=="UnpamTI_Irfan" && pass=="P455W0RD"){
			cout<<"\n\n"<<setw(50)<<"Anda Berhasil Login.";
		}
		else{
			cout<<"\n\n"<<setw(54)<<"Username dan Password Salah.";
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

Variabel String berfungsi untuk menyimpan data berupa karakter, penerapan jenis variebel tersebut ada pada penyimpanan username dan password dalam program dimana program akan diinputkan 
karakter Username serta Password dan menyimpannya ke dalam variabel dengan tipe data string. program akan menggunakan perintah IF unuk menentukan apakah Username dan Password benar 
atau salah, jika benar maka program akan penyatakan bahwa User Berhasil Login, jika salah, maka program akan menegaskan bahwa Username dan Password yang dimasukkan salah.


*/
