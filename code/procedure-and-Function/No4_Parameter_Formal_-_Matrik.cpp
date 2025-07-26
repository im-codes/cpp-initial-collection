#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#define SIZE 10			//replace size to 10

using namespace std;

//////////////////////////////////////////////////////////

//deklarasi prosedur cetak
void cetak(int *A){
	//mencetak nilai pada pada array
	for(int i=0;i<=SIZE-1;i++)
		cout<<setw(3)<<A[i];
}

void jumlah(int *A,int *B){
	//deklarasi variabel hasil penjumlahan
	int C[SIZE];
	//operasi penjumlahan 2 buah matrik pada array
	for(int i=0;i<=SIZE-1;i++)
		C[i]=A[i]+B[i];
	//mencetak hasil	
	cetak(C);
}

void mains(void){
	//deklarasi variabel matrik a dan b
	int A[SIZE]={2,4,6,3,4,2,5,6,3,2};
	int B[SIZE]={1,3,5,7,2,2,4,6,3,1};
	
	//cetak matrik A
	cout<<" Metrik A   : ";
	cetak(A);cout<<endl; 
	//cetak matrik B
	cout<<" Metrik B   : ";
	cetak(B);cout<<endl;
	
	//Jumlahkan matrik
	cout<<" Metrik A+B : ";
	jumlah(A,B);cout<<endl; 
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(53.5)<<"Parameter Formal - Matrik\n";
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
