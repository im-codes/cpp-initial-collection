#include <iostream>
#include <iomanip>
#include <sstream> 	// Untuk membuat fungsi format rupiah
#include <conio.h>
#include <stdlib.h>

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
	
	/*	mengembalikan nilai dari bilangan yang sudah
		diformat  ke rupiah kepada pemanggil dan menambahkan
		",00" pada nilai tersebut	*/	
	return "Rp " + rp + ",00";														
}

int main(){
	string jwb;
	do {
		system("CLS");
		long long unsigned cicil,bunga,sisa,utang_awal,bulan = 0;
		long long unsigned t_cicil,t_bunga = 0; 
		
		cout<<"\n\n Pinjaman : "; cin>>utang_awal;
		cout<<endl;
		
		if(bulan==0){
			sisa = utang_awal;
		}
		
		cout<<setiosflags(ios::left);
		cout<<" "<<setw(7)<<"Bulan"<<setw(20)<<"Saldo/Sisa Hutang"<<setw(18)<<"Cicilan Awal"<<setw(16)<<"Bunga 1,5%"<<setw(18)<<"Cicilan Perbulan\n";
		cout<<"==============================================================================\n\n";
		while(sisa>=1000000){
			cicil  = sisa / 100 * 10;	
			bunga  = sisa / 100 * 1.5;	
					
			bulan++;		
			
			cout<<" "<<setw(7)<<bulan<<setw(20)<<format_rupiah(sisa)<<setw(18)<<format_rupiah(cicil)<<setw(16)<<format_rupiah(bunga);
			
			sisa  	-= cicil;
			cicil 	+= bunga;	
			t_cicil += cicil;
			t_bunga += bunga;
			
			cout<<setw(18)<<format_rupiah(cicil);
			
		}
		
		if(sisa!=0){
			cicil  = sisa;
			bunga  = sisa / 100 * 1.5;
			
			bulan++;		
						
			cout<<" "<<setw(7)<<bulan<<setw(20)<<format_rupiah(sisa)<<setw(18)<<format_rupiah(cicil)<<setw(16)<<format_rupiah(bunga);
			
			sisa  -= cicil;	
			cicil += bunga;
			t_cicil += cicil;
			t_bunga += bunga;	
				
			cout<<setw(18)<<format_rupiah(cicil);
		}
		cout<<"\n ------------------------------------------------------------------------------\n\n";
		
		cout<<resetiosflags(ios::left);
		cout<<" Total Bunga     : "<<format_rupiah(t_bunga)<<endl;
		cout<<" Total Cicilan   : "<<format_rupiah(t_cicil)<<endl;
		cout<<" Diangsur Selama : "<<bulan<<" Bulan\n\n";
		
		
		cout<<"\n ------------------------------------------------------------------------------\n\n";	
		cout<<" Tekan <Y> Jika Ingin Menghitung Ulang.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";
		jwb = getch();
		
	 
	}
	while(jwb=="y" || jwb=="Y");
	
	return 0;		
}
