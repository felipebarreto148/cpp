#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  int a = 10;
  int *p = &a;
  cout<<*p<<endl;
  // A saida é o valor de a, pois *p está apontando para o valor que existe dentro do endereço de memória da variável a.
}