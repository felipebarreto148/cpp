#include <iostream>
#include <stdlib.h>
using namespace std;

#define TAM 10

struct t_pilha {
	int topo;
	int vetor[TAM];
} typedef pilha;

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
  p -> vetor[p -> topo] = 0;
	p->topo--;
	return 1;
}

int main () {
	pilha *p;
	p = (pilha *) malloc (sizeof(pilha));
	p -> topo=-1;
	empilhar(p, 1);
	empilhar(p, 2);
	empilhar(p, 3);
	empilhar(p, 4);
	empilhar(p, 5);
	empilhar(p, 6);
	empilhar(p, 7);
	empilhar(p, 8);
	empilhar(p, 9);
	empilhar(p, 10);
	
	int valor;
	desempilhar(p, &valor);
  cout<<valor<<endl;
	desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;
  desempilhar(p, &valor);
  cout<<valor<<endl;

  // A impressão obtida é que, a pilha funciona em forma de LIFO (Last in, First out) o último a entrar, é o primeiro a sair.

	free(p);
	return 0;
}
