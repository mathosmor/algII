// prova_atividade 34.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	float valor, maior, menor;

	printf("Informe o 1 valor: ");
	scanf_s("%f", &valor);
	menor = valor;
	maior = valor;

	for (int i = 2; i <= 10; i++)
	{
		printf("Informe o %i valor: ", i);
		scanf_s("%f", &valor);
		if (valor > maior)
			maior = valor;
		if (valor < menor)
			menor = valor;
	}
	printf("Maior valor encontrado: %f\n", maior);
	printf("Menor valor encontrado: %f\n", menor);

	return 0;
}
