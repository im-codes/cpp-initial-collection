#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(49)<<"KPK 2 BUAH BILANGAN\n";
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
		int a,b,c;
	
		cout<<"\n Masukan Bilangan A : "; cin>>a;
		cout<<" Masukan Bilangan B : "; cin>>b;
		
		int kpk = a;
		
		while(kpk%b !=0){
			kpk+=a;
		}
		
		cout<<"\n\n KPK = "<<kpk;
	
		cout<<"\n ------------------------------------------------------------------------------\n\n";	
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();	
	 
	}
	while(jwb=="y" || jwb=="Y");
	
	return 0;
}
