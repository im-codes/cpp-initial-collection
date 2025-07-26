#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

void header(){
	cout<<endl;
			cout<<setw(54)<<"IF Majemuk - Bilangan Prima\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){
	system("color 0a");
	header();
	int bilangan,jumlah;
	cout<<"\n Masukan Jumlah Bilangan : "; cin>>jumlah;
	cout<<endl;

	for(int i=1;jumlah!=0;i++){
		bilangan=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				bilangan=bilangan+1;
			}
		}
		if (bilangan==2){
			cout<<" "<<i;
			jumlah--;
		}
	}
	cout<<endl;
	
	getch();
	return 0;
}
