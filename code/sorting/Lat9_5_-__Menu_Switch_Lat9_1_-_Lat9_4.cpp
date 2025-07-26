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

void Cetak(int data [], int N)  
{ 
	int i ;  
	for ( i=0 ; i<N ; i++) 
		cout<<setw ( 3 )<<data [ i ] ;  

} 

void InputData(int data[], int &N){
	int i;
		
	//input banyak bilangan
	cout<<" Masukan Banyak Bilangan : "; 
	cin>>N; 
	
	cout<<endl; 
	//input nilai bilangan
	for(i=0;  i<N;  i++ ) 
	{ 
		cout<<" Elemen ke-"<<i<<"  :  "; 
		cin>>data[ i ] ; 
	} 
	
}

void ShellMenaik(int Nilai [], int N){

   int i, k, l; 
   int temp, jarak, s; 
 
   //Proses pengurutan 
   jarak = N/2; 
   cout<<"\n\n Jarak = "<<jarak; 
   while (jarak >= 1) 
   { 
      do 
      { 
         s=0; 
         for (i =0; i<=(N-jarak)-1; i++) 
         { 
            k=i+ jarak; 
            if(Nilai [i] > Nilai [k]) 
            { 
               temp = Nilai [i]; 
               Nilai [i] = Nilai [k]; 
               Nilai [k] = temp; 
               s=1; 
               for(l=0; l<N; l++)
					cout<<setw (4)<<Nilai [l]; 
               cout<<"\n\t"; 
            getch(); 
            } 
         } 
      } 
      while(s!=0); 
      jarak /=2; 
      cout<<"\n Jarak = "<<jarak; 
   } 
  
}

void ShellMenurun(int Nilai [], int N){
	int i, k, l; 
   int temp, jarak, s; 
   
   //Proses pengurutan 
   jarak = N/2; 
   
   cout<<endl;
   cout<<"\n Jarak = "<<jarak;
   while (jarak >= 1) 
   { 
      do 
      { 
         s=0; 
         for (i =0; i<=(N-jarak)-1; i++) 
         { 
            k=i+ jarak; 
            if(Nilai [i] < Nilai [k]) 
            { 
               temp = Nilai [i]; 
               Nilai [i] = Nilai [k]; 
               Nilai [k] = temp; 
               s=1; 
               for(l=0; l<N; l++) 
                  cout<<setw (4)<<Nilai [l]; 
               cout<<"\n\t"; 
            getch(); 
            } 
         } 
      } 
      while(s!=0); 
      jarak /=2; 
      cout<<"\n Jarak = "<<jarak; 
   } 
}

void InsertionMenaik(int Nilai [], int N){
	
	int i,  j, k; 
	int temp; 
   
   //Proses pengurutan 
   for(i=1; i<N; i++) 
   { 
      temp = Nilai [ i ] ; 
      j=i-1 ; 
      while ((temp <= Nilai [ j ]) && (j>=1)) 
      { 
	 Nilai [j+1] = Nilai [ j ]; 
	 j--; 
      } 
      if(temp >= Nilai [ j ]) 
         Nilai [j+1] = temp; 
      else 
      { 
         Nilai [ j + 1] = Nilai [ j ]; 
         Nilai [ j ] = temp; 
      } 
      cout<<endl; 
      for(k=0; k<N; k++) 
         cout<<setw ( 3 )<<Nilai [ k ]; 
   } 
	
}

void InsertionMenurun(int Nilai [], int N){
	
	int i,  j,  k; 
   int temp; 
   
   //Proses pengurutan 
   for(i=1; i<N; i++) 
   { 
      temp = Nilai [ i ] ; 
      j=i-1 ; 
      while ((temp > Nilai [ j ]) && (j>=1)) 
      { 
	 Nilai [j+1] = Nilai [ j ]; 
	 j--; 
      } 
      if(temp <= Nilai [ j ]) 
         Nilai [j+1] = temp; 
      else 
      { 
         Nilai [ j + 1] = Nilai [ j ]; 
         Nilai [ j ] = temp; 
      }
      cout<<endl; 
      for(k=0; k<N; k++) 
         cout<<setw ( 3 )<<Nilai [ k ]; 
   } 
}
///////////////////////////////////////////////////////////////////////////////////////////////	

void header(){
	cout<<endl;
			cout<<setw(58.5)<<"Lat9_5 -  Menu Switch Lat9_1 - Lat9_4\n";
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
		cout<<"\n 1. Input Bilangan";
		cout<<"\n 2. Pengurutan Shell Sort Secara Menaik";
		cout<<"\n 3. Pengurutan Shell Sort Secara Menurun";
		cout<<"\n 4. Pengurutan Insertion Sort Secara Menaik";
		cout<<"\n 5. Pengurutan Insertion Sort Secara Menurun\n";
		
		while(true){				
			pilih = 0;
						
			cout<<"\n Silakan Pilih Menu Program Yang Diinginkan : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika kolom melebihi batas maksimal
			if(pilih<6){
				break;
			} 
			else{
				system("cls");
				header();
				cout<<"\n DAFTAR MENU PROGRAM :";
				cout<<"\n 1. Input Bilangan";
				cout<<"\n 2. Pengurutan Shell Sort Secara Menaik";
				cout<<"\n 3. Pengurutan Shell Sort Secara Menurun";
				cout<<"\n 4. Pengurutan Insertion Sort Secara Menaik";
				cout<<"\n 5. Pengurutan Insertion Sort Secara Menurun\n";
				cout<<"\n Pilihlah Sesuai Dengan Nomor Program";					
			}
		}
		
		cout<<endl<<endl;
		ulang:
			system("cls");					
			header();
			cout<<"\n DAFTAR MENU PROGRAM :";
			cout<<"\n 1. Input Bilangan";
			cout<<"\n 2. Pengurutan Shell Sort Secara Menaik";
			cout<<"\n 3. Pengurutan Shell Sort Secara Menurun";
			cout<<"\n 4. Pengurutan Insertion Sort Secara Menaik";
			cout<<"\n 5. Pengurutan Insertion Sort Secara Menurun\n";
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
	        		cout<<" 1. Input Bilangan.\n\n";
					InputData(Nilai, N);
					cout<<"\n\n Data Berhasil Dimasukkan.";
	         		break ;
	 
	         	case 2:
	         		cout<<" 2. Pengurutan Shell Sort Secara Menaik.\n";
	            	ShellMenaik(Nilai, N);
	            	cout<<"\n\n Data Berhasil Diurutkan.";
	         		break ;
	 
	         	case 3:
	         		cout<<" 3. Pengurutan Shell Sort Secara Menurun.\n";
	            	ShellMenurun(Nilai, N);
	            	cout<<"\n\n Data Berhasil Diurutkan.";
	        		break ;
	        	
	        	case 4:
	        		cout<<" 4. Pengurutan Insertion Sort Secara Menaik\n";
	            	InsertionMenaik(Nilai, N);
	            	cout<<"\n\n Data Berhasil Diurutkan.";
	        		break ;
	        	case 5:
	        		cout<<" 5. Pengurutan Insertion Sort Secara Menurun\n";
	            	InsertionMenurun(Nilai, N);
	            	cout<<"\n\n Data Berhasil Diurutkan.";
	        		break ;
        	}
        	cout<<endl;
        	
        	cout<<"\n\n Data :  ";Cetak(Nilai, N);
        	
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


