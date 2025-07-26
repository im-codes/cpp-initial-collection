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
			cout<<setw(54)<<"Lat10_2 - Double Linked List\n";
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
      simpul kanan; 
      simpul kiri; 
   }; 
   
int LocSim = sizeof(simpul)+1;
//===================== 
//==Prototype Function= 
//===================== 
void Sisip_Depan (simpul &DL, char elemen ); 
void Sisip_Belakang (simpul &DL, char elemen ) ; 
void Sisip_Tengah1 (simpul &DL, char elemen1, char elemen2 ) ; 
void Sisip_Tengah2 (simpul &DL, char elemen1, char elemen2 ) ; 
void Hapus_Depan (simpul &DL); 
void Hapus_Belakang (simpul &DL); 
void Hapus_Tengah (simpul &DL, char elemen); 
void Cetak (simpul DL); 


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
		simpul DL = NULL; //Pastikan Bahwa DL kosong 
		int i; 
		
		//=============== 
		//==Sisip Depan== 
		//=============== 
		cout<<" # Penyisipan Simpul Di Depan"<<endl<<endl; 
		for (i=1;i<=4;i++) 
	   { 
	      cout<<"\tMasukan Huruf : "; cin>>huruf; 
	      Sisip_Depan (DL, huruf ); 
	   } 
  		 Cetak (DL);
		    
		//================= 
		//==Sisip Belakang= 
		//================= 
		cout<<"\n\n\n # Penyisipan Simpul Di Belakang"<<endl<<endl; 
		for (i=1;i<=4;i++) 
		{ 
			cout<<"\tMasukan Huruf : "; cin>>huruf; 
			Sisip_Belakang (DL, huruf ); 
		} 
		Cetak (DL); 
		
		//======================================= 
		//==Sisip Simpul Setelah Simpul Tertentu= 
		//======================================= 
		cout<<endl<<endl<<"\tMasukan Huruf : "; cin>>huruf; 
		cout<<"\tDisisip Setelah Huruf : "; cin>>huruf2; 
		cout<<"\t"<<huruf<<" Disisip Setelah "<<huruf2<<endl; 
		Sisip_Tengah1 (DL, huruf, huruf2); 
		Cetak (DL) ; 
		
		
		//======================================= 
		//==Sisip Simpul Sebelum Simpul Tertentu= 		
		cout<<endl<<endl<<"\tMasukan Huruf : "; cin>>huruf; 
		cout<<"\tDisisip Sebelum Huruf : "; cin>>huruf2; 
		cout<<"\t"<<huruf<<" Disisip Sebelum "<<huruf2<<endl; 
		Sisip_Tengah2 (DL, huruf, huruf2); 
		Cetak (DL) ; 
		
		//===================== 
		//==Hapus Simpul Depan= 
		//===================== 
		cout<<"\n\n\n # Hapus Simpul Depan "<<endl<<endl; 
		Hapus_Depan (DL); 
		Cetak (DL); 
		
		//======================== 
		//==Hapus Simpul Belakang= 
		//======================== 
		cout<<"\n\n\n # Hapus Simpul Belakang "<<endl<<endl; 
		Hapus_Belakang (DL); 
		Cetak (DL); 
		
		//======================= 
		//==Hapus Simpul TENGAH== 
		//======================= 
		cout<<"\n\n\n # Hapus Simpul Tengah "<<endl; 
		cout<<"\n\tMasukkan Huruf Tengah Yang akan dihapus : ";cin>>huruf; 
		Hapus_Tengah (DL,huruf); 
		Cetak (DL); 		

   
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
void Sisip_Depan (simpul &DL, char elemen) 
{  
   simpul baru;  
   baru = (simpul) malloc (sizeof(simpul)); 
   baru->Isi = elemen ; 
   baru-> kanan = NULL; 
   baru-> kiri = NULL; 
   if (DL== NULL) 
      DL=baru; 
   else 
   { 
      baru->kanan = DL; 
      DL->kiri = baru; 
 DL= baru; 
   } 
} 
//************************************************** 
//**FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU ** 
 //************************************************** 
 void Sisip_Tengah1 (simpul &DL, char elemen1, char elemen2) 
{ 
   simpul bantu,baru; 
   baru = (simpul) malloc (LocSim); 
   baru->Isi = elemen1 ; 
   baru-> kanan = NULL; 
   baru-> kiri = NULL; 
   if (DL== NULL) 
      cout << "\tList Kosong ............."<<endl; 
   else 
   { 
      bantu = DL; 
      while (bantu ->Isi != elemen2)  
 bantu = bantu -> kanan; 
         baru->kanan = bantu ->kanan; 
         baru->kiri = bantu; 
         bantu->kanan->kiri = baru; 
         bantu->kanan = baru; 
   } 
} 
//****************************************************** 
//**FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU******* 
//****************************************************** 
void Sisip_Tengah2 (simpul &DL, char elemen1, char elemen2) 
{ 
   simpul bantu, baru; 
   baru = (simpul) malloc (LocSim); 
   baru->Isi = elemen1 ; 
   baru-> kanan = NULL; 
   baru-> kiri = NULL; 
   if (DL== NULL) 
      cout<<"\tList Kosong.............."<<endl; 
   else 
   { 
      bantu = DL; 
      while (bantu->kanan->Isi != elemen2)  
 bantu = bantu -> kanan; 
         baru->kanan = bantu ->kanan; 
         baru->kiri = bantu; 
         bantu->kanan->kiri = baru; 
         bantu->kanan = baru; 
   } 
} 
//********************************************** 
//**FUNCTION SISIP SIMPUL DI BELAKANG*********** 
//********************************************** 
void Sisip_Belakang (simpul &DL, char elemen) 
{ 
   simpul bantu, baru; 
   baru = (simpul) malloc (LocSim); 
   baru->Isi = elemen ; 
   baru-> kanan = NULL; 
   baru-> kiri = NULL; 
   if (DL== NULL) 
      DL=baru; 
   else 
   { 
      bantu = DL; 
      while (bantu->kanan != NULL) 
         bantu = bantu -> kanan; 
         bantu->kanan = baru; 
         baru->kiri = bantu; 
   } 
} 
//********************************************** 
//**FUNCTION MENCETAK ISI LINKED LIST*********** 
//********************************************** 
void Cetak (simpul DL) 
{ 
   simpul bantu ; 
   if (DL==NULL) 
      cout<<"\tLinked List Kosong ........"<<endl; 
   else 
   { 
      bantu =DL; 
      cout<<"\tIsi Linked List : \n\n\t"; 
      while (bantu ->kanan != NULL) 
      { 
         cout<<bantu->Isi<<"<= =>"; 
 bantu=bantu->kanan; 
 } 
      cout<<bantu->Isi; 
 } 
 
}
//************************************* 
//**FUNCTION HAPUS SIMPUL DEPAN******** 
//************************************* 
void Hapus_Depan (simpul &DL) 
{ 
   simpul Hapus ; 
   if (DL==NULL) 
      cout<<"\tLinked List Kosong............."; 
   else 
   { 
      Hapus = DL; 
      DL = DL-> kanan ; 
      DL ->kiri = NULL; 
      Hapus -> kanan = NULL; 
      free (Hapus); 
   } 
} 
//************************************* 
//**FUNCTION HAPUS SIMPUL BELAKANG***** 
//************************************* 
void Hapus_Belakang (simpul &DL) 
{ 
   simpul bantu, hapus; 
   if (DL==NULL) 
      cout<<"\tLinked List Kosong............."; 
   else 
   { 
      bantu = DL; 
      while (bantu ->kanan->kanan != NULL) bantu=bantu->kanan; 
         hapus = bantu -> kanan; 
 bantu -> kanan = NULL; 
 hapus -> kiri = NULL; 
         free (hapus); 
   } 
} 
//************************************* 
//**FUNCTION HAPUS SIMPUL DI TENGAH**** 
//************************************* 
void Hapus_Tengah(simpul &DL, char elemen) 
 { 
 simpul bantu,hapus; 
   if (DL==NULL) 
      cout<<"\tLinked List Kosong............."; 
   else 
   { 
      bantu = DL; 
      while (bantu ->kanan->Isi != elemen)  
 bantu=bantu->kanan; 
         hapus = bantu -> kanan; 
         bantu ->kanan->kanan->kiri = bantu; 
 bantu ->kanan = bantu->kanan->kanan; 
 hapus -> kanan = NULL; 
 hapus -> kiri = NULL; 
         free (hapus); 
   } 
} 
 //======================eof=========================== 

