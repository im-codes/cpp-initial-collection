#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(55.5)<<"Fungsi - Menghitung Persamaan\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////

//deklarasi fungsi prototif
float F(float x, float y);

//deklarasi prosedur main
void mains(void){
	//deklarasi variabel
	float x,y,hasil;
	
	//intput
	cout<<" Masukan nilai x = ";cin>>x;
	cout<<"\n Masukan nilai y = ";cin>>y;
	
	// pengisian variabel hasil dengan nilai kembalian fungsi F
	hasil=F(x,y);
	
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
///////////////////////////////////////////////////////////
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
