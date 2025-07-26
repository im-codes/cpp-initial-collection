#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop
#include <iomanip>		// untuk mengatur perataan header

using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(95)<<"SEGITIGA PASCAL\n";
			cout<<setw(106)<<"Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=176; bates_atas++){
			cout<<"=";
			}
}

	// fungsi prototipe
long long unsigned faktorial(int v); 
long long unsigned itungdigit(int w); 

int main() {
	system("mode con cols=176 lines=58");
// DEKLARASI
	system("color 0a");
	
	//Variabel isi perintah reset program
	string jwb;	
	
	do{
		// Mengatur layar
		system("cls");
		
		
		// Deklarasikan Nilai-nilai
		long long unsigned kolom=0, x, y;
		long long unsigned jumlah_bilangan = 0;
		long long unsigned ambil_elemen = 0;
		
		// Memanggil Header
		header();


// INPUT		
		// Mengulang jika inputan 0 atau lebih dari 21
		while(true){				
			kolom = 0;
			// Masukan Jumlah Kolom, maks 21			
			cout<<"\n Masukkan Jumlah Kolom  : "; cin>>kolom;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(kolom != 0 && kolom<=21){
				system("cls");
				header();
				cout<<"\n Masukkan Jumlah Kolom  : "<<kolom;
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n Hanya Berupa Angka dari 1 sampai 21.";					
			}
		}
		
		
// PROSES		
		/* menghitung banyaknya bilangan pada segitiga pascal
	  	sebagai patokan jumlah elemen pada deklrasi variabel array*/
	  	for(long long unsigned baris=1; baris<=kolom; baris++){
	  		jumlah_bilangan+=baris;
		  }
		/* membuat array dengan jumlah elemen sesuai
		jumlah bilangan dalam segitiga */
		long long unsigned arrays[jumlah_bilangan];
		cout<<"\n\n Jumlah Bilangan Dibuat : "<<jumlah_bilangan;
		cout<<"\n-----------------------------------------\n\n";
		
		/* jika x masih lebih kecil atau sama dengan  
		kolom yang diinputkan, maka jalankan pertintah*/
	  	for (x=0; x<kolom; x++) {
	  		
	  		// menambahkan spasi pada awal kolom untuk membentuk segitiga
	    	for (y=0; y<=kolom-x-1; y++){
				cout<<"    ";
	    	} 	    	
			   	
			/* jika y masih lebih kecil atau sama dengan x
			maka jalankan pertintah*/
	    	for (y=0; y<=x; y++){    



// INPUT HASIL PENCARIAN BILANGAN KE ARRAY	
			
				/* mencari bilangan segitiga pascal dengan menggunakan
				faktorial i / (faktorial j * faktorial (i-j))*/	
	    		arrays[ambil_elemen] = faktorial(x) / (faktorial(y) * faktorial(x - y));



// OUTPUT	    		
	    		/* mengambil elemen array dan menampilkannyaa ke layar
	    		dan menyesuaikan jarak antara bilangan dengan digit bilangan tersebut*/
				cout<<"  ";		
				cout<<arrays[ambil_elemen];		
	    		for(int digit = itungdigit(arrays[ambil_elemen]); digit<=5; digit++){
	    			cout<<" ";
				} 		
	    			    		
	    		// menambah pengambilan elemen selanjutnya
	    		ambil_elemen++;
	    	}
	
	    	cout<<endl<<endl;
	  	}
	  	
	  			
// RESET PROGRAM JIKA <Y>				
		// menentukan pembatas sesuai dengan panjang seigitiga
		cout<<"========";
		for(int bates_bawah=1; bates_bawah<=kolom; bates_bawah++){
			cout<<"========";
		
		}
		cout<<endl<<endl;
		cout<<" Tekan <Y> Untuk Mereset Program\n Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();
	} while(jwb == "y" || jwb == "Y");
	
	return 0;
}


// DEFINISI FUNGSI PROTOTIPE

	// definisi fungsi faktorial
long long unsigned faktorial(int v) {
	
	long long unsigned o = 1;	
	long long unsigned q = 1;

	// mencari faktorial dari bilangan yang dikirim
	while(q<=v) {
    	o=o*q;
    	q++;
  	}
  	
  	// mengembalikan hasil dari faktorial ke pemanggil
	return o;
}

	// untuk menghitung digit
long long unsigned itungdigit(int w){
	return floor(log10(w)+1);
}
