// prova_atividade 9.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int operacao;
	float n1, n2, n3;
	float med;
	printf("Informe a primeira nota do aluno: ");
	scanf_s("%f", &n1);
	printf("Informe a segunda nota do aluno: ");
	scanf_s("%f", &n2);
	printf("Informe a terceira nota do aluno: ");
	scanf_s("%f", &n3);
	printf(" 1 - Aritmetica \n 2 - Ponderada \n 3 - Harmonica\n");
	printf("Informe o tipo de media que deseja calcular: ");
	scanf_s("%i", &operacao);
	switch (operacao)
	{
	case 1:
		med = (n1 + n2 + n3) / 3;
		printf("A media aritmetica das 3 notas foi de: %f\n", med);
		break;
	case 2:
		med = (3 * n1 + 3 * n2 + 4 * n3) / 10;
		printf("A media ponderada das 3 notas foi de: %f\n", med);
		break;
	case 3:
		med = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
		printf("A media harmonica das 3 notas foi de: %f\n", med);
		break;
	default:
		printf("Operação incorreta");
		break;
	}
}