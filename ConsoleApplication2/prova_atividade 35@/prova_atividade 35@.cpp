// prova_atividade 35@.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int idade, sexo, olhos, cabelos, maior, fem;

	maior = 0;
	fem = 0;

	do
	{

		printf("Informe a idade do habitante (digite -1 ou um numero negativo para encerrar): ");
		scanf_s("%i", &idade);
		if (idade >= 0)
		{
			printf("Informe o sexo 1 para masculino ou 2 para feminino: ");
			scanf_s("%i", &sexo);
			printf("Informe a cor dos olhos: \n1 - azuis \n2 - verdes \n3 - castanhos\n: ");
			scanf_s("%i", &olhos);
			printf("Informe a cor dos cabelos: \n1 - louros \n2- castanhos \n3 - pretos\n: ");
			scanf_s("%i", &cabelos);
			if ((sexo == 2) && (idade >= 18) && (idade <= 35) && (olhos == 2) && (cabelos == 1))
				fem = fem + 1;
			if (idade > maior)
				maior = idade;
		}
		else
			printf("Idade invalida\n");
	} while (idade >= 0);

	printf("A maior idade encontrada foi: %i\n", maior);
	printf("A quantidade de mulheres entre 18 e 35 anos de olhos verde e cabelos louros foi: %i\n", fem);

	return 0;
}