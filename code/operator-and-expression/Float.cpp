#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(49)<<"Tipe Data Float\n";
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
	
	float 		i;
	double 		r;
	long double f;
	
	i = 3.2768;
	r = 3.27623;
	f = 9.94742;

	cout<<"Variabel i Float        : "<<i<<endl;
	cout<<"Variabel r Double       : "<<r<<endl;
	cout<<"Variabel f Long Double  : "<<f<<endl;
	
	// menunda program tertutup
	getch();	
	return 0;
}
