// prova_atividade5.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


float fabrica, taxa, preco;

int main()
{
	printf("Informe o valor de fabrica do veiculo: ");
	scanf_s("%f", &fabrica);
	float taxa = (fabrica * 0.28) + (fabrica * 0.45);
	float preco = fabrica + taxa;
	printf("O custo do veiculo ao consumidor e: %f\n", preco);
	return 0;
}