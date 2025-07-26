#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

void SeleksiMaksimum(int data[],int n); /*prototipe fungsi*/
void mains(void)
{
	int i;
	int n=9;//Index terbesar
	int data[]={20,10,32,100,60,12,70,25,45,65};
	//cetak array
	cout<<" Sebelum diurutkan :\n ";
	for(i=0;i<=n;i++)
	cout<<data[i]<<" ";
	cout<<endl;
	cout<<"_______________________________"<<endl<<endl;
	//pemanggilan prosedur
	SeleksiMaksimum(data,n); 
	cout<<" Setelah diurutkan :\n ";
	//cetak array
	for(i=0;i<=n;i++)
		cout<<data[i]<<" ";
	cout<<endl;
}	

//deskripsi prosrdur
void SeleksiMaksimum(int array1[],int n) 
{
	int i,j,tmp,imaks;
	//elemen/indeks kiri
	for(i=0;i<=n;i++)
	{
		imaks=n;
		//indeks kanan
		for(j=n-1;j>=i;j--)
		{//mencari nilai maks dari kanan
		if(array1[j]>array1[imaks])
			//nilai maksimal diisikan ke var imaks
			imaks=j;
		}
		//tukar nilai elemen/indeks kiri dengan nilai maks
		tmp=array1[imaks];
		array1[imaks]=array1[i];
		array1[i]=tmp;
	}
}


///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(63)<<"Selection Maksimum Sort - Descending Sorting\n";
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
