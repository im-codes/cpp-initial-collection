#include <iostream> 
using namespace std; 
int main(){
 
	int i,s,P;
	for(i=30;i<=100;i++){
		P = 0;
		for(s=1;s<=i;s++){ 
			if(i % s == 0){
				P += 1;
				
			}	
			
		}
		
		if(P == 2){
			cout<<i<<" ";
		}
//		cout<<i;	 
		
	} 
	return 0;
	
} 
