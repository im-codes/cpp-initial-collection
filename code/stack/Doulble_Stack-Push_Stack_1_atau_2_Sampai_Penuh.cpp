#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <sstream> 		// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <string.h>	    // Untuk membuat fungsi format rupiah
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop

#define n 10

using namespace std;
char P[]={'>',' ',' ',' ',' ',' '};
int S[n],mov[2],X,Y,pil=0;
int *top1,*top2,*dasar1,*dasar2,*helpI;

// Prosedur Header/Judul
void header(){
	cout<<endl;
	cout.flags(ios::right);
	cout<<setw(58.5)<<"Double Stack - Operasi Push Dan Pop\n";
	cout<<setw(61)<<"By Muhammad Irfan Maulana - 201011401753\n";
	
	// Garis Atas			
	for(int bates_atas=1; bates_atas<=80; bates_atas++){
		cout<<"=";
	}
}


//utama
void awal(){
 top1=&S[-1];
   top2=&S[n];
   dasar1=&S[-1];
   dasar2=&S[n];
   helpI=&S[-1];
}
void push1(int x){
 top1=top1+1;
   *top1=x;
}
void push2(int y){
 top2=top2-1;
   *top2=y;
}
void pop1(){
 X=*top1;
   *top1=0;
   top1=top1-1;
}
void pop2(){
 Y=*top2;
   *top2=0;
   top2=top2+1;
}
int BisaDiisi1(){
 if(top1<&S[n/2-1])
    return 1;
   else
    return 0;
}
int BisaDiisi2(){
 if(top2>&S[n/2])
    return 1;
   else
    return 0;
}
int BisaDiambil1(){
 if(top1>dasar1)
    return 1;
   else
    return 0;
}
int BisaDiambil2(){
 if(top2<dasar2)
    return 1;
   else
    return 0;
}
void tampil(){
	cout<<endl<<endl<<endl;
	cout<<setw(40)<<"Data Stack"<<endl<<endl<<" ";
	
	cout.flags(ios::left);
	// Garis Tabel Atas			
	for(int garis_tabel_atas=1; garis_tabel_atas<=71; garis_tabel_atas++){
		cout<<"-";
	}
	cout<<"\n | "<<setw(32.5)<<"             Stack 1"<<" | "<<setw(32.5)<<"             Stack 2"<<" |\n ";
	
	// Garis Tabel Atas			
	for(int garis_tabel_atas=1; garis_tabel_atas<=71; garis_tabel_atas++){
		cout<<"-";
	}
	cout<<"\n | ";
   	while(helpI!=(dasar2-1)){
   	  helpI++;
   	  cout<<setw(4)<<*helpI<<" | ";
   	}
   	cout<<"\n ";
   	// Garis Tabel Bawah			
	for(int garis_tabel_bawah=1; garis_tabel_bawah<=71; garis_tabel_bawah++){
		cout<<"-";
	}
    helpI=&S[-1];
}
//tambahan
void tampilMenu(){
    //system("cls");
   
    cout<<" 1. Push Stack 1"<<endl;
    cout<<" 2. Push Stack 2"<<endl;
    cout<<" 3. Pop  Stack 1"<<endl;
    cout<<" 4. Pop  Stack 2"<<endl;
    cout<<" ========================================================="<<endl;
    cout<<" Masukan Kode Menu[1-4] : ";cin>>pil;
    cout<<endl<<endl;

}



//fungsi main
int main(){
	
	//mengubah background dan ukuran windows
	system("mode con lines=300"); 
	system("COLOR 0A");
	string jwb;//restart
	awal();
	do{	
		system("CLS");//bersihkan layar
		header();//header
		cout<<endl<<endl; 		
///////////////////////////////////////////////////////////////////////////////////////////////	
		tampilMenu();
		cout<<endl;
		//cout<<"nilai pil = "<<pil<<endl;
		switch(pil){
			case 1: 
				while(BisaDiisi1()){
					cout<<" Masukkan Bilangan : ";
					cin>>X;
					push1(X);
				}cout<<"\n Stack 1 Sudah Penuh";
			break;
			
			case 2: 
				while(BisaDiisi2()){
					cout<<" Masukkan Bilangan = ";
					cin>>Y;
					push2(Y);
				}cout<<"\n Stack 2 Sudah Penuh";
			break;
			
			case 3: 
				if(BisaDiambil1()){
					pop1();
					cout<<" Data yang diambil = "<<X<<endl;
				}
				else{
					cout<<"/n Maaf stack 1 tidak ada isinya"<<endl;
				}
			break;
			
			case 4: 
				if(BisaDiambil2()){
					pop2();
					cout<<" Data yang diambil = "<<Y<<endl;
				}
				else{
					cout<<" Maaf stack 2 tidak ada isinya"<<endl;
				}
			break;
		}
		tampil();


//////////////////////////////////////////////////////////////////////////////////////////////		
		cout<<endl<<endl; 		 
		// Garis Bawah			
		for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
			cout<<"=";
		}
		// mencetak keterangan
		cout<<"\n Tekan Y untuk menghitung ulang.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 
	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}


