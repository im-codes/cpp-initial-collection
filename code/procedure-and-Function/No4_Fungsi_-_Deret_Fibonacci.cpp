#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(53.5)<<"Fungsi Rekursif - Fibonacci\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//////////////////////////////////////////////////////////////////////////////////////////////	
	
//deklarasi fungsi prototif untuk mencari deret fibonacci 
int fibo(int I);
void mains(void){	//prosedur mains/utama
	//deklarasi variabel
	int R=0, F=0;
	
	//input banyaknya deret
	cout<<"\n\n Silakan Masukan Batas Deret Bilangan : ";cin>>R;
	cout<<"\n\n Deret Fibonacci";
	cout<<"\n -------------------\n\n ";

	//cetak deret dengan mencarinya dulu pada fungsi fibo
	for(F = 1; F <= R; F++)
		cout<<fibo(F-1)<<" ";
}
//desripsi fungsi fibonaci
int fibo(int I){
	
	//bagian basis, untuk menghentikan proses
	if (I == 0 || I == 1){
		return I;
	}
	//baian rekurens, untuk melanjutkan proses rekursif
	else{	// Pemanggilan fungsi diri sendiri
		return ( fibo( I - 1 ) + fibo(I - 2) );
	}

}
///////////////////////////////////////////////////////////////////////////////////////////////	
	
int main(){
	system("COLOR 0A");
	string jwb;
	do{	
		system("CLS");
		header();


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
