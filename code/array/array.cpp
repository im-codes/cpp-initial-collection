#include <iostream>
#include <stdlib.h>
#include <conio.h>		// input tanpa tampilan


using namespace std;
int main(){
	system("COLOR 0A");
	int x,y,isi;
	int A[5][5];
	int B[3][3] = {{4,5,3},{4,5,5},{9,8,7}};
	
	cout<<"\n    --------------------------\n";
	cout<<" a.";
	for(x=0; x<=4; x++){
		
		
		if(x==0){
			cout<<" | ";
		}
		else{
			cout<<"    | ";
		}
		
		for(y=0; y<=4; y++){
			isi++;
			A[x][y] = isi;
			
			
			if(A[x][y]>=10){
				cout<<A[x][y]<<" ";
			}
			else{
			cout<<A[x][y]<<"  ";
			}
			cout<<"| ";
		}
		cout<<endl;
		cout<<"    --------------------------\n";
	}	
	
	
	cout<<"\n    ----------------\n";
	cout<<" b.";
	for(x=0; x<=2; x++){
		
		
		if(x==0){
			cout<<" | ";
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



