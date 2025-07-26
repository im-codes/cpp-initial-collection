#include <iostream>		// cout,cin, dan endl
#include <stdlib.h>		// sistem untuk memanggil command cmd
#include <conio.h>		// untuk menginput tanpa tampilan
#include <limits>		// mengatasi masalah cin loop
#include <ios>			// mengatasi masalah cin loop
#include <math.h>		// mengatasi masalah cin loop
#include <iomanip>		// untuk mengatur perataan teks
#include<stdio.h> 
#include<fstream> 

FILE *fp; 

using namespace std;

////////////////////////////////////////////////////////////////////////////////

//header
void header(){
	cout<<endl;

			cout<<setw(51.5)<<"Berkas - Menu Pilihan\n";
			cout<<setw(61)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
				cout<<"=";
			}
}
//PILIH MENU
void menu(void){
	header();
	
	cout<<"\n MENU PILIHAN";
	cout<<"\n ------------------------------------";
		cout<<"\n 1. Masukan Data";
		cout<<"\n 2. Simpan Data";
		cout<<"\n 3. Baca Data";
		cout<<"\n 4. Tampilkan Data Asal";
		cout<<"\n 5. Urutkan Data Secara Menaik";
		cout<<"\n 6. Tampilkan Data Terurut";
		cout<<"\n 7. Keluar";
	cout<<"\n ------------------------------------";
		
	
}

////////////////// PROSEDUR MENU ///////////////
//PILIHAN 1 - INPUT DATA
void input_data(int data[], int N){

	for(int a=0;a<N;a++){
		cout<<" Masukan Data ke - "<<a+1<<" : ";
		cin>>data[a];
	}
	cout<<"\n Data      : ";
	for(int a=0;a<N;a++){
		cout<<" "<<data[a];
		
	}
}

//PILIHAN 2 - SIMPAN DATA
void simpan_data(int data[], int N){	 
	if(data[0]!=-1){
		//membuat file baru
		ofstream buat_file("data1.dat", ios::in);
		
		//Menyimpan data ke file 
		fp=fopen(".\\data1.dat","w"); 		
		if(fp==NULL)cout<<"Error membuka berkas"<<endl; 
		else{ 
		
			for(int i=0;i<N;i++)fprintf(fp,"%d ",data[i]); 
			fclose(fp); 
			cout<<"\n Data Berhasil Disimpan.";
		} 
	}
	else cout<<" \n Data Kosong.";
	
}

//PILIHAN 3 - BACA DATA
void baca_data(int data[]){
	int i;
		
	//Membaca data dari file 
	fp=fopen(".\\data1.dat","r"); 	
	if(fp==NULL)cout<<"Error membuka berkas"<<endl; 
	else{ 
		i=0;
		while(!feof(fp)){ 
			fscanf(fp,"%d ", &data[i]);
			i++;
		} 
		cout<<endl; 
		fclose(fp); 
		cout<<"\n Data Berhasil Dibaca.";
	} 
}

//PILIHAN 4 - TAMPIL DATA ASAL
void tampil_data_asal(int data[], int N){
	if(data[0]!=-1){
		cout<<"\n Data        : ";
		for(int a=0;a<N;a++){
			cout<<" "<<data[a];
			
		}
	}
	else cout<<"\n Data Kosong";
}

//PILIHAN 5 - URUTKAN DATA SECARA DESCENDING
void BubbleSort(int data_urut[], int N, bool *terurut) 
{	//deklrasi variabel
	int i,k,tmp,n=N-1;
	if(data_urut[0]!=-1){
		//mengurutkan
		//pergeseran elemen ke kanan, memisahkan data yg sudah urut
		for(i=1;i<=n;i++)
		{	//pergeseran ke kiri, mengurutkan data yang belum urut
			for(k=n;k>=i;k--) 
			{	//membandingkan elemen k dengan k-1
				if(data_urut[k]<data_urut[k-1])
				{	//pertukaran nilai elemen
					tmp=data_urut[k];
					data_urut[k]=data_urut[k-1];
					data_urut[k-1]=tmp;
				}
			}
		}
		*terurut=1;
		cout<<"\n Data Telah Diurutkan.";
	}	
	else cout<<"\n Data Kosong.";
	
	
}

//PILIHAN 6 - TAMPILKANA DATA TERURUT
void tampil_data_urut(int data[], int N, bool *terurut){
	int i,k;
	if(data[0]!=-1){
		cout<<"\n Data	Terurut      : ";
		for(int a=0;a<N;a++){
			cout<<" "<<data[a];
		}
	}	
	else cout<<"\n Data Kosong.";
}

/////////////////////////////////////////////////////////

int main(){
	system("COLOR 0A");
	string jwb;
	
	
	//DEKLARASI VARIABEL 
	int N=10,data[N]={-1};
	bool terurut=false;
	
	
	// ULANG JIKA TERKONFIMASI OLEH USER
	do{	
		system("CLS");
		int pilih;
		menu();		
		
		
		//VALIDASI INPUT PILIHAN MENU
		while(true){				
			pilih = 0;
						
			cout<<"\n\n Masukan Nomor Pilihan (1..7) : "; cin>>pilih;		
			
			// mengabaikan enter pada pengulangan input			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		
			// menampilkan peringatan jika karakter input salah
			if(pilih != 0 && pilih == 1 || pilih == 2 || pilih == 3 || pilih == 4 || pilih == 5 || pilih == 6 || pilih == 7 ){
				break;
			} 
			else{
				system("cls");
				menu();
				cout<<"\n\n Pilihlah Sesuai Dengan Kode Program";					
			}
		}cout<<endl;
		// Garis Atas			
		for(int bates_atas=1; bates_atas<=60; bates_atas++){
			cout<<"=";
		}
		
		cout<<endl<<endl<<endl<<endl;
		
		
		
		
		// PEMANGGILAN PROSEDUR BERDASARKAN INPUT PILIH	
		switch ( pilih ) {	
    	case 1:
    		input_data(data, N);
           	break ;

     	case 2:
        	simpan_data(data, N);
     		break ;

     	case 3:
        	baca_data(data);
        	break;
        	
        case 4:
        	tampil_data_asal(data, N);
     		break ;

     	case 5:
        	BubbleSort(data,N, &terurut);
     		break ;

     	case 6:
        	tampil_data_urut(data,N,&terurut);
        	break;
        	
        case 7:
        	exit(0);
    		break ;
    	}
    	
    	
    	cout<<endl;
    	// membuat garis bawah
		for(int bates_bawah=1; bates_bawah<=80; bates_bawah++){
			cout<<"-";
		}		
		
		// KONFIRMASI ULANG
		cout<<" Tekan <M> Jika Ingin Memilih Program.\n";
		cout<<" Tekan Apa Saja Untuk Menutup Program.";		
        	
		// INPUT ULANG
		jwb = getch();	
			 
	}while(jwb=="m" || jwb=="M");
	
 	return 0;
}
