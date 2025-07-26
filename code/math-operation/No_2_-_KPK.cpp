#include <iostream>
#include <unistd.h>
#include <stdlib.h>	// Untuk mengubah warna background dan huruf
#include <conio.h>	

using namespace std;

int main(){
	string jwb;
	do{
		system("cls");	
		long long bilanganA,bilanganB,kelipatanA = 0,kelipatanB = 0,kpk = 0;
		long long listkelipatanA[99999],listkelipatanB[99999];
		int carikelipatanA,carikelipatanB;
		int jumlahkelipatan = 0;
		
		cin>>bilanganA;
		cin>>bilanganB;
		
		
		// mengulang perintah selama kpk masih 0
		while(kpk == 0){	
			
			// menghitung kelipatan
			kelipatanA = kelipatanA + bilanganA;
			kelipatanB = kelipatanB + bilanganB;
			
			// mengisikan kelipatan ke array untuk didaftar
			listkelipatanA[jumlahkelipatan] = kelipatanA;
			listkelipatanB[jumlahkelipatan] = kelipatanB;
			
		
			cout<<"kelipatan A : "<<kelipatanA<<" kelipatan B : "<<kelipatanB<<endl;
			
			// mencari kpk di array dengan menyamakan
			// daftar kelipatan A dengan 
			int o = 0;
		
			// selama pencarian di daftar kelipatan A pada array belum habis
			// program akan terus mengulang perintah
			while(o<=jumlahkelipatan && kpk == 0){
				
				// mengisikan carikelipatanA dengan 
				// nilai suatu elemen array			
				carikelipatanA = listkelipatanA[o];
				o++;
						
				// selama pencarian di daftar kelipatan B pada array belum habis
				// program akan terus mengulang perintah		
				int k = 0;
				while(k<=jumlahkelipatan && kpk == 0){
					carikelipatanB = listkelipatanB[k];
					k++;
					
					//jika nilai pada daftar kelipatan A dan B ada yang sama,
					// maka variabel kpk akan diisikan nilai tersebut
					cout<<"Mencocokan Kelipatan A "<<o<<" : "<<carikelipatanA<<" Dengan Kelipatan B "<<k<<" : "<<carikelipatanB<<endl;
					if(carikelipatanA == carikelipatanB){
						cout<<"Kelipatan A ke "<<o<<" sama dengan Kelipatan B ke "<<k<<endl<<endl;
						kpk = carikelipatanA;
											
					}else{
						cout<<"Kelipatan Tidak Sama"<<endl<<endl;
					}
					system("CLS");
				}
			}
			
			// jumlah kelipatan ditambah 1
			jumlahkelipatan++;
		}
		cout<<kpk<<endl;
		cout<<"\n Tekan <Y> Untuk Mereset Program\n Tekan Apa Saja Untuk Menutup Program.";
		jwb=getch();
		
	} while(jwb == "y" || jwb == "Y");
	return 0;
}
