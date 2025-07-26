#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks
//#include <ctype.h>	

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(54)<<"POINTER - Operator Aritmatik\n";
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
	
		int *ptr,irf;
		ptr = &irf;
		*ptr = 100;
		cout<<"\n\n Nilai Irf  = "<< irf <<endl;
		cout<<" Alamat Irf = "<<&irf<<endl ; 
		cout<<" Isi Ptr    = "<<ptr<<endl ; 
		cout<<" Nilai yang disimpan pada alamat yang ditunjuk Ptr ("<<ptr<<") = " ; 
  		cout<<*ptr;
  		
  		cout<<"\n\n\n Contoh Operasi Arimatika Pada Pointer"<<endl;
		cout<<"\n Nilai Irf = "<<irf<<endl;
		(*ptr)++;
		cout<<"\n *ptr++; \n";
		cout<<"\n Nilai Irf = "<<irf<<endl;
		*ptr=*ptr*2;
		cout<<"\n *ptr=*ptr*2; \n";
		cout<<"\n Nilai Irf = "<<irf<<endl;
				
	
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
