#include <iostream>		// cout, cin, dan endl
#include <stdlib.h>		// mengubah warna pada output
#include <iomanip>		// untuk format teks
#include <conio.h>		// input tanpa tampilan
#include <math.h>

using namespace std; 

// Header
void header(){
	cout<<endl;
	cout<<setw(49)<<"BitWise Operators\n";
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
	
	int B_SL,B_SR,B_AND,B_OR,B_XOR,B_NOT,I,R;

    // Input dalam desimal
    cout<<"Masukan Nilai I = "; cin>>I;
    cout<<"Masukan Nilai R = "; cin>>R;

    B_SL = I << R;
	B_SR = I >> R;
	B_AND= I & R;
	B_OR = I | R;
	B_XOR= I ^ R;
	B_NOT= ~R;

    
	cout<<"\nHasil dari "<<I<<" << "<<R<<" = "<<B_SL<<endl;
	cout<<"\nHasil dari "<<I<<" >> "<<R<<" = "<<B_SR<<endl;
	cout<<"\nHasil dari "<<I<<" & "<<R<<" = "<<B_AND<<endl;
	cout<<"\nHasil dari "<<I<<" | "<<R<<" = "<<B_OR<<endl;
	cout<<"\nHasil dari "<<I<<" ^ "<<R<<" = "<<B_XOR<<endl;
	cout<<"\nHasil dari  ~"<<R<<"   = "<<B_NOT<<endl;
	
	
	
	// menunda program tertutup
	getch();	
	return 0;
}
