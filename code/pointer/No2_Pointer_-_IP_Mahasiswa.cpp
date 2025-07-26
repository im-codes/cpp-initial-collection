#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

//deklarasi fungsi prototif predikat dan bobot
char predikat(int valu);
int bobot(int predikat);
void mains(void)	//prosedur mains/utama
{	//deklarasi variabel
	string mata_kuliah[8]={"Kalkulus","Fisika Dasar","PTI","Sistem Digital","PSO"
							,"Logika Matematika","Bahasa Inggris","Agama"},*Pmatkul;	
	int unsigned val[8],*Pval,total=0,Tsks=0; 
	float IP;
	int unsigned sks[8]={4,3,2,2,2,2,2,2},*Psks;
	Psks=&sks[0];
	Pmatkul=&mata_kuliah[0];
	Pval=&val[0];
	
	//input nilai
	cout<<"\n Penginputan Nilai Mahasiswa";
	cout<<"\n -------------------------------\n\n";
	cout<<setiosflags(ios::left);
	for(int i=0;i<8;i++){
		cout<<"    "<<setw(18)<<*Pmatkul++<<" : ";
		cin>>*Pval++;
	}
	
	Pmatkul=&mata_kuliah[0];
	Pval=&val[0];
	
	//output
	cout<<"\n\n\n Data Nilai Mahasiswa";
	cout<<"\n -------------------------------\n\n";
	//tabel
	cout<<"    |----|"<<setw(23)<<"------------------------"<<setw(8)<<"|-------"<<setw(11)<<"|----------"<<setw(8)<<"|-------"<<setw(7)<<"|-----|\n";
	cout<<"    | NO | "<<setw(23)<<"MATA KULIAH"<<setw(8)<<"| Nilai "<<setw(11)<<"| Predikat "<<setw(8)<<"| Bobot "<<setw(7)<<"| SKS |\n";
	cout<<"    |----|"<<setw(23)<<"------------------------"<<setw(8)<<"|-------"<<setw(11)<<"|----------"<<setw(8)<<"|-------"<<setw(7)<<"|-----|\n";
	
	//proses hitung predikat,bobot,dan IP
	for(int i=0;i<8;i++){
		
		total+=*Psks*bobot(predikat(*Pval));
		Tsks+=*Psks;
		cout<<"    |  "<<i+1<<" | "<<setw(23)<<*Pmatkul++<<"| "<<setw(6)<<*Pval<<"| ";
		cout<<setw(9)<<predikat(*Pval)<<"| "<<setw(6)<<bobot(predikat(*Pval))<<"| ";
		cout<<setw(3)<<*Psks++<<" |\n";
		*Pval++;
	}
	//akhir tabel
	cout<<"    |----|"<<setw(23)<<"------------------------"<<setw(8)<<"|-------"<<setw(11)<<"|----------"<<setw(8)<<"|-------"<<setw(7)<<"|-----|\n";
	
	//perhitungan IP
	IP=total/Tsks;
	cout<<"\n\n    IP : "<<IP;
	
	
}	
//deskripsi fungsi predikat
char predikat(int valu){
	char predikat[1];
	char *a;
	a=predikat;
	
	if(valu>=85){
		*a='A';
	} else if(valu<85 && valu>=75){
		*a='B';
	} else if(valu<75 && valu>=65){
		*a='C';
	} else if(valu<65 && valu>=55){
		*a='D';
	} else if(valu<55 && valu<=65){
		*a='E';
	}
	return *a;
}

//deskripsi fungsi bobot
int bobot(int predikat){
	int bobot;
	int *b;
	b=&bobot;
	switch (predikat){	
		case 'A':
			*b=4;
		break;
		case 'B':
			*b=3;
		break;
		case 'C':
			*b=2;
		break;
		case 'D':
			*b=1;
		break;
		case 'E':
			*b=0;
		default : 
			;
		
	}
	return *b;
	
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(52)<<"Pointer - IP Mahasiswa\n";
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
