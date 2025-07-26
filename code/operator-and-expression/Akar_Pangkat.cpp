#include <iostream> 
#include <math.h> 
using namespace std; 
main() 
{ 
int a,A,B,C;			
cout<<"Nilai A = ";
cin>>A;
cout<<endl<<"Nilai B = ";
cin>>B;
cout<<endl<<"Nilai C = ";
cin>>C;
a = pow(A,2) + pow(B,2) + pow(B,2);
cout<<endl<<"Hasil : "<<a;


float b,D,E;
cout<<"\nNilai D = ";
cin>>D;
cout<<endl<<"Nilai E = ";
cin>>E;
b = ( D / 2 ) + pow(E,2);
cout<<endl<<"Hasil : "<<b;


float c,x,y;
cout<<"\nNilai x = ";
cin>>x;
cout<<endl<<"Nilai y = ";
cin>>y;
c = sqrt((x/y)+pow(x,2));
cout<<endl<<"Hasil : "<<c;

}

