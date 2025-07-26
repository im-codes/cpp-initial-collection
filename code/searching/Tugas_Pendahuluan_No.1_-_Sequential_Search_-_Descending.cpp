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

///////////////////////////////////////////////////////////////////////////////////////////////	

//deklarasi prototif fungsi pencarian
int SeqSearch1(int Data[], int n, int x);
void mains(void) // prosedur mains/utama
{	//deklarasi variabel
	int Data[]={200,100,90,65,56,45,35,23,10,9}; //data sudah terurut
	int idx,x,i,jmlDat=10;
	
	//cetak nilai elemen pada var array
	cout<<" Elemen Array :  ";
	for(i=0;i<jmlDat;i++)cout<<Data[i]<<" ";cout<<endl;
	
	//input data yang ingin dicari
	cout<<endl<<" Masukan data yang akan dicari ?:";cin>>x;
	//beikan nilai output fungsi pencarian ke var idx
	idx=SeqSearch1(Data,jmlDat,x);	
	if(idx!=-1)	//jika idx=-1, maka data ditemukan dan cetak idx
		cout<<" Data yang dicari berada pada indek "<<idx<<endl<<endl;
	else//jika tidak, maka data tidak ditemukan
		cout<<" Data yang dicari tidak ada dalam array"<<endl<<endl;
}
//deksripsi fungsi pencarian
int SeqSearch1(int Data[],int n,int x)
{
	int i=0; //deklarasi var
	//perbandingan elemen diawal pengulangan
	while(i<n-1 && Data[i]!=x){
		i++;
	}		
	if(Data[i]==x)return i;//jika ditemukan, return i
	else return -1;	//jika tidak, return -1
}

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(67.5)<<"Tugas Pendahuluan No.1 - Sequential Search - Descending\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 


		mains();			
			
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


