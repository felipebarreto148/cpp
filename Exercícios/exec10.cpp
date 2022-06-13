#include <iostream>
#include <stdlib.h>
using namespace std;

#define TAM 5

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

int espacoDisp(pilha *p){
  int count = 0;
  for (int i = 0; i < TAM; i++) {
    if (p -> vetor[i] == 0) {
      count++;
    }
  }
  cout<<"Espaço disponível: "<< count<<endl;
  return count;
}

int main () {
	pilha *p;
	p = (pilha *) malloc (sizeof(pilha));
	p -> topo=-1;
	empilhar(p, 7);
	empilhar(p, 8);
  espacoDisp(p);
	empilhar(p, 2);
	empilhar(p, 1);
  espacoDisp(p);
	
	int valor;
	desempilhar(p, &valor);
  espacoDisp(p);
	desempilhar(p, &valor);
  desempilhar(p, &valor);

  espacoDisp(p);
	free(p);
	
	return 0;
}
