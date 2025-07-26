#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan
#include <math.h>

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(49)<<"IF Umum(Tunggal)\n";
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
	int T,I,R,F,A;
	
	cout<<endl;
	cout<<" Program Penentuan Nilai Terbesar\n";
	
	cout<<"-----------------------------------------------------------------\n\n";
	
	// Input 4 bilangan
	cout<<" Masukan Bilangan I : "; cin>>I;
	cout<<" Masukan Bilangan R : "; cin>>R;
	cout<<" Masukan Bilangan F : "; cin>>F;
	cout<<" Masukan Bilangan A : "; cin>>A;
	cout<<endl<<endl;
	
	// Mengisikan T dengan nilai I
	T = I;
	
	// Jika R lebih besar dari T
	if(R > T)
		// Maka T diisikan dengan R
		T = R;
	
		// Jika F lebih besar dari T
	if(F > T)
		// Maka T diisikan dengan F
		T = F;
	
		// Jika A lebih besar dari T
	if(A > T)		
		// Maka T diisikan dengan A
		T = A;
	
	
	// Cetak Bilangan Terbesar
	cout<<" Nilai Terbesar Dari Empat Buah Bilangan = "<<T;
	cout<<endl;
	
	
	
	// menunda program tertutup
	getch();	
	return 0;
}
