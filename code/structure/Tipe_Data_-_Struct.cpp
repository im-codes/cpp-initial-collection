#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

struct mahasiswa{
	char *nama;
	char *alamat;
	int umur;
};

void mains(){
	
	//deklarasi variabel sruct
	struct mahasiswa mhs1, mhs2;
	
	//mengisi nilai ke struct
	mhs1.nama   = "Muhammad Irfan Maulana";
	mhs1.alamat = "Tajurhalang";
	mhs1.umur   = 19;
	
	mhs2.nama   = "Bimo";
	mhs2.alamat = "Pamulang";
	mhs2.umur   = 23;
	
	//mencetak isi struct
	printf(" ## Mahasiswa 1 ##\n");
	cout<< " ------------------\n";
	
	printf("    Nama   : %s\n", mhs1.nama);
	printf("    Alamat : %s\n", mhs1.alamat);
	printf("    Umur   : %d\n\n\n", mhs1.umur);

	printf(" ## Mahasiswa 2 ##\n");
	cout<< " ------------------\n";
	printf("    Nama   : %s\n", mhs2.nama);
	printf("    Alamat : %s\n", mhs2.alamat);
	printf("    Umur   : %d\n", mhs2.umur);	
	
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(49.5)<<"Tipe Data - Stuct\n";
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
		//panggil mains
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
