#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(49)<<"Fungsi - Perkalian\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//fungsi perkalian
int kali(int a,int b,int c,int d){
	return a*b*c*d;
}


int main(){
	// mengubah warna background dan huruf
	system("COLOR 0A");
	
	// jawaban hitung ulang atau tidak
	string jwb;
	
	/* program akan menghitung ulang selama jawaban yang
	diinputkan y atau Y pada akhir pengulangan 	*/
	do{	
		// untuk mereset layar pada saat hitung ulang
		system("CLS");
		header();
		
		int A,B,C,D;
		
		cout<<"\n Masukan Bilangan A : ";cin>>A;
		cout<<"\n Masukan Bilangan B : ";cin>>B;
		cout<<"\n Masukan Bilangan C : ";cin>>C;
		cout<<"\n Masukan Bilangan D : ";cin>>D;                     	//panggil fungsi
		cout<<"\n\n Hasil Dari "<<A<<" x "<<B<<" x "<<C<<" x "<<D<<" = "<<kali(A,B,C,D);
		
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

/*

Setelah keempat bilangan diinputkan, program akan memanggil Fungsi Perkalian untuk menghitung Perkalian dari 4 buah Bilangan yang nantinya fungsi tersebut akan mengembalikan nilai 
berupa hasil dan nilai tersebut akan ditampilkan ke layar.

*/
