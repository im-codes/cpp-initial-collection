#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(52.5)<<"Fungsi - Ganjil dan Genap\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//fungsi prosedur ganjil dan genap
void gg(int NO,int bill){
	if(bill==0){
		for(int no=1; no<=NO; no++){
			
			/* bil ganjil akan tersisa 1 jika
			 dibagi 2 */
			if (no % 2 == 1){
				
				// jika no adalah 9
				if(no==9){
					
					// cetak angka no
					cout<<no<<"  ";
				} // jika no bukan angka 9
				else{
					
					// cetak angka no
					cout<<no<<" ";
				}			
			}		
		}
	}
	else if(bill==1){
		for(int no=1; no<=NO; no++){
			/* bil genap akan tersisa 0 jika
			 dibagi 2 */
			if (no % 2 == 0){
				// cetak no
				cout<<no<<" ";
					
			}		
		}
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
		
		int batas;
		cout<<"\n  Batas Bilangan : "; cin>>batas;		
		
		cout<<"\n  Ganjil         : ";gg(batas,0);	
		cout<<"\n  Genap          : ";gg(batas,1);
		

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

Pembuatan program  dengan menggunakan Fungsi Prosedur untuk mencari Bilangan Ganjil dan Genap. Setelah batas jumlah bilangan diinputkan, program akan memanggil fungsi gg dimana fungsi
tersebut akan menampilkan output berupa bilangan yang diminta. Jika pemanggilannya untuk meminta bilangan Ganjil atau dengan kode 0 pada program maka fungsi gg akan menampilkan bilangan
tersebut berdasarkan dengan batas yang telah diinputkan dan begitu juga sebaliknya pada saat kode berupa 1 maka bilangan genaplah yang menjadi output berdasarkan jumlah batas yang sudah diinputkan

*/
