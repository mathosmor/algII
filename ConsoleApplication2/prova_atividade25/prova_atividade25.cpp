// prova_atividade25.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	float bruto, inss, liq1, desc, liq2;

	printf("Digite o salario bruto do colaborador: ");
	scanf_s("%f", &bruto);

	inss = bruto * 0.1;
	liq1 = bruto - inss;
	desc = liq1 * 0.05;
	liq2 = liq1 - desc;

	printf("O valor liquido do salario do colaborador e : %f ", liq2);
	printf("\n\n\n");


	



	return 0;


}

