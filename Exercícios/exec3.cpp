#include <iostream>
#include <stdlib.h>
using namespace std;

void maior_menor(float num1, float num2) {
  if (num1 > num2) {
    cout<<"Maior: "<<num1 <<endl;
    cout<<"Menor: "<<num2 <<endl;
  } else if (num2 > num1) {
    cout<<"Maior: "<<num2 <<endl;
    cout<<"Menor: "<<num1 <<endl;
  } else {
    cout<<"Os números são iguais."<<endl;
  }

  cout<<"========"<<endl;
}

int main() {
  maior_menor(15, 20);
  maior_menor(20, 15);
  maior_menor(15, 15);
}