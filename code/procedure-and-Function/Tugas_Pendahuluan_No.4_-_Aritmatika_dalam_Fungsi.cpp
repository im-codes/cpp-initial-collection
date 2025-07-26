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
			cout<<setw(64)<<"Tugas Pendahuluan No.4 - Aritmatika dalam Fungsi\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}
///////////////////////////////////////////////////////////////////////////////////////////////	


//deklarasi fungsi prototif
float F(float x, float y);

//deklarasi prosedur main
void mains(void){
	//deklarasi variabel
	float A,B,hasil;
	
	//intput
	cout<<" Masukan nilai A = ";cin>>A;
	cout<<"\n Masukan nilai B = ";cin>>B;
	cout<<"\n 3 x A + 2 x B \n";
	cout<<"\n 3 x "<<A<<" + 2 x "<<B<<" \n";
	
	// pengisian variabel hasil dengan nilai kembalian fungsi F
	hasil=F(A,B);
	
	//output
	cout<<"\n\n Hasil= "<<hasil;
}

//deklarasi fungsi F
float F(float A, float B){
	//deklarasi variabel
	float H;
	
	//mengisikan varaibel H dengan hasil dari operasi aritmatika 
	H=3*A+2*B;
	
	//mengembalikan nilai ke pemanggil/output	
	return H;
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


