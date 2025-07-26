#include <iostream> 
#include <math.h>																								// Menambahkan Math sebagai Library
using namespace std; 
main(){					
	int A,B,C,Y;																								// Deklarasi Variabel tipe integer
	cout<<"\n Program Aritmatika Pangkat dari ()A^2) + (B^2) + (C^3) \n\n";
	cout<<" Nilai A :"; cin>>A;																					// Memasukkan Nilai-nilai
	cout<<" Nilai B :"; cin>>B;
	cout<<" Nilai C :"; cin>>C;
	Y = pow(A,2) + pow(B,2) + pow(C,3);																			// Menghitung pangkat menggunakan Fungsi Pow()
	cout<<"\n\n Hasil dari ("<<A<<"^2) + ("<<B<<"^2) + ("<<C<<"^3) adalah : "<<Y;										// Menampilkan Hasil
		
}




