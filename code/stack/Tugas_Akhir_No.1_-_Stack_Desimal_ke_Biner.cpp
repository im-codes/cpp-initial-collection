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

void mains(void){

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
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(60.5)<<"Tugas Akhir No.1 - Stack Desimal ke Biner\n";
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


