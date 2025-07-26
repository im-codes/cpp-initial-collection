#include <iostream>

using namespace std;

int main(){
	int A,B,C;
	
	cin>>A;
	cin>>B;
	cin>>C;
	
	if (A > B && A > C){
	
		cout<<A;
	}
	else {	
		if (A > B && A < C) {
			cout<<C;
		}
		else{
		
			if (A < B && B > C) {
				cout<<B;
			}
			else{
				cout<<C;
			}
		}
	
	}	
	
}
