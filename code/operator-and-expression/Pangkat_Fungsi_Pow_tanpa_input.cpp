#include <iostream> 
#include <math.h>																								// Menambahkan Math sebagai Library
using namespace std; 
main(){					
	int Y;																								       // Deklarasi Variabel Bertipe Integer
	const int A = 5;																						   // Mengisikan nilai tetap pada variabel
	const int B = 4;																								
	const int C = 3;																								
	cout<<"Program Penghitung Pangkat dari Y = A^2 + B^2 + C^3 Menggunakan Fungsi Pow \npada Math Library.\n\n";
	cout<<"Nilai A :"<<A<<endl;																				   // Menampilkan Nilai-nilai
	cout<<"Nilai B :"<<B<<endl;
	cout<<"Nilai C :"<<C<<endl;
	Y = pow(A,2) + pow(B,2) + pow(C,3);																			// Menghitung pangkat menggunakan Fungsi Pow()
	cout<<"\n\nHasil dari "<<A<<"^2 + "<<B<<"^2 + "<<C<<"^3 adalah :"<<Y;										// Menampilkan Hasil
		
}




