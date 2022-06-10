#include <iostream>
#include <stdlib.h>
using  namespace std;

#define TAM 3

struct t_pilha {
  int vetor[TAM];
  int topo;
} typedef pilha;

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

// Funções da Pilha
int empilhar(pilha *p, int valor) {
	if (p -> topo == TAM + 1) {
		return 1;
	}
	p -> topo++;
	p -> vetor[p->topo] = valor;
	return 1;
}

int desempilhar(pilha *p, int *valor){
	if (p -> topo == -1){
		return 1;
	}
	*valor = p -> vetor[p -> topo];
	p->topo--;
	return 1;
}
// Fim das funções da Pilha

int main() {
  pilha *p;
  p = (pilha *) malloc (sizeof(pilha));
  fila *f = (fila *) malloc (sizeof(fila));
  p -> topo = -1;
  f -> frente = 0;
  f -> tras = 0;
  f -> qtd = 0;

  empilhar(p, 35);
  empilhar(p, 25);
  empilhar(p, 45);

  int valor;
	desempilhar(p, &valor);
  cout<<valor<<endl;
  enfileirar(f, valor);
  desempilhar(p, &valor);
  cout<<valor<<endl;  
  enfileirar(f, valor);
  desempilhar(p, &valor);
  cout<<valor<<endl;
  enfileirar(f, valor);

  cout<<"========="<<endl;
  
  desenfileirar(f, &valor);
  empilhar(p, valor);
  cout<<valor<<endl;
  
  desenfileirar(f, &valor);
  empilhar(p, valor);
  cout<<valor<<endl;  
  
  desenfileirar(f, &valor);
  empilhar(p, valor);
  cout<<valor<<endl;
  cout<<"========="<<endl;

  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  
  return 0;
}