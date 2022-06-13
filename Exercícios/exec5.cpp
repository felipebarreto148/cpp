#include <iostream>
#include <stdlib.h>
using namespace std;

float equacao(int a, int b, int c) {
  return (a*a) + (6 * b) + c;
}

int main() {
  cout<<equacao(5, 2, 2)<<endl;
}