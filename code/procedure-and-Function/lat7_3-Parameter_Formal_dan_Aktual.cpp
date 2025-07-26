#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(56.5)<<"Parameter Formal dan Akutal - KPK\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}


             //Parameter Formal
int f_kpk(int formal_a,int formal_b){
	int kpk = formal_a;		
		while(kpk%formal_b !=0){
			kpk+=formal_a;
		}
	return kpk;
}

	
int main(){
	system("COLOR 0A");
	string jwb;
	do{	
		system("CLS");
		header();
///////////////////////////////////////////////////////////////////////////////////////////////	



		int aktual_a,aktual_b;
	
		cout<<"\n Masukan Bilangan A : "; cin>>aktual_a;
		cout<<" Masukan Bilangan B : "; cin>>aktual_b;
		
		
				                     //Parameter Aktual
		cout<<"\n\n KPK = "<<f_kpk( aktual_a , aktual_b );
	
	
	
	
	
	
	
//////////////////////////////////////////////////////////////////////////////////////////////		
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

/*

Parameter formal adalah variabel yang ada pada daftar parameter dalam definisi fungsi.  Pada  contoh  program  di  dibawah, varibel yang berada di deklarasi fungsi f_kpk
yaitu formal_a dan formal_b dinamakan sebagai parameter formal.  Adapun parameter  aktual adalah parameter (tidak selalu berupa variabel)  yang digunakkan dalam pemanggilan fungsi. 
variabel aktual_a dan aktual_b pada perintah output cout merupakan parameter aktual yang digunakan untuk memanggil fungsi f_kpk.


*/
