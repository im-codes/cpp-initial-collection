#include <iostream> // i/o
#include <stdlib.h> // fungsi system()

using namespace std;

int main(){
	system("COLOR 0A");
	int nilai_sebelumnya = 0, nilai = 1, nilai_berikutnya = 0;
	int jumlah_deret = 1;

    cout << "\n  Bilangan\n\n";
	
    cout << "  Fibonacci : ";

    while (jumlah_deret <= 10)
    {
        
        // Cetak angka pertama dengan 0
        if(jumlah_deret == 1)
        {
            cout << nilai_sebelumnya<<"  ";
            
        }
        
        // Cetak angka kedua dengan 1
        if(jumlah_deret == 2)
        {
            cout << nilai << "  ";
            
        }
        
        /* mencari Bilangan Fibonacci, 
         menambah angka terakhir dengan angka sebelumnya */
		nilai_berikutnya = nilai_sebelumnya + nilai;
		
	 	/*  mengisikan nilai_sebelumnya dengan angka terakhir
		 dan nilai dengan angka berikutnya */
		nilai_sebelumnya = nilai;
        nilai = nilai_berikutnya;
        
         // Mencetak deret bilangan fibonacci
        cout <<nilai_berikutnya<< "  ";
    jumlah_deret++;
    }
	cout << "\n";
	
	return 0;
}
	

