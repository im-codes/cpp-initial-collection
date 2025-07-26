#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(50)<<"Rekursif - Faktorial\n";
			cout<<setw(61)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////

//deklarasi fungsi prototif rekursif - Faktorial
long long int unsigned rekursif_faktorial(long long int unsigned  I);

//deklarasi prosedur main
void mains(void){
	//deklarasi variabel
	long long int unsigned  nilai=0, hasil=0;
	
	//input
	cout<<"\n Silakan Masukan Nilai          : ";cin>>nilai;
	
	//proses/pemanggilan fungsi rekursif dan mengisikan nilai kembaliannya ke varibel hasil
	hasil = rekursif_faktorial(nilai);
	
	//output
	cout<<"\n Hasil Dari Faktorial "<<nilai<<" Adalah = "<<hasil;
}

//deklarasi fungsi pengubah
long long int unsigned rekursif_faktorial(long long int unsigned  I){
	//basis
	if( I == 0)
		return 1;
		
	//rekurens	
	else
		return (I*rekursif_faktorial(I-1));
		
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
