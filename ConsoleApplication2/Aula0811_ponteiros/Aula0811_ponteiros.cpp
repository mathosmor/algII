// Aula0811_ponteiros.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	int *x, valor, y;
	valor = 35;
	x = &valor;
	y = *x;

	printf("Endereço de variável comum valor: %p\n", &valor);
	printf("Lendo o conteudo do ponteiro x: %p\n", x);
	printf("Endereço da variável ponteiro x: %p\n", &x);
	printf("Endereço da variável ponteiro y: %p\n", &y);
	printf("Conteúdo da variável apontada por x: %d\n", *x);
	printf("Conteúdo da variável comum y: %d\n", y);

}