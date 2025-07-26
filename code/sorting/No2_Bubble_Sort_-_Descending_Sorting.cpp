#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////
//deklarasi prosedur bubble sort descending 
void BubbleSort(int array1[],int n, int  *pas);
void mains(void)
{
   int i, j,temp,pass=0;
   //data yang akan diurutkan
   int a[10] = {10,2,0,14,43,25,18,1,5,45},n=9;
   cout <<" Input list ...\n ";
   //cetak data sebelum pengurutan
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
	cout<<endl;
	//panggil prosedur pengurutan descending
	BubbleSort(a, n, &pass);
	
	//cetak data yang sudah diurutkan
	cout <<" Sorted Element List ...\n ";
	for(i = 0; i<10; i++) {
	   cout <<a[i]<<"\t";
	}
	//cetak pass yang sudah dilakukan pada proses pengurutan
	cout<<"\n Number of passes taken to sort the list:"<<pass<<endl;
	
}
		//deskripsi prosedur pengurutuan 
void BubbleSort(int array1[],int n, int *pass) 
{
	int i,k,tmp;
	//pembatas elemen kiri perbandingan nilai
	for(i=1;i<=n;i++)
	{	//elemen kanan yang akan dibandingkan
		for(k=n;k>=i;k--)
		{	
			//jika elemen k > elemen k-1
			if(array1[k]>array1[k-1])
			{//tukar nilai pada kedua elemen
				tmp=array1[k];
				array1[k]=array1[k-1];
				array1[k-1]=tmp;
			}
		}//penambahan pass dengan 1
		*pass=*pass+1;
	}
}



///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(57)<<"Bubble Sort - Descending Sorting\n";
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
