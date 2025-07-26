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

// lat10_1 Singly Linked List
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

void SLL(void){
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
	

}
   


// lat10_2 Doubly Linked List
typedef struct Doubly_Linked_List *Simpul_Doubly_Linked_List; 
struct Doubly_Linked_List 
   { 
      char Isi; 
      Simpul_Doubly_Linked_List kanan; 
      Simpul_Doubly_Linked_List kiri; 
}; 

int LocSim = sizeof(Simpul_Doubly_Linked_List)+1;
//===================== 
//==Prototype Function= 
//===================== 
void Sisip_Depan_2 (Simpul_Doubly_Linked_List &DL, char elemen ); 
void Sisip_Belakang_2 (Simpul_Doubly_Linked_List &DL, char elemen ) ; 
void Sisip_Tengah1_2 (Simpul_Doubly_Linked_List &DL, char elemen1, char elemen2 ) ; 
void Sisip_Tengah2_2 (Simpul_Doubly_Linked_List &DL, char elemen1, char elemen2 ) ; 
void Hapus_Depan_2 (Simpul_Doubly_Linked_List &DL); 
void Hapus_Belakang_2 (Simpul_Doubly_Linked_List &DL); 
void Hapus_Tengah_2 (Simpul_Doubly_Linked_List &DL, char elemen); 
void Cetak_2 (Simpul_Doubly_Linked_List DL); 

void DLL(void){
	char huruf, huruf2; 
	Simpul_Doubly_Linked_List DL = NULL; //Pastikan Bahwa DL kosong 
	int i; 
	
	//=============== 
	//==Sisip Depan== 
	//=============== 
	cout<<" # Penyisipan Simpul Di Depan"<<endl<<endl; 
	for (i=1;i<=4;i++) 
   { 
      cout<<"\tMasukan Huruf : "; cin>>huruf; 
      Sisip_Depan_2 (DL, huruf ); 
   } 
	 Cetak_2 (DL);
	    
	//================= 
	//==Sisip Belakang= 
	//================= 
	cout<<"\n\n\n # Penyisipan Simpul Di Belakang"<<endl<<endl; 
	for (i=1;i<=4;i++) 
	{ 
		cout<<"\tMasukan Huruf : "; cin>>huruf; 
		Sisip_Belakang_2 (DL, huruf ); 
	} 
	Cetak_2 (DL); 
	
	//======================================= 
	//==Sisip Simpul Setelah Simpul Tertentu= 
	//======================================= 
	cout<<endl<<endl<<"\tMasukan Huruf : "; cin>>huruf; 
	cout<<"\tDisisip Setelah Huruf : "; cin>>huruf2; 
	cout<<"\t"<<huruf<<" Disisip Setelah "<<huruf2<<endl; 
	Sisip_Tengah1_2 (DL, huruf, huruf2); 
	Cetak_2 (DL) ; 
	
	
	//======================================= 
	//==Sisip Simpul Sebelum Simpul Tertentu= 		
	cout<<endl<<endl<<"\tMasukan Huruf : "; cin>>huruf; 
	cout<<"\tDisisip Sebelum Huruf : "; cin>>huruf2; 
	cout<<"\t"<<huruf<<" Disisip Sebelum "<<huruf2<<endl; 
	Sisip_Tengah2_2 (DL, huruf, huruf2); 
	Cetak_2 (DL) ; 
	
	//===================== 
	//==Hapus Simpul Depan= 
	//===================== 
	cout<<"\n\n\n # Hapus Simpul Depan "<<endl<<endl; 
	Hapus_Depan_2 (DL); 
	Cetak_2 (DL); 
	
	//======================== 
	//==Hapus Simpul Belakang= 
	//======================== 
	cout<<"\n\n\n # Hapus Simpul Belakang "<<endl<<endl; 
	Hapus_Belakang_2 (DL); 
	Cetak_2 (DL); 
	
	//======================= 
	//==Hapus Simpul TENGAH== 
	//======================= 
	cout<<"\n\n\n # Hapus Simpul Tengah "<<endl; 
	cout<<"\n\tMasukkan Huruf Tengah Yang akan dihapus : ";cin>>huruf; 
	Hapus_Tengah_2 (DL,huruf); 
	Cetak_2 (DL); 		

}

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(62)<<"Tugas Akhir -  Menu Switch Lat10_1 - Lat10_2\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	menu:
		// pendeklarasian variabel
		int Nilai [ 20 ]; 
		int N;
		int pilih; 	
						
		system("CLS");
		header();
		cout<<endl<<endl; 
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. SINGLY LINKED LIST";
			cout<<"\n 2. DOUBLY LINKED LIST\n";
		
		while(true){				
			pilih = 0;
						
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(pilih == 1 || pilih == 2){
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n DAFTAR MENU PROGRAM :";
				cout<<"\n 1. SINGLY LINKED LIST";
				cout<<"\n 2. DOUBLY LINKED LIST";
				cout<<"\n Pilihlah Sesuai Dengan Nomor Program";					
			}
		}
		
		cout<<endl<<endl;
		ulang:
			system("cls");					
			header();
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. SINGLY LINKED LIST";
			cout<<"\n 2. DOUBLY LINKED LIST";
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "<<pilih;
			// membuat garis atas
			cout<<endl;
			for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
				cout<<"-";
			}	
			cout<<endl<<endl;
			
			system("cls");					
			header();
			cout<<endl<<endl;
			
			switch ( pilih ) {	
	        	case 1:
	        		cout<<" 1. SINGLY LINKED LIST\n\n";
					SLL();
	         		break ;
	 
	         	case 2:
	         		cout<<" 2. DOUBLY LINKED LIST\n";
	            	DLL();
	         		break ;
        	}
        	cout<<endl;        	
			cout<<endl;	        	
        	
        	// membuat garis bawah
			for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
				cout<<"-";
			}		
			cout<<" Tekan <R> Jika Ingin Menghitung Ulang.\n";
			cout<<" Tekan <M> Jika Ingin Memilih Program.\n";
			cout<<" Tekan Apa Saja Untuk Menutup Program.";
		// input jawaban ulang/tidak
		jwb = getch();
	
	
	/*  program akan kembali ke label ulang 
       jika diinputkan y atau Y */
	if(jwb=="m" || jwb=="M") 
		goto menu;
	else if(jwb=="r" || jwb=="R")
		goto ulang;
 	return 0;
}

