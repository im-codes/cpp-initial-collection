#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(55.5)<<"Fungsi - Penukaran 2 Variabel\n";
			cout<<setw(61)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////

//deklarasi prosedur prototif tukar
void tukar(int,int);

//deklarasi prosedur main
void mains(void){
	//deklarasi variabel lokal
	int A, B;
	
	//input
	cout<<"\n Masukan Nilai A : ";cin>>A;
	cout<<"\n Masukan Nilai B : ";cin>>B;
	
	//output 1
	cout<<"\n\n Sebelum Ditukar";
	cout<<"\n Nilai A         : "<<A;
	cout<<"\n Nilai B         : "<<B;
	
	//pemanggilan prosedur 
	tukar(A,B);
	
	//output 2
	cout<<"\n\n Setelah Ditukar";
	cout<<"\n Nilai A         : "<<A;
	cout<<"\n Nilai B         : "<<B;
	
}

//deskripsi prosedur tukar
void tukar(int A,int B){
	//deklarasi variabel lokal
	int C;
	
	//proses penukaran
	C=B;
	B=A;
	A=C;
		
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
