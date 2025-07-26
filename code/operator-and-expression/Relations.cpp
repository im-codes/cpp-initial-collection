#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan
#include <math.h>

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(49)<<"Relations Operators\n";
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
	int T,A,B,C,D;
	
	cout<<endl;
	cout<<" Program Penentuan Nilai Terbesar\n";
	
	cout<<"-----------------------------------------------------------------\n\n";
	
	// Input 4 bilangan
	cout<<" Masukan Bilangan A : "; cin>>A;
	cout<<" Masukan Bilangan B : "; cin>>B;
	cout<<" Masukan Bilangan C : "; cin>>C;
	cout<<" Masukan Bilangan D : "; cin>>D;
	cout<<endl<<endl;
	
	// Mengisikan T dengan nilai A
	T = A;
	
	// Jika B lebih besar dari T
	if(B > T){
		
		// Maka T diisikan dengan B
		T = B;
	}
	
	// Jika C lebih besar dari T
	if(C > T){
		
		// Maka T diisikan dengan C
		T = C;
	}
	
	// Jika D lebih besar dari T
	if(D > T){
		
		// Maka T diisikan dengan D
		T = D;
	}
	
	// Cetak Bilangan Terbesar
	cout<<" Nilai Terbesar Dari Empat Buah Bilangan = "<<T;
	cout<<endl;
	
	
	
	// menunda program tertutup
	getch();	
	return 0;
}
