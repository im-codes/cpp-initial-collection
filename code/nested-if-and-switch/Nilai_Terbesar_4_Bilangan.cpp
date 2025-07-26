#include <iostream> // i/o
#include <stdlib.h> // fungsi system()

using namespace std;

int main(){
	// Mengubah warna huruf dan background
	system("COLOR 0A");
	
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
	
	return 0;
}

