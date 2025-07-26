#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#define jmlDat 8		

using namespace std;

//////////////////////////////////////////////////////////

//deklarasi prototif fungsi pencarian
int BinSearch(int Data[], int n, int x);
void mains(void)	//prosedur mains/utama
{	//deklarasi variabel-variabel
	int Data[jmlDat]={7,10,13,16,18,21,76,81},x,idx,i;
	
	//cetak nilai pada setiap elemen ke layar
	cout<<"Elemen Array :  ";
	for(i=0;i<jmlDat;i++)cout<<Data[i]<<" ";cout<<endl;
	
	//input nilai yang ingin dicari 
	cout<<"Masukan data yang akan dicari ?:";cin>>x;
	
	//berikan idx output dari fungsi BinSearch, fungsi pencarian
	idx=BinSearch(Data,jmlDat,x);
	
	//cek apakan nilai ditemukan/tidak
	if(idx!=-1)cout<<"Data yang dicari berada pada indeks : "<<idx<<endl;
	else cout<<"Data yang dicari tidak ada dalam array"<<endl;
}
//deskripsi fungsi untuk pencarian
int BinSearch(int Data[],int n,int x)
{	//deklarasi variabel 
	bool ketemu = false;
	int top = n-1,bottom = 0,mid;
	while(bottom<=top && !ketemu)
	{
		mid=(top+bottom)/2;	//menentukan elemen tengah
		//proses perbandingan didalam pengulangan
		if(Data[mid]==x)ketemu=true;
		else 
			if(Data[mid]>x)top=mid-1;//pencarian elemen bagian kiri jika x < nilai tengah
		else bottom=mid+1; //pencarian elemen bagian kanan jika  nilai tengah < x 
	}
	if(ketemu) return mid; //jika ditemukan, return i
	else return -1; //jika tidak, return -1

}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(54)<<"Binary Search  - Versi 2\n";
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
