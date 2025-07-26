#include <iostream>
#include <math.h>
using namespace std;

main(){
	float w,x,y,z;
	cout<<"Program Persamaan z = w^2 + x^3 + y^4\n\n";
	cout<<"Masukkan Nilai w : "; cin>>w;
	cout<<"Masukkan Nilai x : "; cin>>x;
	cout<<"Masukkan Nilai y : "; cin>>y;
	z = pow(w,2) + pow(x,3) + pow(y,4);
	cout<<"\n\nNilai dari z adalah : "<<z;
}
