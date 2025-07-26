#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(51.5)<<"ARRAY - Input dan Output\n";
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
////////////////////////////////////////////////////////////////////////////		
	
		// deklarasikan jumlah elemen pada array yang akan dibuat
		int unsigned jumlah_elemen;
		
		// input jumlah elemen
		cout<<"\n Jumlah Elemen Pada Array : "; cin>>jumlah_elemen;
		// membuat array dengan jumlah jumlah elemen sesuai input
		int arrays[jumlah_elemen-1];
		cout<<endl;
		
		// menginputkan nilai ke elemen array
		for(int h=0; h<=jumlah_elemen-1; h++){	
		
			cout<<" Masukan Nilai Elemen "<<(h+1);
			
			// menyesuaikan spasi pada ":" agar rata
			if(h+1>=10){
				cout<<"  : ";
			}
			else {
				cout<<"   : ";
			}
			// input elemen
			cin>>arrays[h];
			
			// untuk menghapus enter atau "\n" pada inputan 
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		cout<<endl<<endl;
		
		// Menampilkan nilai2 yang sudah diinputkan ke array
		cout<<" Nilai-Nilai Pada Array   : ";
		for(int y = 0; y<jumlah_elemen; y++){
			if(y==jumlah_elemen-1){
				// menambahkam tanda titik pada nilai paling akhir
				cout<<arrays[y]<<".";
			}
			else{
				// menambahkan tanda koma pada nilai awal dan tengah
				cout<<arrays[y]<<", ";
			}
		}
			
/////////////////////////////////////////////////////////////////////////////
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


Program mengunakan array sebagai penyimpanan data. Pada saat jumlah lokasi memori atau jumlah elemen array diinputkan, arraay akan dideklarasikan atau dibuat berdasarkan jumlah elemen
yang diinputkan. kemudian program akan meminta bilangan-bilangan yang nantinya akan disimpan di dalam elemen array, setelah semua bilangan terinput, program akan mengambil data dari 
array menggunakan perintah pengulangan for sebagai penentu lokasi memori pada array dan menampilkannya ke layar.

*/
