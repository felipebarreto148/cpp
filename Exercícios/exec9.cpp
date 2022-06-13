#include <iostream>
#include <stdlib.h>
using namespace std;

#define TAM 10

void lerVetor(int *vet) {
  cout<<"===== Crescente ====="<<endl;
  for(int i = 0; i < TAM; i++) {
    cout<<vet[i]<<endl;
  }
  cout<<"====================="<<endl;
}
void lerVetorInverso(int *vet) {
  cout<<"===== Decrescente ====="<<endl;
  for(int i = TAM - 1; i >= 0; i--) {
    cout<<vet[i]<<endl;
  }
  cout<<"====================="<<endl;
}

int main() {
  int vet[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  lerVetor(vet);
  lerVetorInverso(vet);
}