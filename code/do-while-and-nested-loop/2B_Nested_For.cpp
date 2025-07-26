#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main(){
	system("COLOR 0A");
	
	int a,b;
	
	cout<<endl;	
	for(a=1; a<=3; a++){
		for(b=1; b<=5; b++){
			cout<<" "<<a<<"  ";
		}
		cout<<endl<<endl;	
	}
	getch();
	
	return 0;
}

