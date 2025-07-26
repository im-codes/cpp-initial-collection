#include <iostream> // i/o
#include <stdlib.h> // fungsi system()

using namespace std;

int main(){
	system("COLOR 0A");
	
	
	cout<<"\n  Bilangan\n\n";
	
	
	cout<<"  Ganjil : ";
	
	/* untuk no yg berisi 1, selama nomor 
	 kurang/sama dari 35, nomor akan ditambah 1 
	 dan menjalankan perintah berikut */
	for(int no=1; no<=35; no++){
		
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
	}
	
	cout<<"\n  Genap  : ";
	
	/* untuk no yg berisi 1, selama no 
	 kurang/sama dari 35, no akan ditambah 1 
	 dan menjalankan perintah berikut */
	for(int no=1; no<=35; no++){
		/* bil genap akan tersisa 0 jika
		 dibagi 2 */
		if (no % 2 == 0){
			// cetak no
			cout<<no<<" ";
				
		}		
	}
	
	cout<<"."<<endl;
	
	return 0;
}
	

