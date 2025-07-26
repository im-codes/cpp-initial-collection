#include <iostream> 

using namespace std; 
int fpangkat(int a, int b) { 																				   // Deklarasi Fungsi Fpangkat bertipe integer
	if(b==1)																								   // Jika nilai pangkat sama dengan 1,
		return a;																							   // maka fungsi akan mengembalikan output yang sama dengan bilangannya
	else																									   // Jika salah,
		return a*fpangkat(a,(b-1));																			   // maka kalikan nilai bilangan dengan fungsi fpangkat sampai 
}																											   // pangkat dikurangi 1 hasilnya 1

main(){					
	int A,B,C,Y;																								// Deklarasi Variabel tipe integer
	cout<<"Program Penghitung Pangkat dari Y = A^2 + B^2 + C^3 Tanpa Menggunakan Fungsi \nPow pada Math Library.\n\n";
	cout<<"Nilai A :"; cin>>A;																					// Memasukkan Nilai-nilai 
	cout<<"Nilai B :"; cin>>B;
	cout<<"Nilai C :"; cin>>C;
	Y = fpangkat(A,2) + fpangkat(B,2) + fpangkat(C,3);															// Menghitung pangkat menggunakan Fungsi fpangkat() yang telah dibuat
	cout<<"\n\nHasil dari "<<A<<"^2 + "<<B<<"^2 + "<<C<<"^3 adalah :"<<Y;										// Menampilkan Hasil
		
}








