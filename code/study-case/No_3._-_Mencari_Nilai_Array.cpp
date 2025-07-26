#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

void mains(void)
{		
	
	int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19}, //varibel data tempat pencarian
	jml_elmnA=11 , //jumlah elemen pada array A
	i=0, //kode akses elemen
	x,	//nilai yang ingin dicari
	ktemu=0,	//tanda jika nilai ditemukan ktemu =1, jika tidak 0
	jumlh_nilai=0;
	
	//input nilai
	cout<<" Masukan Nilai : ";cin>>x;
	
	//mencari nilai di setiap elemen array
	while(i<jml_elmnA){
		//jika ditemukan, ktemu=1
		if(A[i]==x){
			//jumlah nilai dielemen
			jumlh_nilai++;
			ktemu=1;
		}
		i++;		
	}
	
	//cetak FOUND jika ditemukan, jika tidak Not FOUND
	if(ktemu==1){
		cout<<"\n FOUND";
		cout<<"\n Jumlah Nilai : "<<jumlh_nilai;
		//mencari lokasi elemen
		cout<<"\n Lokasi Elemen Nilai : ";
		int lokasi=0;
		while(lokasi<jml_elmnA){
			if(A[lokasi]==x){
				cout<<lokasi<<" ";	
			}
			lokasi++;		
		}
		
	}
	else{
		cout<<"\n NOT FOUND";
	}

}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(56.5)<<"No 3. UTS - Mencari Nilai Array\n";
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
