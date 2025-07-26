#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////


void SeqSearch1(int Data[], int n, int x, bool *ketemu);
void mains(void)
{
	int Data[]={23,56,10,90,35,45,9,100,200,65};
	int x,i,jmlDat=10;bool ketemu;
	cout<<" Elemen Array :  ";
	for(i=0;i<jmlDat;i++)cout<<Data[i]<<" ";cout<<endl;
	cout<<"\n Masukan data yang akan dicari ?:";cin>>x;
	SeqSearch1(Data,jmlDat,x,&ketemu);
	if(ketemu!=false)
		cout<<" Data yang dicari ditemukan"<<endl<<endl;
	else
		cout<<" Data yang dicari tidak ada dalam array"<<endl<<endl;
}
void SeqSearch1(int Data[],int n,int x, bool *ketemu)
{
	int i=0;
	while(i<n-1 && Data[i]!=x)i++;
	if(Data[i]==x)*ketemu=true;
	else *ketemu=false;
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(60.5)<<"Sequential Search - Pembandingan Elemen\n";
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
