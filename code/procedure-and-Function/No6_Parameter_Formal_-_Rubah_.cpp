#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#define N_Baris 5
#define N_Kolom 2

using namespace std;

//////////////////////////////////////////////////////////

// deklarasi prosedur prototif
void cetak(int A[][N_Kolom]);
void Rubah_data(int array[][N_Kolom]);
void mains(void)
{	//deklarasi variabel array 2 dimensi
	int data[N_Baris][N_Kolom]=
	{
		{23,77},
		{33,41},
		{20,21},
		{20,55},
		{67,78}
	};
	//cetak matrik awal
	cetak(data);
	cout<<endl;
	//ubah data matrik
	Rubah_data(data);
	//cetak matrikyang sudah diubah
	cetak(data);
	cout<<endl;
}
void Rubah_data(int array[][N_Kolom])
{	//mengisikan setiap elemen dengan 0
	int i,j;
	for(i=0;i<N_Baris;i++) {
		for(j=0;j<N_Kolom;j++) 
			array[i][j]=0;
	}
}

void cetak(int A[][N_Kolom])
{	//menguraikan nilai pada array dan mencetaknya
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(55.5)<<"Parameter Formal - Rubah Data\n";
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
