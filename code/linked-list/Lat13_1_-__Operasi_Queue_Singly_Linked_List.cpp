#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	     // fungsi karakter
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////	

typedef struct node *simpul ; 
struct node 
   { 
      char Isi ; 
      simpul Next ; 
   }; 
//====================== 
//==Prototype Function===== 
//====================== 
void Sisip_Belakang (simpul &L, char elemen ) ; 
void Hapus_Depan (simpul &L); 
void Cetak (simpul L); 

void mains(void){

   char huruf ; 
   simpul L = NULL; //Pastikan bahwa L kosong 
   int i; 

   //===================== 
   //==Sisip Belakang======== 
   //===================== 
   cout<<"\n # Penyisipan Simpul\n\n"; 
   for(i=1; i<=3;i++) 
   { 
      cout<<"\tMasukan Huruf  : "; 
      cin>>huruf; 
      Sisip_Belakang (L, huruf); 
   } 
   Cetak (L) ; 
   
   //====================== 
   //==Hapus simpul Depan==== 
   //====================== 
   cout<<"\n # Hapus Simpul"; 
   Hapus_Depan (L) ; 
   Cetak(L) ; 
   cout<<"\n # Hapus Simpul"; 
   Hapus_Depan ( L ) ; 
   Cetak (L) ; 
   cout<<"\n # Hapus Simpul";
   Hapus_Depan (L) ; 
   Cetak(L) ; 
   
   
   cout<<"\n # Penyisipan Simpul\n\n"; 
   for(i=1; i<=3;i++) 
   { 
      cout<<"\tMasukan Huruf  : "; 
      cin>>huruf; 
      Sisip_Belakang (L, huruf); 
   } 
   Cetak (L) ; 
   
   cout<<"\n # Hapus Simpul"; 
   Hapus_Depan (L) ; 
   Cetak(L) ; 
   cout<<"\n # Hapus Simpul"; 
   Hapus_Depan ( L ) ; 
   Cetak (L) ; 
   
  
} 
//************************************* 
//**FUNCTION SISIP SIMPUL DI BELAKANG**** 
//************************************* 
void Sisip_Belakang (simpul &L, char elemen) 
{ 
   simpul bantu, baru; 
   baru = (simpul) malloc (sizeof(simpul)+10); 
   baru-> Isi = elemen; 
   baru -> Next = NULL; 
   if (L == NULL) 
      L= baru; 
   else 
   { 
 bantu =L;
 
   while (bantu->Next != NULL) 
         bantu =bantu->Next;    
      bantu->Next=baru; 
 } 
} 
//**************************************** 
//**FUNCTION MENCETAK ISI LINKED LIST******* 
//**************************************** 
void Cetak (simpul L) 
{ 
   simpul bantu; 
   if(L==NULL) 
      cout<<"\tLinked List Kosong..........\n"; 
   else 
   { 
      bantu=L; 
      cout<<"\tIsi Linked List  :  "; 
      while (bantu->Next != NULL) 
      { 
         cout<<bantu->Isi<<"->"; 
         bantu=bantu->Next; 
      } 
      cout<<bantu->Isi; 
 } 
 cout<<endl<<endl; 
} 
//************************************* 
//**FUNCTION HAPUS SIMPUL DEPAN******** 
//************************************* 
void Hapus_Depan  (simpul &L) 
{ 
   simpul Hapus; 
   if(L==NULL) 
      cout<<"\tLinked List Kosong..........\n"; 
   else 
   { 
      Hapus=L; 
      L = L->Next; 
      Hapus->Next = NULL; 
      free(Hapus); 
   } 
   cout<<endl<<endl; 
}  
 //=========================eof======================== 
            

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(61.5)<<"Lat13_1 -  Operasi Queue Singly Linked List\n";
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


