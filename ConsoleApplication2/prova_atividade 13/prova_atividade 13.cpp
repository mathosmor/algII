// prova_atividade 13.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int num;
	int impar = 1;
	int i = 1;
	printf("Informe um numero inteiro positivo: ");
	scanf_s("%i", &num);
	while (i <= num)
	{
		printf("%i\n", impar);
		impar = impar + 2;
		i++;
	}
	return 0;
}
