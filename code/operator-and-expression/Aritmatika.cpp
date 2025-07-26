#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan
#include <math.h>

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(50)<<"Aritmatika Operators\n";
	cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
	// Garis Atas			
	for(int bates_atas=1; bates_atas<=80; bates_atas++){
		cout<<"=";
	}
	cout<<endl;
}

int main(){
	system("color 0a");
	// panggil header
	header();
	
	int M, I,r,f,a,n, Maulana;
	
	cout<<"\nProgram Persamaan M    = (I + (r * f) - a / n) mod Maulana\n\n";
	cout<<"Masukkan Nilai I       : "; cin>>I;
	cout<<"Masukkan Nilai r       : "; cin>>r;
	cout<<"Masukkan Nilai f       : "; cin>>f;
	cout<<"Masukkan Nilai a       : "; cin>>a;
	cout<<"Masukkan Nilai n       : "; cin>>n;
	cout<<"Masukkan Nilai Maulana : "; cin>>Maulana;
	
	M = (I + (r * f) - a / n) % Maulana;
	
	cout<<"\n\nNilai dari M adalah : "<<M;
	
	// menunda program tertutup
	getch();	
	return 0;
}
