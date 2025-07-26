#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;

//////////////////////////////////////////////////////////

//deklarasi prototif fungsi total data integer
int total_data(int *val, int jumlah_data);
void mains(void) //prosedur mains/utama
{	
	//deklarasi variabel 
	float rata,total;
    int jumlah_data;
	
	//input banyak data
    cout << "\n Masukkan Jumlah Data    : "; cin >>jumlah_data;
    cout << endl;
    
	//deklarasi array berjumlah elemen jumlah_data
    int val[jumlah_data];
	
	//input nilai berulang berdasarkan jumlah_data
    for (int i = 0; i < jumlah_data; i++) {
        cout << " Masukkan  Nilai ke-"<<i+1<<"    : "; cin >> val[i];
        
    }	
    cout << endl;
    
    //hitung total dan rata-rata
    total=total_data(val,jumlah_data); //pemanggilan fungsi total_data
    rata = total / jumlah_data;	
    
    //output dengan var total dan rata-rata
    cout << " Total                   : " << total << endl;
    cout << " Rata-rata               : " << rata;
}	
//deskripsi fungsi total_data, untuk mencari total 
int total_data(int *val, int jumlah_data){	//alamat array diberikan ke var pointer *val
	int total=0;							//deklarasi var int total
	for (int i = 0; i < jumlah_data; i++) {			//for berulang sebanyak jumlah_data
		total+= *val++;							//penjumlahan semua nilai elemen
    }
    return total;	//nilai kembalian fungsi 
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(58.5)<<"Fungsi - Rata-Rata Inputan Berulang\n";
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
