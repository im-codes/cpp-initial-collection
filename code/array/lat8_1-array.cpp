#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks

	
using namespace std;

// HEADER
void header(){
	cout<<endl;
			cout<<setw(52)<<"PERKALIAN 2 BUAH MATRIKS\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}


int main(){
	system("color 0a");
	string jwb;
	do {
		system("CLS");
		header();
		int a1[2],b1[2],temp=-1; // Source code pengambil jumlah kolom dan baris
		char pil; // Source code membuat pilihan mengulang atau berkhir
		ulang: // Source code pilihan mengulang
		// AlurMemasukkan jumlah baris dan kolom matrik
		
		cout<<"\n\n\n";
		for (char u='A'; u<='B'; u++){
			temp+=1;
			cout<<"  Masukan baris matrik "<<u<<" : "; cin>>a1[temp];
			cout<<"  Masukan kolom Matrik "<<u<<" : "; cin>>b1[temp];
			cout<<endl;
		}
		
		if(b1[0]==a1[1]){
			cout<<" ";
			for(int bates_atas=1; bates_atas<=78; bates_atas++){
				cout<<"-";
			}	
			
			int AA [a1[0]][b1[0]]; //Input jumlah kolom dan barismatrik A
			int BB [a1[1]][b1[1]]; // Input jumlah kolom dan baris Matrik B
			int hasil[a1[0]][b1[1]]; // Hasil Perkalian Matrik
			//Memasukkan angka Array A
			cout<<"\n\n\n\n  Masukkan angka array A\n";
			cout<<"  ";
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
			// Memasukkan angka Array B
			
			cout<<"\n\n  Masukkan angka array B\n";
			cout<<"  ";
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
			//Proses Perhitungan
			for(int i=0; i<a1[0]; i++){
				for (int c=0;c<b1[1];c++){
					hasil [i][c] = (AA[i][0] * BB[0][c] )+( AA[i][1] * BB[1][c]); 
				}
			}
			
			cout<<" ";
			for(int bates_atas=1; bates_atas<=78; bates_atas++){
				cout<<"-";
			}	
			
			cout<<"\n\n\n\n  Hasil Perkalian Matrik A dan B adalah : \n";
			cout<<"  ";
			for(int bates_atas=1; bates_atas<=40; bates_atas++){
				cout<<"-";
			}	
			cout<<endl;
			
			
			//Memampilkan hasil Perkalian Matrik
			for(int i=0; i<a1[0]; i++){	
				cout<<"  -------------\n";
				cout<<" ";			 
				for (int c=0;c<b1[1];c++){
					
					cout<<" | "<<hasil[i][c]; 
				}
				cout<<" |"<<endl;
			}
			cout<<"  -------------";
			cout<<"\n\n\n  ATAU\n";
			for(int i=0; i<a1[0]; i++){
				cout<<endl;
				for (int c=0;c<b1[1];c++){
				 	cout<<"  ["<<i+1<<"]["<<c+1<<"] = "<<hasil[i][c]<<endl;
				}
			}
		}
		else {
			//Menanyakan Pilihan
			cout<<"  Kolom Matrik A harus sama dengan Baris Matrik B";
			cout<<"\n  Ulangi..? (Y/N) : "; cin>>pil;
			if (pil=='Y'||pil=='y'){
				goto ulang;
			}
		 }
	
		cout<<"\n ";
		for(int bates_atas=1; bates_atas<=78; bates_atas++){
				cout<<"-";
			}	
		cout<<"\n\n";
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();	
	 
	}
	while(jwb=="y" || jwb=="Y");
	
	return 0;
}


/*

Program menggunakan array berdimensi 1 dan 2 yang berfungsi untuk menghitung perkalian dari dua buah matriks. Matriks adalah susunan bilangan, simbol, atau karakter yang disusun 
atas baris dan kolom seperti bangun persegi. Bilangan, simbol atau karakter didalam matriks disebut dengan elemen dari matriks.Perkalian matriks adalah perkalian yang melibatkan 
suatu matriks atau susunan bilangan berupa kolom dan angka, serta memiliki memiliki sifat-sifat tertentu.Syarat dua matriks dapat dioperasikan perkalian yaitu banyak kolom matriks
pertama harus sama dengan banyak baris matriks kedua. program akan meminta jumlah ordo dan bilangan dari kedua matriks dimana ordo matriks digunakan untuk menentukan lokasi memori 
pada array 2 dimensi dan bilangan-bilangan dalam elemen matriks disimpan di dalam array 2 dimensi kemudian mengalikannya menggunakan perintah pengulangan FOR berdasarkan rumus 
perkalian matriks.


*/
