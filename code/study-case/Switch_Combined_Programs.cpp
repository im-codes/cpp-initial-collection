#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop
#include <iomanip>		// untuk mengatur perataan teks
#include <iostream>		// cout,cin, dan endl

	
using namespace std;
// HEADER
void header(){
	cout<<endl;
			cout<<setw(53)<<"Switch - Gabungan Program\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}


void lk_segitiga(){
	// deklarasi nilai-nilai
	int a=0,t=0,A=0,B=0,C=0,K=0;
	
	float L=0;
	cout<<" Penghitung Luas dan Keliling Segitiga\n\n";
	// input tinggi dan panjang
	cout<<" Masukkan Tinggi Segitiga  : ";
	cin>>t;
	
	cout<<" Masukkan Panjang Segitiga : ";
	cin>>a;
	
    cout<<" Masukkan Panjang Sisi A   : ";
	cin>>A;
	
	cout<<" Masukkan Panjang Sisi B   : ";
	cin>>B;
	
	cout<<" Masukkan Panjang Sisi C   : ";
	cin>>C;
	
	
	
	// hitung l dan k
	L = 0.5 * a * t;
	K = A + B + C;
	
	// menampilkan Luas dan k
	cout<<"\n\n Keliling Segitiga adalah  : "<<K;
	cout<<"\n Luas Segitiga adalah      : "<<L;
	
	
}

void lk_persegi_panjang(){
	// deklarasi nilai-nilai
	int p=0,l=0,K=0,L=0;
	
	cout<<" Penghitung Luas dan Keliling Persegi Panjang\n\n";
	// input tinggi dan panjang
	cout<<" Masukkan Panjang Persegi Panjang : ";
	cin>>p;
	
	cout<<" Masukkan Lebar Persegi Panjang   : ";
	cin>>l;
	
	// hitung L dan K 
	K = 2 * (p + l);
	L = p * l;
	
	
	// menampilkan l & K
    cout<<"\n\n Keliling Persegi Panjang adalah  : "<<K;
	cout<<"\n Luas Persegi Panjang adalah      : "<<L;
	
	
}

void lk_lingkaran(){
	// deklarasi nilai-nilai
	int d=0;
	float L=0,K=0;
	const double PI = 3.14159;
	cout<<" Penghitung Luas dan keliling Lingkaran\n\n";
	// input tinggi dan panjang
	cout<<" Masukkan Diameter Lingkaran  : ";
	cin>>d;
	
	
	
	// hitung keliling dan l
	K = PI * d;
	L = PI * (d/2) * (d/2);
	
	// menampilkan Luas dan k
	cout<<"\n\n Keliling Lingkaran adalah  : "<<K;
	cout<<"\n Luas Lingkaran adalah      : "<<L;
	
	
	
}


int main(){
	system("color 0a");
	string jwb;
	do {
		system("CLS");
		char pilih;
		header();
		cout<<"\n DAFTAR MENU PROGRAM :";
		cout<<"\n 1. Penghitung Luas dan Keliling Segitiga        [S]";
		cout<<"\n 2. Penghitung Luas dan Keliling Persegi Panjang [P]";
		cout<<"\n 3. Penghitung Luas dan Keliling Lingkaran       [L]\n";
		
		while(true){				
			pilih = 0;
						
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(pilih != 0 && pilih == 'S' || pilih == 'P'|| pilih == 'L'){
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n DAFTAR MENU PROGRAM :";
				cout<<"\n 1. Penghitung Luas dan Keliling Segitiga        [S]";
				cout<<"\n 2. Penghitung Luas dan Keliling Persegi Panjang [P]";
				cout<<"\n 3. Penghitung Luas dan Keliling Lingkaran       [L]\n";
				cout<<"\n Pilihlah Sesuai Dengan Kode Program";					
			}
		}
		
		cout<<endl<<endl;
		do{
			system("cls");					
			header();
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. Penghitung Luas dan Keliling Segitiga        [S]";
			cout<<"\n 2. Penghitung Luas dan Keliling Persegi Panjang [P]";
			cout<<"\n 3. Penghitung Luas dan Keliling Lingkaran       [L]\n";
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "<<pilih;
			// membuat garis atas
			cout<<endl;
			for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
				cout<<"-";
			}	
			cout<<endl<<endl;
			
			system("cls");					
			header();
			cout<<endl<<endl;
			
			switch ( pilih ) {	
        	case 'S':
            	lk_segitiga();
         	break ;
 
         	case 'P':
            	lk_persegi_panjang();
         	break ;
 
         	case 'L':
            	lk_lingkaran();
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
