#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan
#include <math.h>

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(57)<<"Increment and Decremenet Operators\n";
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
	
	int inc,dec,j;
	
	cout<<"Masukan Jumlah Bilangan : "; cin>>j;
	
	cout<<"\nHitung Maju menggunakan Increment\n";
	for(int inc=1; inc<=j; inc++){
		if (inc == j){
			cout<<inc<<".";
		}else{
			cout<<inc<<", ";
		}
	}
 	
 	
 	cout<<"\n\nHitung Maju menggunakan Decrement :\n";
 	for(int dec=j; dec>=1; dec--){
		if (dec == 1){
			cout<<dec<<".";
		}else{
			cout<<dec<<", ";
		}
 	}
	
	
	
	// menunda program tertutup
	getch();	
	return 0;
}
