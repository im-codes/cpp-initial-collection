#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

#define MaxS 10 

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////	

struct Stack 
   { 
      char Isi [MaxS] ; 
      unsigned int Top; 
   }; 
void INITS (Stack &S) ; 
void PUSH (Stack &S, char Data) ; 
void CETAK (Stack S) ; 
void POP (Stack &S, char &Hsl) ; 

void mains(){
char huruf ; 
   Stack S; 
   INITS (S) ; 
   cout<<" Masukan Karakter :"; 
   cin>>huruf ; 
   PUSH(S, huruf); 
   cout<<" Masukan Karakter :"; 
   cin>>huruf ; 
   PUSH(S, huruf); 
   cout<<" Masukan Karakter :"; 
	cin>>huruf ; 
   PUSH(S, huruf); 
   CETAK (S); 
   POP (S, huruf); 
   cout<<endl<<" Yang Dihapus ........."<<huruf; 
   CETAK (S) ; 
	cout<<endl<<endl; 
   cout<<endl<<" Masukan Karakter :"; 
   cin>>huruf ; 
   PUSH(S, huruf); 
   cout<<" Masukan karakter :"; 
   cin>>huruf; 
   PUSH(S, huruf); 
   cout<<" Masukan karakter :"; 
   cin>>huruf; 
   PUSH(S, huruf); 
   CETAK (S) ; 
   POP (S, huruf); 
   cout<<endl<<" Yang Dihapus .........."<<huruf; 
   CETAK (S) ; 
  
} 

void INITS (Stack &S) 
{ 
 S.Top = 0; 
} 
void PUSH (Stack &S, char Data) 
{ 
   if (S.Top <MaxS) 
   { 
      S.Top++; 
      S.Isi [S.Top] = Data; 
   } 
   else 
      cout<<" Stack penuh.........."; 
} 
void CETAK (Stack S) 
{ 
   int i; 
   cout<<endl<<" Isi Stack : "; 
   if (S.Top != 0) 
   { 
 for(i=1;i<=S.Top;i++) 
   { 
         cout<<S.Isi [i]; 
      } 
   } 
   else 
      cout<<" Stack Kosong ….."; 
} 
void POP (Stack &S, char &Hsl) 
{ 
   if (S.Top !=0) 
   { 
      Hsl = S.Isi [S.Top]; 
      S.Top--; 
 } 
   else 
      cout<<" Stack Kosong….."; 
} 
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(47.5)<<"Lat11_1 - Stack\n";
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


