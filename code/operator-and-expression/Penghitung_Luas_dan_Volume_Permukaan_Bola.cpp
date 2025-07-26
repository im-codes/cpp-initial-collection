#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>
using namespace std;
void header(){
	cout<<endl;
			cout<<setw(50)<<"Luas & Volume Bola\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

	
int main(){
	// mengubah warna background dan huruf
	system("COLOR 0A");
	
	
	
	// jawaban hitung ulang atau tidak
	string jwb;
	
	/* program akan menghitung ulang selama jawaban yang
	diinputkan y atau Y pada akhir pengulangan 	*/
	do{	
		// untuk mereset layar pada saat hitung ulang
		system("CLS");
		header();
		
		const float PI = 3.14;
		float r=0,V=0,L=0;
		
		cout<<"\n\n Masukan Jari-Jari Bola : ";cin>>r;
		
		V = 1.3333333333333333333333333333333 * PI * pow(r,3);
		L = 4 * PI * pow(r,2);
		
		cout<<"\n\n Volume Permukaan Bola  = "<<V;
		cout<<"\n Luas Permukaan Bola    = "<<L;
		
		cout<<"\n\n===========================================================\n\n";
		
		// mencetak keterangan
		cout<<"Tekan Y untuk menghitung ulang.\n";
		cout<<"Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 
	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}

