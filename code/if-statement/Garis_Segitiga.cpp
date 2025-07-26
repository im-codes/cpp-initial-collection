#include <iostream> // i/o
#include <stdlib.h> // fungsi system()

using namespace std;

int main(){
	system("COLOR 0A");
	
	// Deklarasi
	int garis_1 = 0, garis_2 = 0 ,garis_3 = 0 ;
	cout<<"\n";
	cout<<" Program Untuk Menentukan apakah 3 Buah Bilangan yang menyatakan";
	cout<<" Panjang Garis\n Dapat  Membentuk Segitiga atau Tidak.\n\n";
	cout<<"-----------------------------------------------------------------\n\n";
	// Masukan Nilai Garis
	cout<<" Masukan Panjang Garis 1 : "; cin>>garis_1;
	cout<<" Masukan Panjang Garis 2 : "; cin>>garis_2;
	cout<<" Masukan Panjang Garis 3 : "; cin>>garis_3;
	cout<<"\n\n";
	
	// Jika salah satu dari ketiga garis bernilai 0
	if(garis_1 == 0 || garis_2 == 0 || garis_3 == 0){
		
		// maka cetak BUKAN SEGITIGA
		cout<<" BUKAN SEGITIGA\n\n";		
	}
	else{
		
		// Jika bukan 0 maka SEGI TIGA
		cout<<" Ketiga Garis Tersebut Dapat Membentuk SEGI TIGA.\n\n";
	}
	cout<<"=================================================================\n";
	return 0;
}

