// prova_atividade 28.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	
	float salario, extra, comissao, tot, tcomissao;

	tcomissao = 0;

	do{
		printf("Digite o numero valor do carro vendido :  ");
		scanf_s("%f", &comissao);
		tcomissao = tcomissao + comissao;

	} while (comissao > 0);

	salario = 954.00 * 2;
	extra = 50;
	tot = (tcomissao * 0.95) + salario + extra;
	printf("O salario total do vendedor e : %f \n", tot);

}
