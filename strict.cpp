#include <iostream>
#include <stdlib.h>

using namespace std;

struct t_aluno {
	int idade;
	int matricula;
} typedef Aluno;

struct t_professor {
	int matricula;
	float salario;
} typedef Professor;

int main () {
	Aluno *a;
  a = (Aluno *) malloc (sizeof(Aluno));
	
	a -> idade = 21;
	a -> matricula = 123;
	
	cout<<a -> idade<<endl;
	cout<<a -> matricula<<endl;
	
	free(a);
	
	return 0;
}