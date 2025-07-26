#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
	system("COLOR 0A");
	
	// Deklrasasi A dan N bertipe integer
	int A, N;
	
	// Input Nilai N
	cout<<endl;
	cout<<" Masukan Nilai N : "; cin>>N;
	
	// Jika A > 50, N + 10
	if( A > 50 ){
		N += 10;
	} // Jika bukan, N + 10 dua kali
	else{
		N += 10; 
		N += 10; 
	}
	
	// Cetak N
	cout<<endl;
	cout<<" Nilai N Menjadi = "<<N;
	
	return 0;
	
 }

