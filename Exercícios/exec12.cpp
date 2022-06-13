#include <iostream>
#include <stdlib.h>
using  namespace std;

#define TAM 10

struct t_fila {
  int frente, tras;
  int vetor[TAM];
  int qtd;
} typedef fila;

// Funções da Fila
int enfileirar(fila *f, int valor) {
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
// Fim das funções da Fila

int main() {
  fila *f = (fila *) malloc (sizeof(fila));
  f -> frente = 0;
  f -> tras = 0;
  f -> qtd = 0;

  enfileirar(f, 1);
  enfileirar(f, 2);
  enfileirar(f, 3);
  enfileirar(f, 4);
  enfileirar(f, 5);
  enfileirar(f, 6);
  enfileirar(f, 7);
  enfileirar(f, 8);
  enfileirar(f, 9);
  enfileirar(f, 10);

  int valor;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;
  desenfileirar(f, &valor);
  cout<<valor<<endl;

  // A impressão obtida foi de que a fila funciona FIFO (First in, first out), o primeiro a entrar é o primeiro a sair.
  
  return 0;
}