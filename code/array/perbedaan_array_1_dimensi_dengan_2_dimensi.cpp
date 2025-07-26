#include <iostream>
#include <stdlib.h>
#include <conio.h>		// input tanpa tampilan
#include <iomanip>		// untuk format teks


using namespace std;

// Header
void header(){
	cout<<endl;
			cout<<setw(61)<<"PERBEDAAN ARRAY 1 DIMENSI DENGAN 2 DIMENSI\n";
			cout<<setw(60)<<"By Muhammad Irfan Maulana - 201011401753\n";
			
			// Garis Atas			
			for(int bates_atas=1; bates_atas<=80; bates_atas++){
			cout<<"=";
			}
}

int main(){	
	system("COLOR 0A");
	header();
	int x,y;
	int A[9]={4,5,3,4,5,5,9,8,7};
	int B[3][3] = {{4,5,3},{4,5,5},{9,8,7}};
	
	cout<<"\n a. Array Satu Dimensi";
	cout<<"\n    -------------------------------------\n";	
	cout<<"    | ";
	for(x=0; x<=8; x++){				
		cout<<A[x];
		cout<<" | ";
	}	
	cout<<"\n    -------------------------------------\n\n";
	
	
	cout<<" b. Array Dua Dimensi";
	cout<<"\n    ----------------\n";	
	for(x=0; x<=2; x++){
		
		
		if(x==0){
			cout<<"    | ";
		}
		else{
			cout<<"    | ";
		}
		
		for(y=0; y<=2; y++){
			cout<<B[x][y]<<"  ";
			
			
			cout<<"| ";
		}
		cout<<endl;
		cout<<"    ----------------\n";
	}
	
	getch();
	return 0;
		
}



