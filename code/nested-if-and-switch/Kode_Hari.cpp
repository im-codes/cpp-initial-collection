#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(45)<<"Kode Hari\n";
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
//////////////////////////////////////////////////////////////////////////////		
		// membuat variabel tipe integer
		int k_hari=0;
		string hari;
		cout<<"\n";
		cout<<" Silakan Masukan Kode hari [1-7] : "; cin>>k_hari;
		cout<<"\n\n ";
			
		if(k_hari == 1){
			hari="Senin";
		}
		else if(k_hari == 2){
			hari="Selasa";
		}
		else if(k_hari == 3){
			hari="Rabu";
		}
		else if(k_hari == 4){
			hari="Kamis";
		}
		else if(k_hari == 5){
			hari="Jum'at";
		}
		else if(k_hari == 6){
			hari="Sabtu";
		}
		else if(k_hari == 7){
			hari="Minggu";
		}
		else {
			hari="Tidak Ada Hari Dengan Kode Yang Dimasukan";
		}
		
		cout<<"Kode = "<<k_hari;
		cout<<"\n Hari = "<<hari;
//////////////////////////////////////////////////////////////////////////////			
		cout<<"\n\n===========================================================\n\n";
		
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

