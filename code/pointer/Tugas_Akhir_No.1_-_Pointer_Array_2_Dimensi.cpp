#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(58.5)<<"Tugas Akhir - Pointer Array 2 Dimensi\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}
///////////////////////////////////////////////////////////////////////////////////////////////	


void  TampilNilaiPointer(char *Nbr[], int r, int c);
void mains()
{

    char huruf[2][10] = { { 'U', 'N', 'I', 'V', 'E', 'R', 'S', 'I', 'T', 'A' },
                         { 'S', '_', 'P', 'A', 'M', 'U', 'L', 'A', 'N', 'G' } };

    char *pHuruf[2];

    *pHuruf = huruf[0];

    for(int i = 0; i < 6; i++)
        (*pHuruf)[i] = huruf[0][i];

    *(pHuruf+1) = huruf[1];

    for(int i = 0; i < 6; i++)
        (*(pHuruf+1))[i] = huruf[1][i];
 
    cout<<"\n Daftar Huruf"<<endl;
    TampilNilaiPointer(pHuruf, 2, 10);

  
}
void  TampilNilaiPointer(char *nbr[], int rows, int columns)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            cout << "\n\t Indeks ke - [" << i << "][" << j << "]: " << (*(nbr+i))[j];
            
    cout<<"\n\n\n Dengan Bentuk Lain :\n\n\t ";        
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            cout <<(*(nbr+i))[j];
	
}

	

///////////////////////////////////////////////////////////////////////////////////////////////	

int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 


		mains();			
		
////////////////////////////////////////////////////////////////////////////////////////////////		
		cout<<endl<<endl; 		 
		cout<<"===========================================================\n\n";		
		// mencetak keterangan
		cout<<" Tekan Y untuk mengulang program.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban ulang/tidak
		jwb = getch();
	
	
	/*  program akan kembali ke label ulang 
       jika diinputkan y atau Y */
	if(jwb=="y" || jwb=="Y") goto ulang;
 	return 0;
}


