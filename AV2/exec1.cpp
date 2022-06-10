//1. Faça uma função em C/C++ que determine a quantidade de elementos em uma lista simplesmente encadeada. 

#include <iostream>
#include <stdlib.h>
using namespace std;

struct t_lista {
  int chave;
  struct t_lista * prox;
} typedef lista;

void imprimir(lista **cabeca){
  lista *temp;
  temp = *cabeca;
  while(temp != NULL) {
    cout<<temp -> chave<<endl;
    temp = temp -> prox;
  }
}

void imprime_qtd(lista **cabeca) {
  int count = 0;
  lista *temp;
  temp = *cabeca;

  while(temp != NULL) {
    count++;
    temp = temp -> prox;
  }

  cout<<"Número de elementos: "<<count<<endl;
}

void inserir(lista **cabeca, int chave) {
  lista *no = (lista *) malloc (sizeof(lista));
  no -> chave = chave;
  no -> prox = NULL;
  lista *temp = *cabeca;
  if (temp == NULL) {
    *cabeca = no;
  } else {
    while(temp -> prox != NULL) {
      temp = temp -> prox;
    }
    temp -> prox = no;
  }
}

void excluir(lista **cabeca, int chave){
  lista *temp = *cabeca;
  lista *ant = NULL;
  while(temp != NULL){
    cout<<temp -> chave<<endl;
    if (temp -> chave == chave) {
      if (ant == NULL) {
        *cabeca = temp -> prox;
      } else {
        ant -> prox = temp -> prox;
      }
      free(temp);
    }
    ant = temp;
    temp = temp -> prox;
  }
}

lista * buscar(lista **cabeca, int chave) {
  lista *temp = *cabeca;
  while(temp != NULL) {
    if (temp -> chave == chave) {
      return temp;
    }
    temp = temp -> prox;
  }
  return NULL;
}

int main() {
  lista *cabeca = NULL;
  inserir(&cabeca, 10);
  inserir(&cabeca, 20);
  inserir(&cabeca, 30);

  imprimir(&cabeca);
  imprime_qtd(&cabeca);
  
  //excluir(&cabeca, 20);
  //excluir(&cabeca, 30);
  //excluir(&cabeca, 10);

  return 0;
}