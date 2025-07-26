#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////



void mains(void)
{
	//deklarasi variabel-variabel
	int A[5], N;
	
	//memasukan nilai ke setiap elemen array secara berurutan
	for(N=1;N<=5;N++){
		A[N-1]=N;
	}
	
	//cetak nilai elemen variabel array ke layar
	cout<<" Nilai Pada Array A[5]: ";
	for(N=0;N<5;N++){
		cout<<A[N]<<" ";
	}
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(52.5)<<"No 1. UTS - Input Array\n";
			cout<<setw(61)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	// variable jawaban restart/tutup
	string jwb;
	do{	
		system("CLS");
		header();
		cout<<"\n\n";

		mains();	
	
		cout<<endl<<endl; 		 
		cout<<"===========================================================\n\n";		
		// mencetak keterangan
		cout<<" Tekan Y untuk menghitung ulang.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}
