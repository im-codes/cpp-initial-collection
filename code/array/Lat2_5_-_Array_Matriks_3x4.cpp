#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(54.5)<<"Lat2_5 - Array Matriks 3x4\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 
///////////////////////////////////////////////////////////////////////////////////////////////	
	
		int A[3][4]= {{1,3,4,5},{2,4,6,8},{3,5,7,9}};
		
		cout<<"\n Array 2 Dimensi :";
		cout<<"\n\n    int A[3][4]= {{1,3,4,5},{2,4,6,8},{3,5,7,9}};";		
		cout<<"\n\n\n Matriks :";
		cout<<"\n\n    ---------------------\n";	
		for(int x=0; x<3; x++){
			
			
			if(x==0){
				cout<<"    | ";
			}
			else{
				cout<<"    | ";
			}
			
			for(int y=0; y<4; y++){
				cout<<A[x][y]<<"  ";
				
				
				cout<<"| ";
			}
			cout<<endl;
			cout<<"    ---------------------\n";
		}
//////////////////////////////////////////////////////////////////////////////////////////////		
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


