#include <iostream>
using namespace std;

void decrescente (int *v) {
	cout<<v[2]<<endl;
	cout<<v[1]<<endl;
	cout<<v[0]<<endl;
}

void crescente (int *v) {
	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	cout<<v[2]<<endl;
}

int main () {
	int v[3] = {10, 20, 30};
	cout<<*v<<endl;
	cout<<*(v+1)<<endl;
	cout<<*(v+2)<<endl;
	decrescente(v);
	crescente(v);
	
	return 0;
}