#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

void header(){
	cout<<endl;
			cout<<setw(52)<<"Nested IF - Ganjil Genap\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("color 0a");
	header();
	
	int batas;
	cout<<"\n  Batas Bilangan : "; cin>>batas;
	
	
	cout<<"\n  Ganjil         : ";
	
	/* untuk no yg berisi 1, selama nomor 
	 kurang/sama dari 35, nomor akan ditambah 1 
	 dan menjalankan perintah berikut */
	for(int no=1; no<=batas; no++){
		
		/* bil ganjil akan tersisa 1 jika
		 dibagi 2 */
		if (no % 2 == 1){
			
			// jika no adalah 9
			if(no==9){
				
				// cetak angka no
				cout<<no<<"  ";
			} // jika no bukan angka 9
			else{
				
				// cetak angka no
				cout<<no<<" ";
			}			
		}		
	}
	
	cout<<"\n  Genap          : ";
	
	/* untuk no yg berisi 1, selama no 
	 kurang/sama dari 35, no akan ditambah 1 
	 dan menjalankan perintah berikut */
	for(int no=1; no<=batas; no++){
		/* bil genap akan tersisa 0 jika
		 dibagi 2 */
		if (no % 2 == 0){
			// cetak no
			cout<<no<<" ";
				
		}		
	}
	
	getch();
	return 0;
}
