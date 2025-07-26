#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <sstream> 		// Untuk membuat fungsi format rupiah
#include <string.h>	    // Untuk membuat fungsi format rupiah
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

#define Jmlh_struct 10  // jumlah elemen variabel array structure

using namespace std;

// Prosedur Header/Judul
void header(){
	cout<<endl;
	cout.flags(ios::right);
	cout<<setw(99.5)<<"Structure - Input List Data Karyawan\n";
	cout<<setw(101.5)<<"By Muhammad Irfan Maulana - 201011401753\n";
	
	// Garis Atas			
	for(int bates_atas=1; bates_atas<=167; bates_atas++){
		cout<<"=";
	}
}
//fungsi untuk merubah bilangan menjadi format rupiah
string format_rupiah(long long int bilangan, string pemisah = "."){	
	// merubah nilai menjadi string				
	stringstream st; st<<bilangan;
	string rp = st.str();
	
	// mencari jumlah digit untuk lokasi penambahan "."
	long long int digit = rp.length() - 3;
	
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

//Type Data Struktur  Karyawan
struct karyawan_str{
	char nama[30], status_kawin, status_karyawan[30], jenis_kelamin[30], alamat[40];
	unsigned long long int gaji_bulan;
	int anak;
	
}karyawan[Jmlh_struct];//Deklarasi  variabel struktur

//fungsi main
int main(){
	
	//mengubah background dan ukuran windows
	system("mode con cols=175 lines=300"); 
	system("COLOR 0A");
	
	string jwb;//restart
	
	do{	
		system("CLS");//bersihkan layar
		header();//header
		
///////////////////////////////////////////////////////////////////////////////////////////////	

		char konfirm = 'y'; // konfirmasi input berulang
		int a; 				// total list input
		char pilihan_input;	// varibel inputan pilihan
		
		cout<<endl<<endl; 	
		// menginput list data karyawan ke stuktur
		for(int ulang=0; (konfirm == 'y' || konfirm == 'Y'); ulang++){
			
			cout<<"\n\n # Nomor ID Karyawan                : "<<ulang+1;
			cout<<"\n   ---------------------------------------------------------";
			cout<<  "\n   Nama Karyawan                    : ";cin.getline(karyawan[ulang].nama,30);
			cout<<  "\n   Jenis Kelamin\n   [L = Laki-Laki/P = Perempuan]    : ";pilihan_input=getch();
			if(pilihan_input=='l' || pilihan_input=='L'){
				cout<<   "Laki-Laki\n";
				strcpy(karyawan[ulang].jenis_kelamin,"Laki-Laki");
			}
			else{
				cout<<   "Perempuan\n";
				strcpy(karyawan[ulang].jenis_kelamin,"Perempuan");
			}
			cout<<  "\n   Domisili                         : ";cin.getline(karyawan[ulang].alamat,40);
			
			cout<<  "\n   Status Pernikahan\n   [Y = Menikah/T = Belum Menikah]  : ";karyawan[ulang].status_kawin=getch();
			if(karyawan[ulang].status_kawin=='y' || karyawan[ulang].status_kawin=='Y'){
				cout<<   "Menikah\n";
				cout<<"\n   Anak                             : ";cin>>karyawan[ulang].anak;				
			}
			else{
				cout<<   "Belum Menikah\n";
				karyawan[ulang].anak=0;
			}
			cout<<  "\n   Status Karyawan\n   [T = Tetap/K = Kontrak]          : ";pilihan_input=getch();
			if(pilihan_input=='t' || pilihan_input=='T'){
				cout<<   "Tetap\n";
				strcpy(karyawan[ulang].status_karyawan,"Tetap");
			}
			else{
				cout<<   "Kontrak\n";
				strcpy(karyawan[ulang].status_karyawan,"Kontrak");
			}
			cout<< "\n   Gaji Per-Bulan                   : Rp";cin>>karyawan[ulang].gaji_bulan;
			
			////////// MENGHENTIKAN PENGULANGAN JIKA MENCAPAI BATAS STRUKTUR DATA /////////////
			if(ulang==Jmlh_struct-1){
				cout<< "\n @ Data Berhasil Disimpan.";
				konfirm = 't';
				
			}
			else{
				cout<< "\n ? Data Berhasil Disimpan, Input Data Lagi[Y/T]";
				konfirm = getch();
			}
			////////////////////////////////////////////////////////////////////////////////		
			
			a = ulang;		
			cout<<"\n\n";
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		}
		
		//MENAMPILKAN DATA YANG SUDAH DIINPUT KE STRUKTUR MENGGUNAKAN TABEL
		cout<<"\n\n\n\n\n"<<setw(88)<<"Data Karyawan\n";
		cout<<setw(95)<<      "=========================\n\n";
		
		//garis atas tabel
		cout<<" ";
		for(int garis=1; garis<=166; garis++){
				cout<<"-";
		}
		cout<<"\n";
		
		//head tabel
		cout.flags(ios::left);
		cout<<" | "<<setw(3)<<"ID."<<setw(30)<<" | Nama"<<setw(18)<<" | Jenis Kelamin"<<setw(28)<<" | Domisili"<<setw(23)<<" | Status Pernikahan"<<setw(13)<<" | Anak"<<setw(21)<<" | Status Karyawan"<<setw(26)<<" | Gaji/Bulan"<<" |\n ";
	
		for(int garis=1; garis<=166; garis++){
				cout<<"-";
		}
		cout<<"\n";
		
		//konten tabel
		for(int i=0;i<=a;i++){
			cout<<" | "<<setw(3)<<i+1<<setw(3)<<" | "<<setw(27)<<karyawan[i].nama<<setw(3)<<" | "<<setw(15)<<karyawan[i].jenis_kelamin<<setw(3)<<" | "<<setw(25)<<karyawan[i].alamat;
			if(karyawan[i].status_kawin=='y' || karyawan[i].status_kawin=='Y'){
				cout<<setw(3)<<" | "<<setw(20)<<"Sudah Menikah";                                            		
			}
			else{
			cout<<setw(3)<<" | "<<setw(20)<<"Belum Menikah";																							
			}
			cout<<setw(3)<<" | "<<setw(10)<<karyawan[i].anak<<setw(3)<<" | "<<setw(18)<<karyawan[i].status_karyawan<<setw(3)<<" | "<<setw(23)<<format_rupiah(karyawan[i].gaji_bulan)<<" |"<<endl;
		}
		
		for(int sisa=Jmlh_struct-(a+1);sisa>0;sisa--){
			cout<<" | "<<setw(3)<<" "<<setw(30)<<" | "<<setw(18)<<" | "<<setw(28)<<" | "<<setw(23)<<" | "<<setw(13)<<" | "<<setw(21)<<" | "<<setw(26)<<" | "<<" |\n";
		}
		
		//garis bawah tabel
		cout<<" ";
		for(int garis=1; garis<=166; garis++){
				cout<<"-";
		}
	

//////////////////////////////////////////////////////////////////////////////////////////////		
		cout<<endl<<endl; 		 
		// Garis Bawah			
		for(int bates_bawah=1; bates_bawah<=167; bates_bawah++){
			cout<<"=";
		}
		// mencetak keterangan
		cout<<"\n Tekan Y untuk menghitung ulang.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 
	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}


