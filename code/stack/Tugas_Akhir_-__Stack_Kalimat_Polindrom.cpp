#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

#define MaxElemen 200 //menentukan batas max elemen
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////	
struct Tumpukan
{
	char Isi[MaxElemen];
	int Atas;
} T;

//sub program PUSH berfungsi memasukkan elemen ke dalam STACK
void PUSH (char x){ //fungsi push
	if(T.Atas == MaxElemen){  //untuk mengecek apakah stack sudah penuh
		cout<<" Tumpukan Sudah Penuh";
		getch();
	}
	else{
		T.Atas = T.Atas + 1;
		T.Isi[T.Atas] = x;
	}
}

//sub program POP berfungsi mengambil elemen dari STACK
char POP(){
	char hasil;
	if(T.Atas == 0){
		cout<<" Tumpukan sudah kosong";
		hasil = ' ';
	}
	else{
		hasil = T.Isi[T.Atas];
		T.Atas = T.Atas - 1;
	}
	return hasil;
}

void mains(void){

	int I;       // pencacah
	char Kalimat[MaxElemen];   //kalimat yang akan dibalik
	char Kalimat_Dibalik[MaxElemen];
	bool Polindrom = true;
	


	T.Atas =0;  // nilai awal tumpukan

	// Inputkan kalimat yang akan dibalik
	cout<<" Masukkan Kalimat Acak    : ";gets(Kalimat);

	//Mem-PUSH huruf dari kalimat ke dalam tumpukan
	for(I=0;I<strlen(Kalimat);I++)
	{
		PUSH(Kalimat[I]);
	}
	
	cout<<"\n Kalimat Setelah di Balik : ";
	
	//Mem-POP sekaligus mencetak isi tumpukan sehingga diperoleh kalimat yang terbalik
	for (I=0;I<strlen(Kalimat);I++)
	{
		Kalimat_Dibalik[I]=POP();
		if(Kalimat_Dibalik[I]!=Kalimat[I]){
			Polindrom = false;
		}
	}
	
	cout<<Kalimat_Dibalik;
	if(Polindrom){
		cout<<"\n\n Kalimat Polindrom";
	}else{
		cout<<"\n\n Kalimat Tidak Polindrom";
	}
	
	
            
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(58.5)<<"Tugas Akhir - Stack Kalimat Polindrom\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 


		mains();			
			
		cout<<endl<<endl; 		 
		cout<<"===========================================================\n\n";		
		// mencetak keterangan
		cout<<" Tekan Y untuk mengulang program.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban ulang/tidak
		jwb = getch();
	
	
	/*  program akan kembali ke label ulang 
       jika diinputkan y atau Y */
	if(jwb=="y" || jwb=="Y") goto ulang;
 	return 0;
}


