// atividade 5.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


int main()
{
	float fabrica, taxa, preco;
	
	
	printf("Informe o valor de fabrica do veiculo: ");
	scanf_s("%f", &fabrica);

	taxa = (fabrica * 0.28) + (fabrica * 0.45);
	preco = fabrica + taxa;

	printf("O custo do veiculo ao consumidor e: %f ", preco);
	return 0;
}
