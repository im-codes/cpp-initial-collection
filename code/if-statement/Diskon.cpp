#include <iostream>	// Untuk Input dan Output					
#include <stdlib.h>	// Untuk mengubah warna background dan huruf		
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 

using namespace std;

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
		
		// membuat variabel tipe long long,float dan string
		long long harga_barang,jumlah_barang,beli,total_bayar;
		float diskon;				
		string persen_diskon;
		
		cout<<"\n\n";
		cout<<"-------------- Program Penghitung Diskon ------------------\n\n\n";
		
		// Input Harga Satuan barang
		cout<<"  Harga Barang         : Rp "; cin>>harga_barang;	 
    
		// Input Jumlah Barang
		cout<<"  Jumlah Barang        :    "; cin>>jumlah_barang; 
		cout<<"\n";
			
		cout<<"===========================================================\n\n";
		
		// Menghitung Total Harga pembayaran
	 	beli = harga_barang * jumlah_barang;
		 
		/*	Menghitung Total Harga pembayaran 
		dipotong dengan diskon 15% jika jumlah  barang >=100 */
		if(jumlah_barang>=100){		
			persen_diskon = " 15%";	
			diskon = beli * 0.15;
													
		}
		
		/*	Menghitung Total Harga pembayaran 
		dipotong dengan diskon 5% jika jumlah  barang <100 */	
		else {
			persen_diskon = "  5%";	
			diskon = beli * 0.05;
													
		}

		// Harga awal dipotong diskon
		total_bayar = beli - diskon;	
			
		
		// Mencetak Jumlah Bayar yang dibeli	
		cout<<"  Jumlah Barang        :    "<<jumlah_barang<<endl;
		
		// Mencetak Harga Pembayaran	
		cout<<"  Subtotal Harga Bayar : Rp "<<format_rupiah(beli)<<endl;

		// Mencetak Diskon 	 
		cout<<"  Potongan Diskon"<<persen_diskon<<"  : Rp "<<format_rupiah(diskon)<<endl;
		
		// Mencetak Total Harga Pembayaran 
		cout<<"  Total Harga Bayar    : Rp "<<format_rupiah(total_bayar)<<endl<<endl; 				
		 
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

