// prova_atividade 6.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int num, soma;
	int i = 1;
	soma = 0;
	printf("Informe um numero: ");
	scanf_s("%i", &num);
	while (i <= num)
	{
		soma = soma + i;
		i++;
	}
	printf("A soma dos primeiros numeros: %i\n", soma);
}

