#include "iostream"

using namespace std;

int main(){
	
	int a=0, b=1, c=0;
	cout << a;
	
	while(b >= a){
		
		cout <<  ", " << b;
		c = a + b;
		a = b;
		b = c;
		
		
	}

	return 0;
}
