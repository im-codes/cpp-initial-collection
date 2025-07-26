#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

void mains(void){
	int I, X,N; 
	cout<<" Program Ke 1"<<endl;
	
	I = 1; 
	while( I<= 10) 
	{  
		X = ( I - 1 )*2 + 1; 
		cout<< endl<< X ; 
		I++; 
	} 
	
	cout<<"\n\n Program Ke 2"<<endl;
	N = 35 ; X = 0; 
	while( N<= 100) 
	{  
		N = N + X; 
		cout<< endl<< N ; 
		X = X + 5; 
	}
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(48.5)<<"UAS - While\n";
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
