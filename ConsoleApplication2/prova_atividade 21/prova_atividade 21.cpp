// prova_atividade 21.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int n, valor, i, soma;
	printf("Informe a quantidade de numero que deseja informar: ");
	scanf_s("%i", &n);
	soma = 0;
	for (int i = 1; i <= n; i++)
	{
		printf("Informe o: %i valor: ", i);
		scanf_s("%i", &valor);
		if (valor % 2 == 0)
		{
			soma = soma + valor;
		}
	}
	printf("A soma dos valores pares e: %i\n", soma);
	return 0;
