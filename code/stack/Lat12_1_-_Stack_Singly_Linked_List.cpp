#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks


#define true 1 
#define false 0 

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////	

typedef struct node *simpul; 
struct node 
   { 
      char Isi; 
      simpul next ; 
   }; 
//====================== 
//==Prototype Function== 
//====================== 
void Sisip_Belakang (simpul &L, char elemen); 
void Hapus_Belakang (simpul &L); 
void Cetak (simpul L); 
//================= 
//==Function Main== 
//================= 
void mains ( ) 
{ 
   char huruf ; 
   simpul L = NULL; //Pastikan bahwa L kosong 
   //================== 
   //==Sisip Belakang== 
   //================== 
   cout<<" Input Stack "<<endl<<endl; 
   cout<<" Masukan Elemen : "; cin>>  huruf; 
   Sisip_Belakang (L, huruf); 
   cout<<" Masukan Elemen : "; cin>>  huruf; 
   Sisip_Belakang (L, huruf); 
   cout<<" Masukan Elemen : "; cin>>  huruf; 
   Sisip_Belakang (L, huruf); 
   cout<<" Masukan Elemen : "; cin>>  huruf; 
   Sisip_Belakang (L, huruf); 
   cout<<" Masukan Elemen : "; cin>>  huruf; 
   Sisip_Belakang (L, huruf); 
   cout<<" Masukan Elemen : "; cin>>  huruf; 
   Sisip_Belakang (L, huruf); 
   Cetak (L); 
   //========================= 
   //==Hapus Simpul Belakang== 
   //========================= 
   cout<<endl<<endl<<" Hapus Elemen "<<endl; 
   Hapus_Belakang (L); 
   Cetak (L); 
   cout<<endl<<endl<<" Hapus Elemen "<<endl; 
   Hapus_Belakang (L); 
   Cetak (L); 
   cout<<endl<<endl<<" Hapus Elemen "<<endl; 
 Hapus_Belakang (L); 
  Cetak (L); 
   cout<<endl<<endl<<" Hapus Elemen "<<endl; 
   Hapus_Belakang (L); 
   Cetak (L); 

} 
//****************************************** 
//**FUNCTION SISIP SIMPUL DI BELAKANG******* 
//****************************************** 
void Sisip_Belakang (simpul & L, char elemen) 
{ 
   simpul bantu, baru; 
   baru= (simpul) malloc(sizeof(simpul)+1); 
   baru->Isi = elemen;  
   baru->next = NULL; 
   if(L == NULL) {
   		L=baru; 
      
   }
      
   else 
   { 
      bantu=L; 
    
      while(bantu->next != NULL) 
         bantu=bantu->next; 
      bantu->next=baru; 
 } 
} 
//***************************************** 
//**FUNCTION HAPUS SIMPUL BELAKANG********* 
//***************************************** 
void Hapus_Belakang (simpul & L) 
{ 
   simpul bantu, hapus; 
   if(L == NULL) 
      cout<<" Linked List Kosong..........."; 
   else 
   { 
bantu=L; 
   while(bantu->next->next != NULL) 
         bantu=bantu->next; 
	hapus = bantu ->next; 
	bantu->next = NULL; 
	free(hapus); 
   } 
} 
//****************************************** 
//**FUNCTION MENCETAK ISI LINKED LIST** 
//****************************************** 
void Cetak(simpul L) 
{ 
   simpul bantu; 
   if (L==NULL) 
      cout<<" Linked List Kosong ……….."<<endl; 
   else  
   { 
      bantu=L; 
      cout<<endl<<" Isi Linked List : "; 
      while (bantu->next != NULL) 
      { 
         cout<<bantu->Isi <<"->"; 
         bantu=bantu->next; 
      } 
   cout<<bantu->Isi; 
   } 
   cout<<endl;
} //==================== eof================ 

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(57)<<"Lat12_1 - Stack Singly Linked List\n";
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


