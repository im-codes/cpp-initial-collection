#include <iostream>
#include <math.h>												// Ambil fungsi pow() dari library math.h untuk perpangkatanya


using namespace std;
int main(){
	int sisa_dari_module;										// Mendeklarasikan Nilai-nilanya
	int pangkat = 0; 
	int bilangan_desimal = 0;
	int bilangan_biner;
	
	cout<<"Program Pengubah Bilangan Biner ke Bilangan Desimal menggunakan\nFungsi Pow() pada Library Math\n\n";
  
	cout<<"Bilangan Biner   : "; cin>>bilangan_biner;
	while(bilangan_biner>=1){									// Pengulangan selama bilangan yang diinputkan lebih besar atau sama dengan 1
    	sisa_dari_module = bilangan_biner%2;					// Mengisikan  nilai hasil module 2(sisa pembagian)  dari bilangan input ke variabel sisa module
    	bilangan_desimal = bilangan_desimal + sisa_dari_module * pow(2,pangkat);   // Mengisikan  nilai hasil dari bilangan desimal  + hasil module * 2 ^ nilai pangkat
    	bilangan_biner = bilangan_biner/10;						// mengisikan hail dari bilangan yang diinput  dibagi  10	ke bilangan input
    	pangkat++;              								// pangkat akan bertambah 1 setiap kali pengulangan 
	}
	cout<<"Bilangan Desimal : "<<bilangan_desimal<<endl;		// Mencetak bilangan desimal
	
	return 0;
	
}
