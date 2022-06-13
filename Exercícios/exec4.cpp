#include <iostream>
#include <stdlib.h>
using namespace std;

float quociente(int a, int b) {
  return a % b;
}

int main() {
  cout<<quociente(10, 3)<<endl;
}