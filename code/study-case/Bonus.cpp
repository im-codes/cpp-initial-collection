#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;
void header(){
	cout<<endl;
			cout<<setw(48)<<"Bonus pelanggan\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

//fungsi untuk merubah bilangan menjadi format rupiah
string format_rupiah(int bilangan, string pemisah = "."){	
	// merubah nilai menjadi string				
	stringstream st; st<<bilangan;
	string rp = st.str();
	
	// mencari jumlah digit untuk lokasi penambahan "."
	int digit = rp.length() - 3;
	
	// selama digit masih lebih besar dari 0
	while(digit > 0){
		
		/* bilangan akan ditambahkan "." pada 
		digit ke 3 dari kanan */
		rp.insert(digit,pemisah);
		
		// jumlah digit akan di kurang 3							
		digit -= 3;
	}
	
	/* mengembalikan nilai dari bilangan yang sudah
	diformat  ke rupiah kepada pemanggil dan menambahkan
	",00" pada nilai tersebut */	
	return rp + ",00";														
}
	
int main(){
	// mengubah warna background dan huruf
	system("COLOR 0A");
	
	// jawaban hitung ulang atau tidak
	string jwb;
	
	/* program akan menghitung ulang selama jawaban yang
	diinputkan y atau Y pada akhir pengulangan 	*/
	do{	
		// untuk mereset layar pada saat hitung ulang
		system("CLS");
		header();
		
		
		// membuat variabel tipe long long dan string
		long long total=0,bonus=0;
	
		cout<<"\n\n";
		cout<<"-------------- Program Pembelian Pelanggan ------------------\n\n\n";
		
		// Input Jumlah Barang
		cout<<" Subtotal Pembelian   :    "; cin>>total; 
		cout<<"\n";
			
		cout<<"===========================================================\n\n";
		
				
		if(total>=100000 && total<200000){
			bonus=1;													
		}
		else if(total>=200000 && total<300000){
			bonus=2;
					
		}
		else if(total>=300000 && total<400000){
			bonus=3;
		}
		else if(total>=400000 && total<500000){
			bonus=4;			
		}
		else if(total>=500000){
			bonus=5;		
		}
		else{
			bonus=6;			
		}
		
		switch(bonus)	
		{
			case 1:
				total= total - (total * 0.05);
				cout<<" Bonus Yang Diperoleh = Discount 5%\n";
				cout<<" Total Pembayaran     = Rp"<<format_rupiah(total);
				break;
			case 2:
				cout<<" Bonus Yang Diperoleh = Tiket Ke Yogya\n";
				cout<<" Total Pembayaran     = Rp"<<format_rupiah(total);
				break;
			case 3:
				cout<<" Bonus Yang Diperoleh = Tiket ke Bali\n";
				cout<<" Total Pembayaran     = Rp"<<format_rupiah(total);
				break;
			case 4:
				cout<<" Bonus Yang Diperoleh = Jam Tangan Rolex\n";
				cout<<" Total Pembayaran     = Rp"<<format_rupiah(total);
				break;
			case 5:
				cout<<" Bonus Yang Diperoleh = Tiket ke Swiss\n";
				cout<<" Total Pembayaran     = Rp"<<format_rupiah(total);
				break;
			case 6:
				cout<<" Bonus Yang Diperoleh = TIDAK ADA\n";
				cout<<" Total Pembayaran     = Rp"<<format_rupiah(total);
		}
				
			
		
		cout<<endl<<endl; 				
		 
		cout<<"===========================================================\n\n";
		
		// mencetak keterangan
		cout<<"Tekan Y untuk menghitung ulang.\n";
		cout<<"Tekan apa saja untuk menutup program.";
		
		// input jawaban
		jwb = getch();
	} 
	
	/*  program akan menjalankan intruksi-intruksi didalam 
	"do" jika diinputkan y atau Y */
	while (jwb=="y" || jwb=="Y");
 	return 0;
}

