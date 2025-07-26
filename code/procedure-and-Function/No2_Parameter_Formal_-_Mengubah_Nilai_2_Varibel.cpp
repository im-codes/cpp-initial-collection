#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(63)<<"Parameter Formal - Mengubah Nilai 2 Variabel\n";
			cout<<setw(61)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////

//deklarasi fungsi prototif
int pengubah(int X);

//deklarasi prosedur main
void mains(void){
	//deklarasi variabel
	int A=10,B=20;
	
	//cetak
	cout<<"\n Nilai Awal A dan B";
	cout<<"\n Nilai A = "<<A;
	cout<<"\n Nilai B = "<<B;
	
	// pengisian variabel hasil dengan nilai kembalian fungsi pengubah
	A=pengubah(A);
	B=pengubah(B);
	
	//output
	cout<<"\n\n Nilai A dan B setelah Penggilan Fungsi";
	cout<<"\n Nilai A = "<<A;
	cout<<"\n Nilai B = "<<B;
}

//deklarasi fungsi pengubah
int pengubah(int X){
			
	//mengembalikan nilai ke pemanggil/output dengan menambahkan 5	
	return X+5;
}
///////////////////////////////////////////////////////////
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
