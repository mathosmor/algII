// prova_atividade 7.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <math.h>

int main()
{
	int a, b;
	printf("Informe o primeiro valor: ");
	scanf_s("%i", &a);
	printf("Informe o segundo valor: ");
	scanf_s("%i", &b);
	if (a > b)
	{
		if (a % b == 0)
		{
			printf("A e B sao multiplos\n");
		}
		else
		{
			printf("A e B nao sao multiplos\n");
		}
	}
	if (b > a)
	{
		if (b % a == 0)
		{
			printf("A e B sao multiplos\n");
		}
		else
		{
			printf("A e B nao sao multiplos\n");
		}
	}
	return 0;
}