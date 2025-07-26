#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

void mains(void)
{
	//Deklarasi Variabel Array 2 dimensi
	char A[3][6]=
	{'M','.','I','R','F', 
	'A','N',' ','M','A', 
	'U','L','A','N','A'};   
	
	//variabel pointer
	char *G; 	
	
	//menunjuk alamat
	G=A[0]; 
	cout<<" ";
	
	//proses pengulangan
	for(int i=0;i<=14;i++) 
	
		//menambahkan alamat pointer yang menunjuk pada 
		//variabel A
		cout<<*G++; 


}	

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(48)<<"Pointer - Char\n";
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
