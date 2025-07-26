#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(64.5)<<"Parameter Masukan/Keluaran -  Tukar dan Selisih\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//////////////////////////////////////////////////////////

//deklarasi prototif prosedur
void tukar(int * ,int * );

//fungsi main/utama
void konten_utama(){
	//deklarasi variabel lokal fungsi main
	int X,Y,Z;
	
	//input
	cout<<" Masukan Nilai X = ";cin>>X;
	cout<<"\n Masukan Nilai Y = ";cin>>Y;
	if(X<Y)
	//pemanggilan prosedur mengguanakan parameter aktual
		tukar(&X,&Y);
		
	Z=X-Y;
	//output
	cout<<"\n\n Nilai Z(selisih dari X dan Y) = "<<Z;
	
	
}

//deskripsi fungsi prosedur
//parameter formal masukan/keluaran
void tukar(int *A,int *B){
	//deklarasi variabel lokal
	int tmp;
	
	//memberi nilai ke variabel lokal dari parameter formal masukan prosedur
	// yang sudah diisikan oleh parameter aktual fungsi main
	tmp=*A;
	
	/*memberi nilai kepada varibel pointer yang merunjuk ke 
	   variabel aktual  fungsi main*/
	*A=*B;
	*B=tmp;

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

		konten_utama();	
	
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
