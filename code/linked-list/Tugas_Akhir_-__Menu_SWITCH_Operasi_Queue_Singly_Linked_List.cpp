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

///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(69.5)<<"Tugas Akhir -  Menu SWITCH Operasi Queue Singly Linked List\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	string jwb;
	simpul L = NULL; //Pastikan bahwa L kosong 
	
	menu:
		// pendeklarasian variabel
		char huruf ; 
		string input_lagi;
		int pilih; 	
						
		system("CLS");
		header();
		cout<<endl<<endl; 
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. PENYISIPAN SIMPUL";
			cout<<"\n 2. PENGHAPUSAN SIMPUL\n";
		
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
				cout<<"\n 1. PENYISIPAN SIMPUL";
				cout<<"\n 2. PENGHAPUSAN SIMPUL\n";;
				cout<<"\n Pilihlah Sesuai Dengan Nomor Program";					
			}
		}
		
		cout<<endl<<endl;
		ulang:
			system("cls");					
			header();
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. PENYISIPAN SIMPUL";
			cout<<"\n 2. PENGHAPUSAN SIMPUL\n";
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
					//===================== 
					//==Sisip Belakang======== 
					//===================== 
				
					cout<<"\n 1. Penyisipan Simpul\n\n"; 
					do{ 
						cout<<"\tMasukan Huruf    : "; 
						cin>>huruf; 
						Sisip_Belakang (L, huruf);
						Cetak (L) ;
						cout<<"\n\tInput lagi?[Y/T]"; 
						input_lagi = getch();; 
						cout<<endl<<endl;
						
					}while(input_lagi=="y" || input_lagi=="Y");
				
	         		break ;
	 
	         	case 2:
	         		cout<<"\n 2. Pengapusan Simpul\n\n"; 
					do{ 
					 	Hapus_Depan (L) ;
						cout<<endl; 
  						Cetak (L) ;
  		
						cout<<"\n\tInput lagi?[Y/T]"; 
						input_lagi = getch();;
						cout<<endl<<endl; 
					}while(input_lagi=="y" || input_lagi=="Y");
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
      cout<<"\tLinked List Kosong.........."; 
   else 
   { 
      bantu=L; 
      cout<<"\tIsi Linked List  : "; 
      while (bantu->Next != NULL) 
      { 
         cout<<bantu->Isi<<"->"; 
         bantu=bantu->Next; 
      } 
      cout<<bantu->Isi; 
 } 

} 
//************************************* 
//**FUNCTION HAPUS SIMPUL DEPAN******** 
//************************************* 
void Hapus_Depan  (simpul &L) 
{ 
   simpul Hapus; 
   if(L==NULL) 
      cout<<"\tLinked List Kosong.........."; 
   else 
   { 
      Hapus=L; 
      L = L->Next; 
      Hapus->Next = NULL; 
      free(Hapus); 
      cout<<"\t1 Simpul Dihapus.";
   } 
}  
 //=========================eof======================== 
            
