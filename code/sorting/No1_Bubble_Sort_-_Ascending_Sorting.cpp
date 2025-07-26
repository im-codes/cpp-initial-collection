#include <iostream>		// Untuk Input dan Output					
#include <stdlib.h>		// Untuk mengubah warna background dan huruf		
#include <conio.h>  	// Untuk Input tanpa tampilan karakter 
#include <iomanip>		// untuk mengatur perataan teks

using namespace std;

//////////////////////////////////////////////////////////

void mains(void)
{
   int i, j,temp,pass=0;
   int a[5] = {0,1,7,5,3};
   cout <<" Input list ...\n ";
   for(i = 0; i<5; i++) {
      cout <<a[i]<<"\t";
   }
	cout<<endl;
	for(i = 0; i<5; i++) {
	   for(j = i+1; j<5; j++)
	   {
	      if(a[j] < a[i]) {
	         temp = a[i];
	         a[i] = a[j];
	         a[j] = temp;
	      }
	   }
	pass++;
	}
	
	cout <<" Sorted Element List ...\n ";
	for(i = 0; i<5; i++) {
	   cout <<a[i]<<"\t";
	}
	cout<<"\n Number of passes taken to sort the list:"<<pass<<endl;
	
}
		
void BubbleSort(int array1[],int n) 
{
	int i,k,tmp;
	for(i=1;i<=n;i++)
	{
		for(k=n;k>=i;k--)
		{
			if(array1[k]<array1[k-1])
			{
				tmp=array1[k];
				array1[k]=array1[k-1];
				array1[k-1]=tmp;
			}
		}
	}
}

///////////////////////////////////////////////////////////
//header
void header(){
	cout<<endl;

			cout<<setw(56.5)<<"Bubble Sort - Ascending Sorting\n";
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
