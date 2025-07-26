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
void header(){
	cout<<endl;
			cout<<setw(54)<<"Lat10_1 - Singly Linked List\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}


typedef struct node *simpul; 
struct node 
   { 
      char Isi; 
      simpul Next; 
   }; 
   
//===================== 
//==Prototype Function= 
//===================== 
void Sisip_Depan (simpul &L, char elemen ); 
void Sisip_Belakang (simpul &L, char elemen ) ; 
void Sisip_Tengah1 (simpul &L, char elemen1, char elemen2 ) ; 
void Sisip_Tengah2 (simpul &L, char elemen1, char elemen2 ) ; 
void Hapus_Depan (simpul &L); 
void Hapus_Belakang (simpul &L); 
void Hapus_Tengah (simpul &L, char elemen); 
void Cetak (simpul L); 


//=================== 
//==Function Main==== 
//=================== 
int main(){
	system("COLOR 0A");
	string jwb;
	ulang:
		system("CLS");
		header();
		cout<<endl<<endl; 

///////////////////////////////////////////////////////////////////////
		char huruf, huruf2; 
		simpul L = NULL; //Pastikan Bahwa L kosong 
		
		//=============== 
		//==Sisip Depan== 
		//=============== 
		cout<<" # Penyisipan Simpul Di Depan"<<endl<<endl; 
		cout<<"\tMasukan Huruf : "; cin>>huruf; 
		Sisip_Depan (L, huruf ); 
		cout<<"\tMasukan Huruf : "; cin>>huruf ; 
		Sisip_Depan (L, huruf ); 
		cout<<"\tMasukan Huruf : "; cin>>huruf ; 
		Sisip_Depan (L, huruf ); 
		cout<<"\tMasukan Huruf : "; cin>>huruf ; 
		Sisip_Depan (L, huruf ); 
		Cetak (L); 
		//================= 
		//==Sisip Belakang= 
		//================= 
		cout<<"\n\n\n # Penyisipan Simpul Di Belakang"<<endl<<endl; 
		cout<<"\tMasukan Huruf : "; cin>>huruf; 
		Sisip_Belakang (L, huruf ); 
		cout<<"\tMasukan Huruf : "; cin>>huruf ; 
		Sisip_Belakang (L, huruf ); 
		cout<<"\tMasukan Huruf : "; cin>>huruf ; 
		Sisip_Belakang (L, huruf ); 
		cout<<"\tMasukan Huruf : "; cin>>huruf ; 
		Sisip_Belakang (L, huruf ); 
		Cetak (L); 
		//======================================= 
		//==Sisip Simpul Setelah Simpul Tertentu= 
		//======================================= 
		cout<<endl<<endl<<"\tMasukan Huruf : "; cin>>huruf; 
		cout<<"\tDisisip Setelah Huruf : "; cin>>huruf2; 
		cout<<"\t"<<huruf<<" Disisip Setelah "<<huruf2<<endl; 
		Sisip_Tengah1 (L, huruf, huruf2); 
		Cetak (L) ; 
		//======================================= 
		//==Sisip Simpul Sebelum Simpul Tertentu= 
 //
		
		cout<<endl<<endl<<"\tMasukan Huruf : "; cin>>huruf; 
		cout<<"\tDisisip Sebelum Huruf : "; cin>>huruf2; 
		cout<<"\t"<<huruf<<" Disisip Sebelum "<<huruf2<<endl; 
		Sisip_Tengah2 (L, huruf, huruf2); 
		Cetak (L) ; 
		//===================== 
		//==Hapus Simpul Depan= 
		//===================== 
		cout<<"\n\n\n # Hapus Simpul Depan "<<endl<<endl; 
		Hapus_Depan (L); 
		Cetak (L); 
		//======================== 
		//==Hapus Simpul Belakang= 
		//======================== 
		cout<<"\n\n\n # Hapus Simpul Belakang "<<endl<<endl; 
		Hapus_Belakang (L); 
		Cetak (L); 
		//======================= 
		//==Hapus Simpul TENGAH== 
		//======================= 
		cout<<"\n\n\n # Hapus Simpul Tengah "<<endl; 
		cout<<"\n\tMasukkan Huruf Tengah Yang akan dihapus : ";cin>>huruf; 
		Hapus_Tengah (L,huruf); 
		Cetak (L); 		

   
///////////////////////////////////////////////////////////////////////
			
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

 

//************************************ 
//**FUNCTION SISIP SIMPUL DI DEPAN**** 
//************************************ 
void Sisip_Depan (simpul &L, char elemen) 
{  
   simpul baru; // = new simpul ; 
   baru = (simpul) malloc (sizeof(simpul)+1); 
   baru->Isi = elemen ; 
   baru-> Next = NULL; 
   if (L== NULL) 
      L=baru; 
else 
{ 
 baru->Next = L;
       L= baru; 
   } 
} 
//************************************************ 
//**FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU** 
//************************************************ 
void Sisip_Tengah1 (simpul &L, char elemen1, char elemen2) 
{ 
   simpul bantu,baru; 
   baru = (simpul) malloc (sizeof(simpul)+1); 
   baru->Isi = elemen1 ; 
   baru-> Next = NULL; 
   if (L== NULL) 
      cout << "\tList Kosong ............."<<endl; 
   else 
   { 
      bantu = L; 
      while (bantu ->Isi != elemen2) bantu = bantu -> Next; 
      baru->Next = bantu ->Next ; 
      bantu->Next = baru ; 
   } 
} 
//****************************************************** 
//**FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU******** 
//****************************************************** 
void Sisip_Tengah2 (simpul &L, char elemen1, char elemen2) 
{ 
   simpul bantu, baru; 
   baru = (simpul) malloc (sizeof(simpul)+1); 
   baru->Isi = elemen1 ; 
   baru-> Next = NULL; 
   if (L== NULL) 
      cout<<"\tList Kosong.............."<<endl; 
   else 
   { 
      bantu = L; 
      while (bantu->Next->Isi != elemen2) bantu = bantu -> Next; 
      baru->Next = bantu ->Next ; 
      bantu->Next = baru ; 
   } 
 } 
 
 //********************************************** 
//**FUNCTION SISIP SIMPUL DI BELAKANG************ 
//********************************************** 
void Sisip_Belakang (simpul &L, char elemen) 
{ 
   simpul bantu, baru; 
   baru = (simpul) malloc (sizeof(simpul)+1); 
   baru->Isi = elemen ; 
   baru-> Next = NULL; 
   if (L== NULL) 
      L=baru; 
   else 
   { 
      bantu = L; 
      while (bantu->Next != NULL) 
      bantu= bantu -> Next ; 
      bantu->Next = baru ; 
   } 
} 
//********************************************** 
//**FUNCTION MENCETAK ISI LINKED LIST************* 
//********************************************** 
void Cetak (simpul L) 
{ 
   simpul bantu ; 
   if (L==NULL) 
      cout<<"\tLinked List Kosong ........"<<endl; 
   else 
   { 
      bantu =L; 
      cout<<"\tIsi Linked List : "; 
      while (bantu ->Next != NULL) 
      { 
         cout<<bantu->Isi<<"-->"; 
 bantu=bantu->Next; 
 } 
      cout<<bantu->Isi; 
 } 
 } 
 //************************************* 
//**FUNCTION HAPUS SIMPUL DEPAN******** 
//************************************* 
void Hapus_Depan (simpul &L) 
{ 
   simpul Hapus ; 
   if (L==NULL) 
      cout<<"\tLinked List Kosong............."; 
   else 
   { 
      Hapus = L; 
      L = L-> Next ; 
      Hapus -> Next = NULL; 
      free (Hapus); 
   } 
} 
//************************************* 
//**FUNCTION HAPUS SIMPUL BELAKANG***** 
//************************************* 
void Hapus_Belakang (simpul &L) 
{ 
   simpul bantu, hapus; 
   if (L==NULL) 
      cout<<"\tLinked List Kosong............."; 
   else 
   { 
      bantu = L; 
      while (bantu ->Next->Next != NULL) bantu=bantu->Next; 
      hapus = bantu -> Next; 
 bantu -> Next = NULL; 
      free (hapus); 
   } 
} 
//************************************* 
//**FUNCTION HAPUS SIMPUL DI TENGAH**** 
//************************************* 
void Hapus_Tengah(simpul &L, char elemen) 
{ 
 simpul bantu,hapus; 
 
 if (L==NULL) 
      cout<<"Linked List Kosong............."; 
   else 
   { 
      bantu = L; 
      while (bantu ->Next->Isi != elemen) bantu=bantu->Next; 
      hapus = bantu -> Next; 
      bantu ->Next = bantu -> Next ->Next; 
hapus -> Next = NULL; 
      free (hapus); 
   } 
} 
 //======================eof========================== 


