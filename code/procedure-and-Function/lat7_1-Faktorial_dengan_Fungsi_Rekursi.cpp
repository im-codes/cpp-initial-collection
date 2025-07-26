#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
//fungsi prosedur-header
void header(){
	cout<<endl;
			cout<<setw(49.5)<<"Rekursi - Faktorial\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}




//fungsi rekursif - Faktorial
long long int rekursif_faktorial(int I);

int main(){
	// mengubah warna background dan huruf
	system("COLOR 0A");

	// jawaban hitung ulang atau tidak
	string jwb;
	
	/* program akan menghitung ulang selama jawaban yang
	diinputkan y atau Y pada akhir pengulangan 	*/
	do{	
		system("CLS");
		header();
	//////////////////////////////////////////////////////////////////////	
	
		int nilai=0, hasil=0;
		
		cout<<"\n Silakan Masukan Nilai          : ";cin>>nilai;
		
		hasil = rekursif_faktorial(nilai);
		cout<<"\n Hasil Dari Faktorial "<<nilai<<" Adalah = "<<hasil;		
	

	//////////////////////////////////////////////////////////////////////
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

long long int rekursif_faktorial(int I){
	if( I == 0)
		return 1;
	else
		return(I*rekursif_faktorial(I-1));
		
}

/*

Pada saat nilai diinputkan, fungsi rekursif_faktorial akan dipanggil dan nilai akan diproses didalam fungsi tersebut. pada fungsi rekursif_faktorial terdapat sebuah percabangan IF
dimana jika nilai = 1 maka nilai kembalian akan menjadi nilai awal, jika salah maka fungsi rekursif_faktorial akan memanggil dirinya sendiri dan nilai kembalian akan menjadi hasil dari nilai awal dikalikan nilai fungsi 
rekursif_faktorial(nilai - 1). pada saat fungsi rekursif_faktorial memanggil dirinya sendiri itulah yang menjadikan fungsi rekursif_faktorial menjadi Fungsi Rekursif.



*/

