#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(47)<<"Switch - Kode Bulan\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
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
		
		// membuat variabel tipe integer
		int k_bulan;
		cout<<"\n";
		cout<<" Silakan Masukan Kode Bulan [1-12] : "; cin>>k_bulan;
		cout<<"\n\n ";
		switch (k_bulan)
		{
			case 1:
				cout<<"Januari";break;
			case 2:
				cout<<"Februari";break;
			case 3:
				cout<<"Maret";break;
			case 4:
				cout<<"April";break;
			case 5:
				cout<<"Mei";break;
			case 6:
				cout<<"Juni";break;
			case 7:
				cout<<"Juli";break;
			case 8:
				cout<<"Agustus";break;
			case 9:
				cout<<"September";break;
			case 10:
				cout<<"Oktober";break;
			case 11:
				cout<<"November";break;
			case 12:
				cout<<"Desember";break;
			default:
				cout<<"Masukan Kode [1-12].";
		}
		
		cout<<"\n\n===========================================================\n\n";
		
		// mencetak keterangan
		cout<<"Tekan Y untuk menghitung ulang.\n";
		cout<<"Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 
	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}

