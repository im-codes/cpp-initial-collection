#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#define SIZE 10			//replace size to 10

using namespace std;

//////////////////////////////////////////////////////////

void cetak(int *A) 
{
	//menguraikan nilai pada array dan mencetaknya
	for(int i=0;i<=SIZE-1;i++)
		cout<<setw(3)<<A[i];
}

void cetak_elemen(int el){
	//mencetak elemen yang akan dikalikan
	cout<<"\n  Elemen = "<<el<<endl;
	
}

void kali_elemen(int *A,int el,int a)//Elemen A[el]*a
{
	//mengalikan nilai pada elemen
	A[el]*=a;
}

void rubah_array(int A[])
{	//menambahkan nilai 2 pada setiap nilai array
	for(int i=0;i<=SIZE-1;i++)
		A[i]=A[i]+2;
}

void mains(void){
	//deklarasi variabel array
	int A[SIZE]={2,4,6,3,4,2,5,6,3,2};
	
	//mencetak nilai pada array
	cetak(A);cout<<endl;
	//cetak elemen nilai elemen yang akan dikalikan
	cetak_elemen(A[2]);cout<<endl;
	
	kali_elemen(A,2,10);//Elemen A[2]*10
	//cetak hasil perkalian
	cetak(A);cout<<endl;
	//merubah nilai pada array dengan menambahkan nilai 2 kesetiap elemen
	rubah_array(A);
	//cetak hasil penjumlahan
	cetak(A);cout<<endl;
}


///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(57.5)<<"Parameter Formal - Mencetak Elemen\n";
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
