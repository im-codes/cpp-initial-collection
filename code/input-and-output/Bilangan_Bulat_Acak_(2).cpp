#include <iostream>
#include <stdlib.h>													// Sebagai library fungsi rand dan srand yang akan menghasilkan bilangan acak
#include <time.h>					 								
using namespace std;	
int main(){
    int bil_acak1,bil_acak2,bil_acak3,bil_acak4;							
    srand(time(0));													/* sebagai titik awal pengacakan, agar menghasilkan bilangn bulat acak yang 
    																   berbeda pada saat program dijalankan berulang */
    bil_acak1 = rand()%51;											// bilangan yang di modulo(bagi sisa) 51 akan menghasilkan sisa 0 - 50 
    bil_acak2 = rand()%51;
    bil_acak3 = rand()%51;
    bil_acak4 = rand()%51;
    
    cout<<"Program Penjumlahan Empat Bilangan Bulat Acak 0 - 50\n\n";
    
    
    cout<<"Bilangan Bulat Acak Pertama : "<<bil_acak1<<endl;
    cout<<"Bilangan Bulat Acak Kedua   : "<<bil_acak2<<endl;
    cout<<"Bilangan Bulat Acak Ketiga  : "<<bil_acak3<<endl;
    cout<<"Bilangan Bulat Acak Keempat : "<<bil_acak4<<endl<<endl;
    
    cout<<"Total : "<<bil_acak1 + bil_acak2 + bil_acak3 + bil_acak4; // Total nilai bilangan bulat
    return 0;
 }
