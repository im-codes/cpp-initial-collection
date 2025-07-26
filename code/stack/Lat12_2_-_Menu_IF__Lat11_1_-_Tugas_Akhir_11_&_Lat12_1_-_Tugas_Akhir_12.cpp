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
#define MaxElemen 200 //menentukan batas max elemen

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////	

// Program Lat11_1        - Stack Array

struct Stack 
   { 
      char Isi [MaxS] ; 
      unsigned int Top; 
}; 
void INITS (Stack &S) ; 
void PUSH (Stack &S, char Data) ; 
void CETAK (Stack S) ; 
void POP (Stack &S, char &Hsl) ; 

void Lat11_1(){
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






// Lat11_2        - Stack Membalikan Kalimat

struct Tumpukan
{
	char Isi[200];
	int Atas;
} T,S;

//sub program PUSH berfungsi memasukkan elemen ke dalam STACK
void PUSH (char x){ //fungsi push
	if(T.Atas == 200){  //untuk mengecek apakah stack sudah penuh
		cout<<" Tumpukan Sudah Penuh";
		getch();
	}
	else{
		T.Atas = T.Atas + 1;
		T.Isi[T.Atas] = x;
	}
}

//sub program POP berfungsi mengambil elemen dari STACK
char POP(){
	char hasil;
	if(T.Atas == 0){
		cout<<" Tumpukan sudah kosong";
		hasil = ' ';
	}
	else{
		hasil = T.Isi[T.Atas];
		T.Atas = T.Atas - 1;
	}
	return hasil;
}

void Lat11_2(void){

	int I;       // pencacah
	char Kalimat[200];   //kalimat yang akan dibalik

	T.Atas =0;  // nilai awal tumpukan

	// Inputkan kalimat yang akan dibalik
	cout<<" Masukkan Kalimat Acak    : ";gets(Kalimat);

	//Mem-PUSH huruf dari kalimat ke dalam tumpukan
	for(I=0;I<strlen(Kalimat);I++)
	{
		PUSH(Kalimat[I]);
	}
	
	cout<<"\n Kalimat Setelah di Balik : ";
	
	//Mem-POP sekaligus mencetak isi tumpukan sehingga diperoleh kalimat yang terbalik
	for (I=0;I<strlen(Kalimat);I++)
	{
		cout<<""<<POP();
	}
            
}
	






// Tugas Akhir 11 - Stack Desimal ke Biner

int MAXSTACK; typedef int itemtype;

typedef struct{
	itemtype item[300]; 
	int count;
}stack;

void initializestack(stack *s){
	s->count = 0;
}

int empty(stack *s){
	return (s->count == 0);
}

int full(stack *s){
	return (s->count == MAXSTACK);
}
void push(itemtype x, stack *s){
	if(full(s))
		printf(" Stack penuh !\n");
	else{
		s->item[s->count]=x; ++(s->count);
	}
}

int pop(stack *s) {
	if(empty(s))
		printf(" Stack Kosong ");
	else {
		--(s->count);
	return (s->item[s->count]); 
	}
}

void Tugas_akhir11(void){

	int i, n, m, l, z; int input;
	stack tumpukan;
	initializestack(&tumpukan);
	
	printf(" Masukkan Bilangan Desimal        : ");
	scanf("%d", &input);
	
	for(z=1,n=input;n>0;n=n/2, z++) {
		MAXSTACK=z; 
	}
	
	m=0;
	for(n=input;n>0;n=n/2) {
		l=n%2;
		push(l,&tumpukan);
		++m; 
	} 
	
	cout<<endl;
	printf(" Hasil Konversi Ke Bilangan Biner : ");
	for(i=MAXSTACK;i>0;i--) {
		printf("%d", pop(&tumpukan)); 
	}
      
}






// Lat12_1        - Stack Singly Linked List

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
void Lat12_1 ( ) 
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
void Sisip_Belakang (simpul &L, char elemen) 
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
	






// Tugas Akhir 12 - Stack Kalimat Polindrom


//sub program PUSH berfungsi memasukkan elemen ke dalam STACK
void PUSH2 (char x){ //fungsi push
	if(S.Atas == MaxElemen){  //untuk mengecek apakah stack sudah penuh
		cout<<" Tumpukan Sudah Penuh";
		getch();
	}
	else{
		S.Atas = S.Atas + 1;
		S.Isi[S.Atas] = x;
	}
}

//sub program POP berfungsi mengambil elemen dari STACK
char POP2(){
	char hasil;
	if(S.Atas == 0){
		cout<<" Tumpukan sudah kosong";
		hasil = ' ';
	}
	else{
		hasil = S.Isi[S.Atas];
		S.Atas = S.Atas - 1;
	}
	return hasil;
}

void Tugas_akhir12(void){

	int I;       // pencacah
	char Kalimat[MaxElemen];   //kalimat yang akan dibalik
	char Kalimat_Dibalik[MaxElemen];
	bool Polindrom = true;
	


	S.Atas =0;  // nilai awal tumpukan

	// Inputkan kalimat yang akan dibalik
	cout<<" Masukkan Kalimat Acak    : ";gets(Kalimat);

	//Mem-PUSH huruf dari kalimat ke dalam tumpukan
	for(I=0;I<strlen(Kalimat);I++)
	{
		PUSH2(Kalimat[I]);
	}
	
	cout<<"\n Kalimat Setelah di Balik : ";
	
	//Mem-POP sekaligus mencetak isi tumpukan sehingga diperoleh kalimat yang terbalik
	for (I=0;I<strlen(Kalimat);I++)
	{
		Kalimat_Dibalik[I]=POP2();
		if(Kalimat_Dibalik[I]!=Kalimat[I]){
			Polindrom = false;
		}
	}
	
	cout<<Kalimat_Dibalik;
	if(Polindrom){
		cout<<"\n\n Kalimat Polindrom";
	}else{
		cout<<"\n\n Kalimat Tidak Polindrom";
	}
	
	
            
}



///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(75)<<"Lat12.2 - Menu IF  Lat11_1 - Tugas Akhir 11 & Lat12_1 - Tugas Akhir 12\n";
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
		cout<<"\n 1. Lat11_1        - Stack Array";
		cout<<"\n 2. Lat11_2        - Stack Membalikan Kalimat";
		cout<<"\n 3. Tugas Akhir 11 - Stack Desimal ke Biner";
		cout<<"\n 4. Lat12_1        - Stack Singly Linked List";
		cout<<"\n 5. Lat12_2        - Menu IF Program Pertemuan 11 - 12";
		cout<<"\n 6. Tugas Akhir 12 - Stack Kalimat Polindrom\n";
		
		while(true){				
			pilih = 0;
						
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(pilih==1 || pilih==2 ||pilih==3 ||pilih==4 ||pilih==5 ||pilih==6 ){
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n DAFTAR MENU PROGRAM :";
				cout<<"\n 1. Lat11_1        - Stack Array";
				cout<<"\n 2. Lat11_2        - Stack Membalikan Kalimat";
				cout<<"\n 3. Tugas Akhir 11 - Stack Desimal ke Biner";
				cout<<"\n 4. Lat12_1        - Stack Singly Linked List";
				cout<<"\n 5. Lat12_2        - Menu IF Program Pertemuan 11 - 12";
				cout<<"\n 6. Tugas Akhir 12 - Stack Kalimat Polindrom\n";
				cout<<"\n Pilihlah Sesuai Dengan Nomor Program";					
			}
		}
		
		cout<<endl<<endl;
		ulang:
			system("cls");					
			header();
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. Lat11_1        - Stack Array";
			cout<<"\n 2. Lat11_2        - Stack Membalikan Kalimat";
			cout<<"\n 3. Tugas Akhir 11 - Stack Desimal ke Biner";
			cout<<"\n 4. Lat12_1        - Stack Singly Linked List";
			cout<<"\n 5. Lat12_2        - Menu IF Program Pertemuan 11 - 12";
			cout<<"\n 6. Tugas Akhir 12 - Stack Kalimat Polindrom\n";
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
			
			if( pilih == 1 ){	
        		cout<<" 1. Lat11_1        - Stack Array\n\n\n";
				Lat11_1();
			}
			else if(pilih == 2){
				cout<<" 2. Lat11_2        - Stack Membalikan Kalimat\n\n\n";
				Lat11_2();
			}
			else if(pilih == 3){
				cout<<" 3. Tugas Akhir 11 - Stack Desimal ke Biner\n\n\n";
				Tugas_akhir11();
			}
			else if(pilih == 4){
				cout<<" 4. Lat12_1        - Stack Singly Linked List\n\n\n";
				Lat12_1();
			}
				else if(pilih == 5){
				cout<<" 5. Lat12_2        - Menu IF Program Pertemuan 11 - 12\n\n\n";
				goto menu;
			}
			else{
				cout<<" 6. Tugas Akhir 12 - Stack Kalimat Polindrom\n\n\n";
				Tugas_akhir12();
			}
	
        	cout<<endl<<endl;
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


