// prova_atividade 18.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int i, j, valor;

	printf("Informe um valor inteiro de 2 a 20: ");
	scanf_s("%i", &valor);

	for (i = 1; i <= valor; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%i", j);
		printf("\n");
	}

	for (i = i - 2; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
			printf("%i", j);
		printf("\n");
	}

	return 0;
}

