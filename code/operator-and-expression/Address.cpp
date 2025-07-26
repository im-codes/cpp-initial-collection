#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan
#include <math.h>

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(49)<<"Address Operators\n";
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
	

    int R;
    cout<<"Masukan Nilai Variabel R   : "; cin>>R;

    cout<<"Alamat dari Variabel R     : "<<&R<<endl;
    cout<<"Nilai dari Alamat "<<&R<<" : "<<*&R<<endl;

	
	
	// menunda program tertutup
	getch();	
	return 0;
}
