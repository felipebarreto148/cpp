#include <iostream>
#include <stdlib.h>
using namespace std;

#define TAM 3

struct t_fila {
  int frente, tras;
  int vetor[TAM];
  int qtd;
} typedef fila;

int enfileirar(fila *f, int valor){
  if (f -> qtd == TAM) {
    cout<<"Fila cheia!"<<endl;
    return 0;
  }
  f -> vetor[f -> tras] = valor;
  //f -> tras++;
  f -> tras = f -> tras == TAM - 1 ? 0 : f -> tras+1;

  f -> qtd++;
  return 1;
}

int desenfileirar(fila *f, int *valor) {
  if (f -> qtd == 0) {
    cout<<"A fila não tem mais nenhum elemento para ser removido."<<endl;
    return 0;
  }

  *valor = f -> vetor[f -> frente];
  //f -> frente++;
  f -> frente = f -> frente == TAM - 1 ? 0 : f -> frente+1;

  f -> qtd--;
  return 1;
}

int main() {
  fila *f = (fila *) malloc (sizeof(fila));
  f -> qtd = 0;
  f -> frente = 0;
  f -> tras = 0;

  enfileirar(f, 10);
  enfileirar(f, 20);
  enfileirar(f, 5);
  enfileirar(f, 90);
  
  int valor;
  
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  
  desenfileirar(f, &valor);
  cout<<valor<<endl;

  desenfileirar(f, &valor);

  return 0;
}