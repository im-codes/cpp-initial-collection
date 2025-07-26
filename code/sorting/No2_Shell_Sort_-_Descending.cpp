#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////
//deklarasi prototif prosedur pengurutan
void ShellSort(int data[],int n);
void InsertionSort(int data[],int n, int start, int step);
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
	ShellSort(array1, n);
	//cetak data setelah pengurutan
	cout <<"\n Data Terurut        : ";
	for(i = 0; i<N; i++) {
	   cout <<array1[i]<<"  ";
	}
}
//deksripsi prosedur shell sort
void ShellSort(int data[],int n) { 
	int start,step; 
	
	for(step=5;step>=1;step-=2){ 
		for(start=0; start<=step;start++){
			InsertionSort(data,n,start,step); 
		
		}
	} 
} 

//deskripsi prosedur sisipan 
void InsertionSort(int data[],int n, int start, int step){ 
	int i,j,x; 
	bool ketemu; 
	i=start+step; 
	while(i<=n){ 
		x=data[i]; 
		j=i-step; 	
		ketemu=false; 
		
		while((j>=0) && (!ketemu)){
			if(x>data[j]){ 		
				data[j+step]=data[j]; 
				j=j-step; 
			} 
			else 	ketemu=true; 
		} 
			data[j+step]=x; 
			i=i+step; 
	} 
} 


///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(52.5)<<"Shell Sort - Descending\n";
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
