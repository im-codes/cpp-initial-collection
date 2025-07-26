#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(52.5)<<"Structure - Data Karyawan\n";
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

struct karyawan_str{
	char nama[30], status;
	long long int gaji_bulan,anak=0;
			
}karyawan[10];

int main(){
	system("mode con cols=176 lines=58");
	system("COLOR 0A");
	string jwb;
	do{	
		system("CLS");
		header();
///////////////////////////////////////////////////////////////////////////////////////////////	

		char konfirm = 'y';
		int a;

		for(int ulang=1; (konfirm == 'y' || konfirm == 'Y'); ulang++){
			cout<<"\n\n Nama Karyawan                                     : ";cin.getline(karyawan[ulang].nama,30);
			cout<<" Gaji Per-Bulan                                    : Rp";cin>>karyawan[ulang].gaji_bulan;
			cout<<" Status Perkawinan[y = Menikah/t = Belum Menikah ] : ";karyawan[ulang].status=getch();
			if(karyawan[ulang].status=='y' || karyawan[ulang].status=='Y'){
				cout<<"Menikah\n";
				cout<<" Anak                                              : ";cin>>karyawan[ulang].anak;				
			}
			else{
				cout<<"Belum Menikah";
			}
			cout<<"\n Data Berhasil Disimpan, Input Data Lagi[Y/T]";
			konfirm = getch();
			a = ulang;		
			cout<<"\n\n";
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		}
		cout<<"\n\n Data Karyawan\n";
		cout<<"----------------------------------------------------------------------------------------------------------\n";
		cout.flags(ios::left);
		cout<<" "<<setw(5)<<"No."<<setw(25)<<"Nama"<<setw(20)<<"Gaji/Bulan"<<setw(25)<<"Statur Perkawinan"<<setw(10)<<"Anak";
		cout<<"\n----------------------------------------------------------------------------------------------------------\n";
		
		for(int i=1;i<=a;i++){
			cout<<" "<<setw(5)<<i<<setw(25)<<karyawan[i].nama<<setw(20)<<format_rupiah(karyawan[i].gaji_bulan);
			if(karyawan[i].status=='y' || karyawan[i].status=='Y'){
				cout<<setw(25)<<"Sudah Menikah";                                            		
			}
			else{
			cout<<setw(25)<<"Belum Menikah";
			}
			cout<<setw(10)<<karyawan[i].anak<<endl;
		}

	

//////////////////////////////////////////////////////////////////////////////////////////////		
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


