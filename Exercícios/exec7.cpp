#include <iostream>
#include <stdlib.h>
using namespace std;

void valor_endereco(float *p) {
  cout<<"Valor: "<<*p<<endl;
  cout<<"Endereco: "<<p<<endl;
}

int main() {
  float a = 15;
  valor_endereco(&a);
}