// LAT10_1 SINGLY LINKED LIST
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






// LAT10_2 DOUBLY LINKED LIST
//************************************ 
//**FUNCTION SISIP SIMPUL DI DEPAN**** 
//************************************ 
void Sisip_Depan_2 (Simpul_Doubly_Linked_List &DL, char elemen) 
{  
   Simpul_Doubly_Linked_List baru;  
   baru = (Simpul_Doubly_Linked_List) malloc (sizeof(Simpul_Doubly_Linked_List)); 
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
 void Sisip_Tengah1_2 (Simpul_Doubly_Linked_List &DL, char elemen1, char elemen2) 
{ 
   Simpul_Doubly_Linked_List bantu,baru; 
   baru = (Simpul_Doubly_Linked_List) malloc (LocSim); 
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
void Sisip_Tengah2_2 (Simpul_Doubly_Linked_List &DL, char elemen1, char elemen2) 
{ 
   Simpul_Doubly_Linked_List bantu, baru; 
   baru = (Simpul_Doubly_Linked_List) malloc (LocSim); 
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
void Sisip_Belakang_2 (Simpul_Doubly_Linked_List &DL, char elemen) 
{ 
   Simpul_Doubly_Linked_List bantu, baru; 
   baru = (Simpul_Doubly_Linked_List) malloc (LocSim); 
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
void Cetak_2 (Simpul_Doubly_Linked_List DL) 
{ 
   Simpul_Doubly_Linked_List bantu ; 
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
void Hapus_Depan_2 (Simpul_Doubly_Linked_List &DL) 
{ 
   Simpul_Doubly_Linked_List Hapus ; 
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
void Hapus_Belakang_2 (Simpul_Doubly_Linked_List &DL) 
{ 
   Simpul_Doubly_Linked_List bantu, hapus; 
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
void Hapus_Tengah_2(Simpul_Doubly_Linked_List &DL, char elemen) 
 { 
 Simpul_Doubly_Linked_List bantu,hapus; 
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



