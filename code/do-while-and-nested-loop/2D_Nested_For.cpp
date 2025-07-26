#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main(){
	system("COLOR 0A");
	int a,b,c;
	
	cout<<endl;	
	
	for(a=1; a<=5; a++){
		for(b=a; b<=5; b++){
			c++;
			if(c>=10){
				cout<<" "<<c<<" ";	
			}
			else{
				cout<<" "<<c<<"  ";	
			}
			
			
		}
		cout<<endl<<endl;	
	}
	
	getch();
	
	return 0;
}
