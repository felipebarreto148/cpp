#include <iostream>
#include <stdlib.h>
using namespace std;

int divisorDe3(int a) {
  if (a % 3 == 0) {
    cout<<"É divisor de 3"<<endl;
    return 1;
  } else {
    cout<<"Não é divisor de 3"<<endl;
    return 0;
  }
}

int main() {
  divisorDe3(3);
  divisorDe3(6);
  divisorDe3(15);
  divisorDe3(20);
}