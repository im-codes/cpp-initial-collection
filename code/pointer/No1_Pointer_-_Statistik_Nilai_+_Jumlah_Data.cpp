#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;

//////////////////////////////////////////////////////////

//prosedur mains/utama
void mains(void)
{	//deklarasi
	int unsigned jmlah_data;
	int unsigned max,min, *Pnilai;
	float avr=0;

	
	//input
	cout<< " Input Data\n";
	cout<< " ----------------\n\n";
	cout<< "     Masukan Jumlah Data : ";
	cin>>jmlah_data;
	cout<<endl;
	
	int unsigned nilai[jmlah_data];
	Pnilai=&nilai[0];
	
	for(int i=0;i<jmlah_data;i++){
		cout<< "     Masukan Nilai Ke-"<<i+1<<" : ";
		cin>>*Pnilai++;		
	}
	//cetak
	Pnilai=&nilai[0];
	cout<< "\n\n Statistik\n";
	cout<< " ----------------\n";
	cout<<"\n    Data yang dimasukkan : ";
	for(int i=0;i<jmlah_data;i++){
	
		cout<<*Pnilai++<<" ";
	}
	
	//rata-rata
	Pnilai=&nilai[0];
	for(int i=0;i<jmlah_data;i++){
		avr+=*Pnilai++;
	}
	avr/=jmlah_data;
	cout<<"\n    Rata-rata            : "<<avr;
		
	//max
	Pnilai=&nilai[0];
	max=*Pnilai;
	for(int i=0;i<jmlah_data;i++){
		if(max<*Pnilai)
			max=*Pnilai;
		*Pnilai++;
	}
	cout<<"\n    Nilai Tertinggi      : "<<max;
	
	//min
	Pnilai=&nilai[0];
	min=*Pnilai;
	for(int i=0;i<jmlah_data;i++){
		if(min>*Pnilai)
			min=*Pnilai;
		*Pnilai++;
	}
	cout<<"\n    Nilai Terendah       : "<<min;

}	


///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(53.5)<<"Pointer - Statistik Nilai\n";
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
