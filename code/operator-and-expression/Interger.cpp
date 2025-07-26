#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(49)<<"Tipe Data Integer\n";
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
	
	int   i;
	short r;
	long  f;
	
	i = 32768;
	r = 3276;
	f = 214748364;

	cout<<"Variabel i Int   : "<<i<<endl;
	cout<<"Variabel r Short : "<<r<<endl;
	cout<<"Variabel f Long  : "<<f<<endl;
	
	// menunda program tertutup
	getch();	
	return 0;
}
