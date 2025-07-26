#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;

//////////////////////////////////////////////////////////
//prosedur prototif perkalian matrik
				//-------------------------parameter masukan----------------------------------//	//parameter keluaran
void kali_matrik(const int baris_a[],const int kolom_b[], int matrik_a[][20], int matrik_b[][20], int matrik_hasil[][20]);
void mains(void) //prosedur mains/utama
{	
	ulang: 									// label ulang jika baris dan kolom tidak sama
	int a1[2]={0,0},b1[2]={0,0},temp=-1;	// banyaknya elemen pada array matrik
	char pil;								// jawaban user, ulang/tidak
	int AA [20][20]; 						// Input jumlah kolom dan baris matrik A
	int BB [20][20]; 						// Input jumlah kolom dan baris Matrik B
	int hasil[20][20]; 						// Hasil Perkalian Matrik
	
	
	// input jumlah baris dan kolom matrik
	cout<<"\n\n\n";
	for (char u='A'; u<='B'; u++){
		temp+=1;
		cout<<"  Masukan baris matrik "<<u<<" : "; cin>>a1[temp];
		cout<<"  Masukan kolom Matrik "<<u<<" : "; cin>>b1[temp];
		cout<<endl;
	}
	
	//jalankan jika baris dan kolom kedua matrik sama
	if(b1[0]==a1[1]){
		cout<<" ";
		//garis
		for(int bates_atas=1; bates_atas<=78; bates_atas++){
			cout<<"-";
		}		
		
		//Memasukkan angka Array A(matriks A)
		cout<<"\n\n\n\n  Masukkan angka array A\n";
		cout<<"  ";
		//garis
		for(int bates_atas=1; bates_atas<=35; bates_atas++){
			cout<<"-";
		}	
		cout<<endl;
		
		for(int i=0; i<a1[0]; i++){
			for (int c=0;c<b1[0];c++){
				 cout<<"  A ["<<i+1<<"]["<<c+1<<"] = ";
				 cin>>AA[i][c]; 
			}
			cout<<endl;
		}
		
		// Memasukkan angka Array B(Matriks B)		
		cout<<"\n\n  Masukkan angka array B\n";
		cout<<"  ";
		//garis
		for(int bates_atas=1; bates_atas<=35; bates_atas++){
			cout<<"-";
		}	
		cout<<endl;
		for(int i=0; i<a1[1]; i++){
			for (int c=0;c<b1[1];c++){
				cout<<"  B ["<<i+1<<"]["<<c+1<<"] = ";
				cin>>BB[i][c];
			}
			cout<<endl;
		}
		
		//pemanggilan prosedur untuk menghitung perkalian matrik
		kali_matrik(a1, b1, AA, BB, hasil);
		
		
		cout<<" ";
		//garis
		for(int bates_atas=1; bates_atas<=78; bates_atas++){
			cout<<"-";
		}	
		
		//output hasil
		cout<<"\n\n\n\n  Hasil Perkalian Matrik A dan B adalah : \n";
		cout<<"  ";
		//garis
		for(int bates_atas=1; bates_atas<=40; bates_atas++){
			cout<<"-";
		}	
		cout<<endl;
		
		
		//Memampilkan hasil Perkalian Matrik ke layar
		//tampilan dalam tabel
		for(int i=0; i<a1[0]; i++){	
			cout<<"  -------------\n";
			cout<<" ";			 
			for (int c=0;c<b1[1];c++){
				
				cout<<" | "<<hasil[i][c]; 
			}
			cout<<" |"<<endl;
		}
		//tampilan terpisah
		cout<<"  -------------";
		cout<<"\n\n\n  ATAU\n";
		for(int i=0; i<a1[0]; i++){
			cout<<endl;
			for (int c=0;c<b1[1];c++){
			 	cout<<"  ["<<i+1<<"]["<<c+1<<"] = "<<hasil[i][c]<<endl;
			}
		}
	}
	//jika kolom dan baris tidak sama, jalankan konfirmasi ulang/tidak ke user
	else {
		//Menanyakan Pilihan
		cout<<"  Kolom Matrik A harus sama dengan Baris Matrik B";
		cout<<"\n  Ulangi..? (Y/N) : "; cin>>pil;
		if (pil=='Y'||pil=='y'){
			goto ulang;
		}
	}
	
}	

//deksripsi prosedur untuk perkalian matrik
void kali_matrik(const int baris_a[],const int kolom_b[], int matrik_a[][20], int matrik_b[][20], int matrik_hasil[][20]){	
	//Proses Perhitungan
	for(int i=0; i<baris_a[0]; i++){
		for (int c=0;c<kolom_b[1];c++){
			matrik_hasil[i][c] = (matrik_a[i][0] * matrik_b[0][c] )+( matrik_a[i][1] * matrik_b[1][c]); 
		}
	}
}


///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(58.25)<<"Fungsi - Perkalian Dua Buah Matriks\n";
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
		
		//panggil prosedur mains
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
