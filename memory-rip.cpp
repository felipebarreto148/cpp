#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
	int *v;
	v = (int *)malloc (sizeof(int)*3);
	*v = 20;
	v++;
	*v = 30;
	v++;
	*v = 40;
	v = v - 2;
	
	cout<<v[0]<<endl;
	cout<<*v<<endl;
	
	free(v);
	
	return 0;
}