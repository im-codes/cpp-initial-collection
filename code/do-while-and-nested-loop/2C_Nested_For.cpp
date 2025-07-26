#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main(){
	system("COLOR 0A");
	int a,b;
	
	cout<<endl;	
	for(a=1; a<=5; a++){
		for(b=a; b<=5; b++){
			
			cout<<" "<<a<<"  ";	
		}
		cout<<endl<<endl;
		if(a>=3)	{
			cout<<endl;
		}
	}
	
	getch();
	
	return 0;
}

