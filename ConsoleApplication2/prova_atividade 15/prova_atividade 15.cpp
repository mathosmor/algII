// prova_atividade 15.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int x;
	int n;
	int calculo = 1;
	int i = 1;
	printf("Informe o primeiro valor inteiro: ");
	scanf_s("%i", &x);
	printf("Informe o segundo valor inteiro nao negativo: ");
	scanf_s("%i", &n);
	while (i <= n)
	{
		calculo = calculo * x;
		i++;
	}
	printf("\nO resultado foi: %i", calculo);
}
