#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(59)<<"Parameter Masukan -  Penghitung Luas\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////

//deklarasi prototif prosedur
void Luas(int P, int L);

//fungsi main/utama
void konten_utama(){
	//deklarasi variabel lokal fungsi main
	int panjang, lebar;
	
	//input
	cout<<" Masukan Panjang = ";cin>>panjang;
	cout<<"\n Masukan Lebar   = ";cin>>lebar;
	
	//pemanggilan prosedur mengguanakan parameter aktual
	Luas(panjang,lebar);
}

//deskripsi fungsi prosedur
//parameter formal
void Luas(int P, int L){
	//deklarasi variabel lokal prosedur ubahBilX
	int luas;
	luas=P*L;
	
	//output
	cout<<"\n\n Luas            = "<<luas;
	
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

		konten_utama();	
	
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
