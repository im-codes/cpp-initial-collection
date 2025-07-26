#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(61.5)<<"Lat6_4 - Sequential Search Struktur Biodata\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//deklarasi tipe data struktur
struct TINGGAL { 
   char Jalan [40] ; 
   char Kode_Pos [6] ; 
   char Kota [25] ; 
   
}; 
struct TANGGAL { 
   int Tanggal ; 
   int Bulan ; 
   int Tahun ; 
}; 
//deklarasi tipe data stuktur utama
struct BIODATA { 
   long long unsigned NIP; 
   char Nama [25]; 
   TINGGAL Alamat; 
   char Jabatan [25];
   char Agama [25]; 
   TANGGAL Tanggal_Lahir;
   TANGGAL Tanggal_Mulai_Kerja;
   char Unit_Kerja [25];
};


int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 
///////////////////////////////////////////////////////////////////////////////////////////////	
		//deklarasai variabel struktur
		BIODATA Pegawai[5] ; 
		int i, data;bool ketemu;
		long long unsigned cariNip;
		cout<<" Jumlah Pegawai = ";cin>>data;
		cout<<"\n=====================================================\n\n";
		//input 5 data pegawai ke struktur
		cout<<" # Input Biodata Pegawai\n";
		for (i=0; i<data; i++){ 
			cout<<"   + Pegawai "<<i+1;
			cout<<"\n\tNIP           : "; cin>>Pegawai[i].NIP; 	
			cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');				
			cout<<"\tNama          : "; cin.getline (Pegawai[i].Nama, 25 ); 
		
			cout<<"\tAlamat        : \n" ; 
			cout<<"\t\tJalan    : ";cin.getline ( Pegawai[i].Alamat.Jalan, 40 ) ; 
			cout<<"\t\tKota     : ";cin.getline ( Pegawai[i].Alamat.Kota, 25 ) ; 
			cout<<"\t\tKode pos : ";cin.getline ( Pegawai[i].Alamat.Kode_Pos, 6 ) ; 
			
			cout<<"\n\tJabatan       : "; cin.getline (Pegawai[i].Jabatan, 25 ) ;
			cout<<"\tAgama         : "; cin.getline (Pegawai[i].Agama, 25 ) ;
									
			cout<<"\n\tTanggal Lahir : \n"; 
			cout<<"\t\tTanggal : "; cin>>Pegawai[i].Tanggal_Lahir.Tanggal ; 
			cout<<"\t\tBulan   : "; cin>>Pegawai[i].Tanggal_Lahir.Bulan ; 
			cout<<"\t\tTahun   : "; cin>>Pegawai[i].Tanggal_Lahir.Tahun ; 
			
			cout<<"\n\tTanggal Mulai Kerja : \n"; 
			cout<<"\t\tTanggal : "; cin>> Pegawai[i].Tanggal_Mulai_Kerja.Tanggal ; 
			cout<<"\t\tBulan   : "; cin>>Pegawai[i].Tanggal_Mulai_Kerja.Bulan ; 
			cout<<"\t\tTahun   : "; cin>>Pegawai[i].Tanggal_Mulai_Kerja.Tahun ;
			
			cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<"\n\tUnit Kerja    : "; cin.getline (Pegawai[i].Unit_Kerja, 25 ) ;
			cout<<endl<<endl; 
		
		}
		
					
		//melakukan pencarian 
		
		cout<<"\n\n\n # Cari Data Pegawai (NIP) : ";cin>>cariNip;
			 
		i=0; 
		do 
		{ 
			if(cariNip == Pegawai[i].NIP) 
				ketemu = true;
			else
				i++;
		} 
		while (i<data&&!ketemu); 
		
		if (ketemu){
			
		//cetak/output stuktur data
		cout<<"\n\n\n # Mencetak Biodata Pegawai Hasil Pencarian\n";
		cout<<"\n=====================================================\n\n";
			cout<<"\n\tNIP           : "<<Pegawai[i].NIP ; 
			cout<<"\n\tNama          : "<<Pegawai[i].Nama ; 
			
			cout<<"\n\tAlamat        : "; 
			cout<<"\n\t\tJalan    : "<<Pegawai[i].Alamat.Jalan; 
			cout<<"\n\t\tKota     : "<<Pegawai[i].Alamat.Kota; 
			cout<<"\n\t\tKode Pos : "<<Pegawai[i].Alamat.Kode_Pos; 
			
			cout<<"\n\n\tJabatan       : "<<Pegawai[i].Jabatan; 
			cout<<"\n\tAgama         : "<<Pegawai[i].Agama;
			
			cout<<"\n\n\tTanggal Lahir : "<<Pegawai[i].Tanggal_Lahir.Tanggal<<"-"; 
			cout<<Pegawai[i].Tanggal_Lahir.Bulan<<"-"<<Pegawai[i].Tanggal_Lahir.Tahun;
			
			cout<<"\n\n\tTanggal Mulai Kerja : "<<Pegawai[i].Tanggal_Mulai_Kerja.Tanggal<<"-"; 
			cout<<Pegawai[i].Tanggal_Mulai_Kerja.Bulan<<"-"<<Pegawai[i].Tanggal_Mulai_Kerja.Tahun;
		
			cout<<"\n\tUnit Kerja    : "<<Pegawai[i].Unit_Kerja; 
			cout<<endl<<endl; 
			
						
		}			 
		else{
			cout<<"\n\tData Pegawai Dengan NIP"<<Pegawai[i].NIP<<" Tidak Ditemukan "; 
		}
		
		
		
////////////////////////////////////////////////////////////////////////////////////////////////		
		cout<<endl<<endl; 		 
		cout<<"===========================================================\n\n";		
		// mencetak keterangan
		cout<<" Tekan Y untuk mengulang program.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban ulang/tidak
		jwb = getch();
	
	
	/*  program akan kembali ke label ulang 
       jika diinputkan y atau Y */
	if(jwb=="y" || jwb=="Y") goto ulang;
 	return 0;
}


