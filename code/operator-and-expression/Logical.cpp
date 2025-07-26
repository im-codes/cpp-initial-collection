#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan
#include <math.h>

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(49)<<"Logical Operators\n";
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
	
	// Deklarasi variabel tipe integer
	int T,A,B,C;
	
	cout<<endl;
	cout<<" Program Penentuan Nilai Terkecil\n";
	
	cout<<"-----------------------------------------------------------------\n\n";
	
	// Input 4 bilangan
	cout<<" Masukan Bilangan A : "; cin>>A;
	cout<<" Masukan Bilangan B : "; cin>>B;
	cout<<" Masukan Bilangan C : "; cin>>C;

	cout<<endl<<endl;
	
	if (A < B && A < C){
	
		T=A;
	}
	else {	
		if (A < B && A > C) {
			T=C;
		}
		else{
		
			if (A > B && B < C) {
				T=B;
			}
			else{
				T=C;
			}
		}
	
	}	
	
	// Cetak Bilangan Terbesar
	cout<<" Nilai Terkecil Dari Tiga Buah Bilangan = "<<T;
	cout<<endl;
	
	
	
	// menunda program tertutup
	getch();	
	return 0;
}
