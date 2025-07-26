#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop
#include <iomanip>		// untuk mengatur perataan teks
#include <sstream> 		// Untuk membuat fungsi format rupiah
#include <iostream>		// cout,cin, dan endl

	
using namespace std;
// HEADER
void header(){
	cout<<endl;
			cout<<setw(48)<<"Gabungan Program\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//fungsi untuk merubah bilangan menjadi format rupiah
string format_rupiah(int bilangan, string pemisah = "."){	
	// merubah nilai menjadi string				
	stringstream st; st<<bilangan;
	string rp = st.str();
	
	// mencari jumlah digit untuk lokasi penambahan "."
	int digit = rp.length() - 3;
	
	// selama digit masih lebih besar dari 0
	while(digit > 0){
		
		/* bilangan akan ditambahkan "." pada 
		digit ke 3 dari kanan */
		rp.insert(digit,pemisah);
		
		// jumlah digit akan di kurang 3							
		digit -= 3;
	}
	
	/* mengembalikan nilai dari bilangan yang sudah
	diformat  ke rupiah kepada pemanggil dan menambahkan
	",00" pada nilai tersebut */	
	return rp + ",00";														
}

void luas_segitiga(){
	// deklarasi nilai-nilai
	int a=0;
	int t=0;
	float L=0;
	cout<<" Penghitung Luas Segitiga\n\n";
	// input tinggi dan panjang
	cout<<" Masukkan Tinggi Segitiga  : ";
	cin>>t;
	
	cout<<" Masukkan Panjang Segitiga : ";
	cin>>a;
	
	// hitung keliling lingkaran
	L = 0.5 * a * t;
	
	// menampilkan Luas Segitiga
	cout<<"\n\n Luas Segitiga adalah    : "<<L;
	
	
}

void aritmatika(){
	int A,B,C,Y;																								// Deklarasi Variabel tipe integer
	cout<<" Program Aritmatika Pangkat dari (A^2) + (B^2) + (C^3) \n\n";
	cout<<" Nilai A :"; cin>>A;																					// Memasukkan Nilai-nilai
	cout<<" Nilai B :"; cin>>B;
	cout<<" Nilai C :"; cin>>C;
	Y = pow(A,2) + pow(B,2) + pow(C,3);																			// Menghitung pangkat menggunakan Fungsi Pow()
	cout<<"\n\n Hasil dari ("<<A<<"^2) + ("<<B<<"^2) + ("<<C<<"^3) adalah : "<<Y;										// Menampilkan Hasil
}

void diskon(){
	// membuat variabel tipe long long,float dan string
	long long harga_barang,jumlah_barang,beli,total_bayar;
	float diskon;				
	string persen_diskon;
	
	cout<<" Menghitung Total Penjualan\n\n";
	
	// Input Harga Satuan barang
	cout<<" Harga Barang         : Rp "; cin>>harga_barang;	 

	// Input Jumlah Barang
	cout<<" Jumlah Barang        :    "; cin>>jumlah_barang; 
	cout<<"\n";
		
	cout<<"===========================================================\n\n";
	
	// Menghitung Total Harga pembayaran
 	beli = harga_barang * jumlah_barang;
	 
	/*	Menghitung Total Harga pembayaran 
	dipotong dengan diskon 15% jika jumlah  barang >100 */
	if(jumlah_barang>=100){		
		persen_diskon = " 15%";	
		diskon = beli * 0.15;
												
	}
	
	/*	Menghitung Total Harga pembayaran 
	dipotong dengan diskon 5% jika jumlah  barang >100 */	
	else {
		persen_diskon = "  5%";	
		diskon = beli * 0.05;
												
	}

	// Harga awal dipotong diskon
	total_bayar = beli - diskon;	
		
	
	// Mencetak Jumlah Bayar yang dibeli	
	cout<<" Jumlah Barang        :    "<<jumlah_barang<<endl;
	
	// Mencetak Harga Pembayaran	
	cout<<" Subtotal Harga Bayar : Rp "<<format_rupiah(beli)<<endl;

	// Mencetak Diskon 	 
	cout<<" Potongan Diskon"<<persen_diskon<<"  : Rp "<<format_rupiah(diskon)<<endl;
	
	// Mencetak Total Harga Pembayaran 
	cout<<" Total Harga Bayar    : Rp "<<format_rupiah(total_bayar); 
}
int main(){
	system("color 0a");
	string jwb;
	do {
		system("CLS");
		int pilih;
		header();
		cout<<"\n DAFTAR PROGRAM :";
		cout<<"\n 1. Penghitung Luas Segitiga";
		cout<<"\n 2. Program Aritmatika";
		cout<<"\n 3. Menghitung Total Penjualan\n";
		
		while(true){				
			pilih = 0;
			// Masukan Jumlah Kolom, maks 21			
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(pilih != 0 && pilih<=3){
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n DAFTAR PROGRAM :";
				cout<<"\n 1. Penghitung Luas Segitiga";
				cout<<"\n 2. Program Aritmatika";
				cout<<"\n 3. Menghitung Total Penjualan\n";
				cout<<"\n Pilih Nomor 1 - 3";					
			}
		}
		
		cout<<endl<<endl;
		do{
			system("cls");					
			header();
			cout<<"\n DAFTAR PROGRAM :";
			cout<<"\n 1. Penghitung Luas Segitiga";
			cout<<"\n 2. Program Aritmatika";
			cout<<"\n 3. Menghitung Total Penjualan\n";
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "<<pilih;
			// membuat garis atas
			cout<<endl;
			for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
				cout<<"-";
			}	
			cout<<endl<<endl;
			
			switch ( pilih ) {	
        	case 1 :
            	luas_segitiga();
         	break ;
 
         	case 2 :
            	aritmatika();
         	break ;
 
         	case 3 :
            	diskon();
        	break ;
        	}
        	cout<<endl;
        	// membuat garis bawah
			for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
				cout<<"-";
			}		
			cout<<" Tekan <R> Jika Ingin Menghitung Ulang.\n";
			cout<<" Tekan <M> Jika Ingin Memilih Program.\n";
			cout<<" Tekan Apa Saja Untuk Menutup Program.";
			jwb = getch();
        	
   		}while(jwb=="r" || jwb=="R");
			 
	}	while(jwb=="m" || jwb=="M");
	
	return 0;		
}
