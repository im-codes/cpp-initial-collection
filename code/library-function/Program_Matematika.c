#include <stdio.h>
#include <math.h>


main(){
	int w,x,y,z;
	printf("Program Persamaan z = w^2 + x^3 + y^4\n\n");
	printf("Masukkan Nilai w : "); scanf("%d",&w);
	printf("Masukkan Nilai x : "); scanf("%d",&x);		
	printf("Masukkan Nilai y : "); scanf("%d",&y);
	z = pow(w,2) + pow(x,3) + pow(y,4);
	printf("\n\nNilai dari z adalah : %d",z);
}
