// Aula1810_condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int NumMaior(int nro[4])
{
	int maior = 0;
	int soma = 0;
	int media = 0;
	for (int i = 0; i < 4; i++)
	{

		soma = (soma + nro[i]);
		if (nro[i] > 0) {
			if (nro[i] > maior)maior = nro[i];
		}	

	}
	return maior;

}

int main()
{

	{
		int nro[4], maior = 0;
		for (int i = 0; i < 4; i++)
		{
			printf("digite os valores:");
			scanf_s("%i", &nro[i]);
		}
		maior = NumMaior(nro);
		

		printf("O maior numero digitado é:%i\n", maior);
		return 0 ;
	}
}



