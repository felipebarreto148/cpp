//2. Faça uma função que receba duas listas simplesmente encadeadas e conecte o nó final da primeira lista ao nó cabeça da segunda lista.

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

void juntar_nos(lista **cabecaA, lista **cabecaB) {
  lista *tempA = *cabecaA;
  lista *tempB = *cabecaB;
  if (tempA == NULL) {
    cout<<"a Primeira lista esta vazia"<<endl;
  } else {
     while(tempA -> prox != NULL){
      tempA = tempA -> prox;
    }
    tempA -> prox = tempB;
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
  lista *cabecaA = NULL;
  lista *cabecaB = NULL;
  inserir(&cabecaA, 10);
  inserir(&cabecaA, 20);
  inserir(&cabecaA, 30);

  inserir(&cabecaB, 40);
  inserir(&cabecaB, 50);
  inserir(&cabecaB, 60);

  juntar_nos(&cabecaA, &cabecaB);
  
  imprimir(&cabecaA);  
  //excluir(&cabeca, 20);
  //excluir(&cabeca, 30);
  //excluir(&cabeca, 10);

  return 0;
}