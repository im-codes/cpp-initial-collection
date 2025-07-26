#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////
//deklarasi prototif prosedur pengurutan
void BubbleSort(int array1[],int n, int  *pas);
void mains(void)
{	//deklrasi variabel
	int i, temp,pass=0,n=9;
	int a[10] = {10,40,20,60,15,4,8,100,200,25};   
   //cetak data sebelum pengurutan
	cout <<" Input list          : ";
	for(i = 0; i<=n; i++) {
		cout <<a[i]<<"  ";
	}cout<<endl;		
	//panggil prosedur pengurutan descending
	BubbleSort(a, n, &pass);
	//cetak data setelah pengurutan
	cout <<"\n Sorted Element List : ";
	for(i = 0; i<=n; i++) {
	   cout <<a[i]<<"  ";
	}
	cout<<"\n\n Pass yang dilakukan : "<<pass<<endl;	
}
//deskripsi prosedur
void BubbleSort(int array1[],int n, int *pass) 
{	//deklrasi variabel
	int i,k,tmp;
	//pergeseran elemen ke kanan, memisahkan data yg sudah urut
	for(i=1;i<=n;i++)
	{	//pergeseran ke kiri, mengurutkan data yang belum urut
		for(k=n;k>=i;k--) 
		{	//membandingkan elemen k dengan k-1
			if(array1[k]>array1[k-1])
			{	//pertukaran nilai elemen
				tmp=array1[k];
				array1[k]=array1[k-1];
				array1[k-1]=tmp;
			}
		}
		
		*pass=*pass+1;	//pass yang dilakukan 
	}
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(53)<<"Bubble Sort - Descending\n";
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
		//panggil mains
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
