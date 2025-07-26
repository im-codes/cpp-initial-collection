#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////



int PROSES(int A, int B);
int PROSESb(int X, int Y); 
void mains(void){		
	cout<<" A."<<endl; 
	int A, B, T; 
	A = 5; B = 2; T = 0; 
	T = PROSES(A, B); 
	cout<<" A = "<<A<<endl; 
	cout<<" B = "<<B<<endl; 
	cout<<" A + T = "<<T; 
	
	cout<<"\n\n B."<<endl; 
	int X, Y; 
	A = 5; B = 2; 
	X = 25; Y = 12; 
	T = 0; 
	T = PROSESb(A,B);
	cout<<" X = "<<X<<endl; 
	cout<<" Y = "<<Y<<endl; 
	cout<<" X + Y = " <<T; 
}
int PROSES(int A, int B){

	int T; 
	A = A*2; B = B*2; 
	T = A+B; 
	return(T); 
}
int PROSESb(int X, int Y){
	int T; 
 	T = X + Y; 
	return(T);
}


///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(52)<<"No 4. UTS - Aritmatika\n";
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
