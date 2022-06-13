#include <iostream>
#include <stdlib.h>
using namespace std;

int maiorQue10(int *x, int *y, int *res) {
  *res = *x + *y;
  cout<<*res<<endl;
  if (*res > 10) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int x, y, res;
  x = 12;
  y = 2;
  cout<<maiorQue10(&x, &y, &res)<<endl;

  x = 5;
  y = 4;
  cout<<maiorQue10(&x, &y, &res)<<endl;

  x = 9;
  y = 1;
  cout<<maiorQue10(&x, &y, &res)<<endl;
}