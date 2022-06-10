#include <iostream>
using namespace std;

void imprimir(int *v) {
  for(int i = 0; i < 5; i++) {
    cout<<v[i]<<"\t";
  }
}

void trocar(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

void buble_sort(int *v) {
  int houve_troca = 1;
  while(houve_troca == 1) {
    houve_troca = 0;
    for (int i = 0; i < 4; i++) {
      if (v[i] > v[i+1]) {
        trocar(&v[i], &v[i+1]);
        houve_troca = 1;
      }
    }
  }
}

void selection_sort(int *v) {
  int i, j, min;
  for (i = 0; i< 5; i++) {
    min = i;
    for (j = i+1; j < 5; j++) {
      if (v[j] < v[min]) {
        min = j;
      }
    }
    trocar(&v[i], &v[min]);
  }
}

int main() {
  int v[5] = { 5, 4, 3, 2, 1};
  //buble_sort(v);
  selection_sort(v);
  imprimir(v);
}