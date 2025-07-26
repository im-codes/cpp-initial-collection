#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

//deklarasi fungsi prototif
int H(const char*s);
//prosedur mains/utama
void mains(void)
{	//deklarasi variabel array satu dimensi
	char String [80];
	
	//input karakter
	cout<<"\n\n Silahkan Masukkan kata    : ";
	cin.getline(String,80); //getline = mengikutsertakan spasi ke inputan
	cout<<endl;
	//output setelah proses pada fungsi penghitung karakter H
	cout<<" Jumlah Karakternya Adalah : "<<H(String)<<" Karakter "<<endl;

}	
//deskripsi fungsi H
int H(const char*s){
	//deklarasi variabel
	int x = 0;
	//nilai dari variabel s sebagai kondisi for
	for (;*s!='\0';s++)
	//x meningkat 1
	++x;
	//mengembalikan nilai ke pemanggil
	return x;
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(55.5)<<"Pointer - Penghitung Karakter\n";
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
