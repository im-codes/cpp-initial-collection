#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;

//////////////////////////////////////////////////////////

void terkecil(int A, int B, int C);	//deklarasi prosedur prototif nilai terkecil
int terbesar(int A, int B, int C);	//deklarasifungsi prototif nilai terbesar
void mains(void){					//prosedur mains/utama
	//deklarasi 3 bilangan
	int A,B,C;
	
	//input 3 bilangan
	cout<<"\n Integer A       : ";cin>>A;	
	cout<<" Integer B       : ";cin>>B;
	cout<<" Integer C       : ";cin>>C;	
	
	//output setelah pencarian nilai terkecil dan terbesar
	cout<<"\n\n Nilai Terkecil  : ";terkecil(A,B,C);	//pemanggilan prosedur
	cout<<"\n Nilai Terbesar  : "<<terbesar(A,B,C);		//pemanggilan fungsi
	
}

//deskripsi prosedur untuk mencari nilai terkecil
void terkecil(int A, int B, int C){
	
	//jika benar, cetak
	if (A < B && A < C){
		cout<<A;
	}
	else {	
		if (A < B && A > C) {
			cout<<C;
		}
		else{
			if (A > B && B < C) {
				cout<<B;
			}
			else{
				cout<<C;
			}
		}	
	}	
	
}

//deskripsi fungsi untuk mencari nilai terbesar
int terbesar(int A, int B, int C){
	
	//jika benar, return 
	if (A > B && A > C){
		return A;
	}
	else {	
		if (A > B && A < C) {
			return C;
		}
		else{
			if (A < B && B > C) {
				return B;
			}
			else{
				return C;
			}
		}
	}	
}



///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(63.5)<<"Fungsi - Terbesar dan Terkecil dari 3 Integer\n";
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
		
		//panggil prosedur mains
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
