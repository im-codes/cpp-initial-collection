#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////
//deklarasi prototif prosedur pengurutan
void InsertionSort(int array1[],int n);
void mains(void)
{	//deklrasi variabel
	int i, N=14,n=N-1;
	int array1[N] = {27,25,12,32,60,52,35,37,47,17,45,10,5,15};   
   //cetak data sebelum pengurutan
	cout <<" Data list           : ";
	for(i = 0; i<N; i++) {
		cout <<array1[i]<<"  ";
	}cout<<endl;		
	//panggil prosedur pengurutan descending
	InsertionSort(array1, n);
	//cetak data setelah pengurutan
	cout <<"\n Data Terurut        : ";
	for(i = 0; i<N; i++) {
	   cout <<array1[i]<<"  ";
	}
}
//deskripsi prosedur
void InsertionSort(int array1[],int n){ 
	int i,j,x; 	//deklarasi variabel
	bool ketemu; 	
	for(i=n-1;i>=0;i--){ //tahapan
		x=array1[i]; 
		j=i+1; 
		ketemu=false; 		
		while((j<=n) && (!ketemu)){ //pengecekan posisi
	
			if(x<array1[j]){ 	//perbandingan
				array1[j-1]=array1[j]; 	//pergeseran elemen
				j=j+1; 
			} 
			else ketemu=true; 
		} 	
		array1[j-1]=x; // penyisipan x ke indeks teraakhir digeser
			for(int o=0;o<=n;o++){
				cout<<" "<<array1[o];
			}cout<<endl;
	} 
} 

/*

		for(int g = 0; g<=9; g++) {
		cout <<array1[g]<<"  ";
		}cout<<endl;
*/
///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(64)<<"Insertion(sisipan) Selection Sort - Descending\n";
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
