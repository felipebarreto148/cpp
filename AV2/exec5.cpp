//5. Pesquise e implemente o algoritmo de ordenação Insert Sort com o seguinte vetor de dados {50,40,30,20,10}. Descreva como o algoritmo faz a ordenação. 
#include <iostream>
using namespace std;

void imprimir_lista(int lista[], int tam) {
  for (int i = 0; i < tam; i++) {
    cout << lista[i] << " ";
  }
  cout << endl;
}

void insertion_sort(int lista[], int tam) {
  for (int step = 1; step < tam; step++) {
    int chave = lista[step];
    int j = step - 1;
    while (chave < lista[j] && j >= 0) {
      lista[j + 1] = lista[j];
      --j;
    }
    lista[j + 1] = chave;
  }
}

int main() {
  int data[] = {50, 40, 30, 20, 10};
  int tam = sizeof(data) / sizeof(data[0]);
  insertion_sort(data, tam);
  cout << "Array em ordem crescente:\n";
  imprimir_lista(data, tam);
}