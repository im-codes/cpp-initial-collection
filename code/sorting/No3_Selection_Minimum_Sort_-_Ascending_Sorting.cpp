#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////
//deklarasi prototif fungsi untuk menemukan nilai elemen terkecil
int findSmallest (int[],int);  
void mains(void)  
{  //varabel array yang merupakan tempat pencarian
    int myarray[10] = {11,5,2,20,42,53,23,34,101,22};  
    int pos, //pos=urutan elemen nilai terkecil,
	temp,	//temp=variabel sementara untuk menampung nilai penukaran,
	pass=0;  		 //pass=sebagai penghitung berapa kali pass dalam prosesnya
    cout<<"\n Input list of elements to be Sorted : \n ";  
    //cetak data pada array acak
    for(int i=0;i<10;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 
    //proses pengurutan data
    for(int i=0;i<10;i++)  
    {  
        pos = findSmallest (myarray,i);  //mencari nilai terkecil
        //penukaran nilai terkecil dengan nilai pada elemen ke i
        temp = myarray[i];  
        myarray[i]=myarray[pos];  
        myarray[pos] = temp; 
        pass++;
    }  
    cout<<" ___________________________________________________________________________\n\n"; 
	cout<<"\n Sorted list of elements is : \n "; 
	//cetak data array yang sudah terurut
    for(int i=0;i<10;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 
    cout<<"\n\n Number of passes required to sort the array: "<<pass;
   
}  
//deksripsi fungsi cari nilai terkecil
int findSmallest(int myarray[],int i)  
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  //penampung nilai terkecil
    position = i;  			
    for(j=i+1;j<10;j++)  
    {  
        if(myarray[j]<ele_small)  //jika elemen ke j < nilai terkecil
        {  
            ele_small = myarray[j];  //nilai terkecil = j
            position=j;  
        }  
    }  
    return position;  //kembalian nilai ke si pemanggil 
}
void SeleksiMinimum(int array1[],int n) 
{
	int i,j,tmp,imin;
	for(i=0;i<=n-1;i++)
	{
		imin=i;
		for(j=i+1;j<=n;j++)
		{
			if(array1[j]<array1[imin])
				imin=j;
		}
		tmp=array1[imin];
		array1[imin]=array1[i];
		array1[i]=tmp;
	}
}


///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(62)<<"Selection Minimum Sort - Ascending Sorting\n";
			cout<<setw(61)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
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

		mains();	
	
		cout<<endl; 		 
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
