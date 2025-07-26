#include <iostream>
using namespace std;

int prototip(int a){          // Pendeklarasian fungsi ditulis secara lengkap dengan definisinya

    return a * a * 9 / 2;	   // sintaks untuk mengembalikan nilai kepada pemanggil

}

int main(){
	int B = 25;
    cout<<prototip(76)<<endl;    // Memanggil Fungsi
    cout<<prototip(543);
    cout<< B = B + 1;

    return 0;

}
