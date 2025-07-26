#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks
#include <math.h>  		// fungsi aritmatika akar

using namespace std;
//header
void header(){
	cout<<endl;

			cout<<setw(48)<<"Persamaan Akar\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}

int main(){
	system("COLOR 0A");
	// variable jawaban restart/tutup
	string jwb;
	do{	
		system("CLS");
		header();
		cout<<"\n\n";
///////////////////////////////////////////////////////////////////////////////////////////////	
		
		// deklarasi nilai-nilai
		int a=0, b=0, c=0, d=0;
		float x1=0, x2=0;
	
		
		// input bilangan-bilangan
		cout<<  " Masukkan Bilangan a   : ";
		cin>>a;
		cout<<"\n Masukkan Bilangan b   : ";
		cin>>b;
		cout<<"\n Masukkan Bilangan c   : ";
		cin>>c;
		
		// hitung d
		d = (b*b) - (4*a*c);
		
		//jika d lebih dari 0 maka hitung sesuai dengan persamaan
		if (d>0){
			x1 = (-b + sqrt(d)) / (2*a);
      		x2 = (-b - sqrt(d)) / (2*a);	
		}
		
		// jika d sama dengan 0 maka x2 dan x1 bernilai sama, maka hitung x1 saja dan isikan x1 ke x2
		else if (d==0){
			x1 = (-b + sqrt(d)) / (2*a);
      		x2 = x1;
		}
		
		//jika nilai d kurang dari 0 atau negatif maka cetak akar imajiner
		else {
      		cout<<"\n Akar Imajiner"<<endl;
      		//selesai
	 		goto selesai;
		}
		
		// menampilkan hasil persamaan
		cout<<"\n x1                    = "<<x1;
		cout<<"\n x2                    = "<<x2;
		cout<<"\n "<<a<<" * "<<x1<<"^2 + " <<b<<" * "<<x2<<" + "<<c<<" = 0";    
		
		selesai:  
	
//////////////////////////////////////////////////////////////////////////////////////////////	
	
		cout<<endl<<endl; 		 
		cout<<"===========================================================\n\n";		
		// mencetak keterangan
		cout<<" Tekan Y untuk menghitung ulang.\n";
		cout<<" Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}
