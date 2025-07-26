#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

//deklarasi prototif fungsi pencarian
int SeqSearch2(int Data[], int n, int x);
void mains(void) // prosedur mains/utama
{	//deklarasi variabel
	int Data[]={23,56,10,90,35,45,9,100,200,65};
	int idx,x,i,jmlDat=10;
	
	//cetak nilai elemen pada var array
	cout<<" Elemen Array :  ";
	for(i=0;i<jmlDat;i++)cout<<Data[i]<<" ";cout<<endl;
	
	//input data yang ingin dicari
	cout<<endl<<" Masukan data yang akan dicari ?:";cin>>x;
	//beikan nilai output fungsi pencarian ke var idx
	idx=SeqSearch2(Data,jmlDat,x);	
	if(idx!=-1)	//jika idx=-1, maka data ditemukan dan cetak idx
		cout<<" Data yang dicari berada pada indek "<<idx<<endl<<endl;
	else//jika tidak, maka data tidak ditemukan
		cout<<" Data yang dicari tidak ada dalam array"<<endl<<endl;
}
//deksripsi fungsi pencarian
int SeqSearch2(int Data[],int n,int x)
{	//deklarasi var
	int i=0;
	bool find=false;
	
	//perbandingan elemen didalam pengulangan
	while(i<n && !find){ 
	 if(Data[i]==x)find=true; 
	 else i++; 
 	} 	
 	
	if(find) return i;//jika ditemukan, return i
	else return -1;	//jika tidak, return -1
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(54.5)<<"Sequential Search - Versi 2\n";
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
