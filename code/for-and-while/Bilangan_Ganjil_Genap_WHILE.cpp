#include <iostream> // i/o
#include <stdlib.h> // fungsi system()


using namespace std;

int main(){
	system("COLOR 0A");
	int no=1;
	
	cout<<"\n  Bilangan\n\n";
	
	
	cout<<"  Ganjil : ";
	
	/* selama no masih <= 35, no akan menjalankan 
		perintah berikut */
	while(no<=35){
		
		/* bil ganjil akan tersisa 1 jika
		dibagi 2 */
		if (no % 2 == 1){
			// jika no adalah 9
			if(no==9){
				// cetak angka no
				cout<<no<<"  ";
			} // jika no bukan angka 9
			else{
				
				// cetak angka no
				cout<<no<<" ";
			}			
		}
		// mengisikan nilai no dengan  no + 1
		no++;		
	}
	
	cout<<"\n  Genap  : ";
	no=1;
	/* selama no masih <= 35, no akan menjalankan 
		perintah berikut */
	while(no<=35){
		/* bil genap akan tersisa 0 jika
		 dibagi 2 */
		if (no % 2 == 0){
			// cetak no
			cout<<no<<" ";
		}
		// mengisikan nilai no dengan  no + 1
		no++;		
	}
	
	cout<<"."<<endl;
	
	return 0;
}
	

