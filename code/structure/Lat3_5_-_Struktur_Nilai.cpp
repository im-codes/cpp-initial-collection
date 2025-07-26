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
			cout<<setw(51.5)<<"Lat3_5 - Struktur Nilai\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//deklarasi tipe data struktur
struct NILAI
{
	long long NIM;
	char Nama[25];
	int Nilai_Tugas;
	int Nilai_UTS;
	int Nilai_UAS;
	double Nilai_Akhir;
	char Nilai_Huruf;
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
		NILAI Mahasiswa[5];
		int i, data;
		cout<<" Jumlah Mahasiswa = ";cin>>data;
		cout<<"\n # Input Data Mahasiswa";
		cout<<"\n=====================================================\n\n";
		for(i=0; i<data; i++){	
		cout<<"   + Mahasiswa "<<i+1;	
		cout<<"\n\t NIM \t\t: ";cin>>Mahasiswa[i].NIM;
		cout<<"\t Nama \t\t: ";cin>>Mahasiswa[i].Nama;
		cout<<"\t Nilai Tugas \t: ";cin>>Mahasiswa[i].Nilai_Tugas;
		cout<<"\t Nilai UTS \t: ";cin>>Mahasiswa[i].Nilai_UTS;
		cout<<"\t Nilai UAS \t: ";cin>>Mahasiswa[i].Nilai_UAS;
	
		Mahasiswa[i].Nilai_Akhir=(Mahasiswa[i].Nilai_Tugas*20/100)+(Mahasiswa[i].Nilai_UTS*35/100)+(Mahasiswa[i].Nilai_UAS*45/100);
	
		if(Mahasiswa[i].Nilai_Akhir>85&&Mahasiswa[i].Nilai_Akhir<=100)
		{
		Mahasiswa[i].Nilai_Huruf='A';
		}
		else if(Mahasiswa[i].Nilai_Akhir>70&&Mahasiswa[i].Nilai_Akhir<=85)
		{
		Mahasiswa[i].Nilai_Huruf='B';
		}
		else if(Mahasiswa[i].Nilai_Akhir>55&&Mahasiswa[i].Nilai_Akhir<=70)
		{
		Mahasiswa[i].Nilai_Huruf='C';
		}
		else if(Mahasiswa[i].Nilai_Akhir>40&&Mahasiswa[i].Nilai_Akhir<=55)
		{
		Mahasiswa[i].Nilai_Huruf='D';
		}
		else if(Mahasiswa[i].Nilai_Akhir>0&&Mahasiswa[i].Nilai_Akhir<=40)
		{
		Mahasiswa[i].Nilai_Huruf='E';
		}
		cout<<endl;
		}
		
		cout<<"\n\n # Data Nilai Mahasiswa";
		cout<<"\n====================================================="<<endl;
		for(i=0; i<data; i++)
		{
		
		cout<<"   + Mahasiswa "<<i+1;
		cout<<"\n\t NIM \t\t: "<<Mahasiswa[i].NIM<<endl;
		cout<<"\t Nama \t\t: "<<Mahasiswa[i].Nama<<endl;
		cout<<"\t Nilai Tugas \t: "<<Mahasiswa[i].Nilai_Tugas<<endl;
		cout<<"\t Nilai UTS \t: "<<Mahasiswa[i].Nilai_UTS<<endl;
		cout<<"\t Nilai UAS \t: "<<Mahasiswa[i].Nilai_UAS<<endl;
		cout<<"\t Nilai Akhir \t: "<<Mahasiswa[i].Nilai_Akhir<<endl;
		cout<<"\t Nilai Huruf \t: "<<Mahasiswa[i].Nilai_Huruf<<endl;
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


