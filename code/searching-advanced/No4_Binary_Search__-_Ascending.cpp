#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#define jmlDat 8		

using namespace std;

//////////////////////////////////////////////////////////


void BinSearch(int Data[], int n, int x, int *idx);
void mains(void)
{
	int Data[jmlDat]={7,10,13,16,18,223,76,81,12},x,idx,i;
	cout<<"Elemen Array :  ";
	for(i=0;i<jmlDat;i++)cout<<Data[i]<<" ";cout<<endl;
	cout<<"Masukan data yang akan dicari ?:";cin>>x;
	BinSearch(Data,jmlDat,x,&idx);
	if(idx!=-1)cout<<"Data yang dicari berada pada indeks : "<<idx<<endl;
	else cout<<"Data yang dicari tidak ada dalam array"<<endl;
}
void BinSearch(int Data[],int n,int x, int *idx)
{
	bool ketemu = false;
	int top = n-1,bottom = 0,mid;
	while(bottom<=top && !ketemu)
	{
		mid=(top+bottom)/2;
		if(Data[mid]==x)ketemu=true;
		else 
			if(Data[mid]>x)top=mid-1;
		else bottom=mid+1;
	}
	if(ketemu) *idx=mid;
	else *idx=-1;
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(54)<<"Binary Search  - Ascending\n";
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
