// prova_atividade 4.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	float nota1, nota2, nota3;

	printf("Escreva a primeira nota do aluno: ");
	scanf_s("%f", &nota1);

	printf("Escreva a segunda nota do aluno: ");
	scanf_s("%f", &nota2);

	printf("Escreva a terceira nota do aluno: ");
	scanf_s("%f", &nota3);

	float notamedia = (2 * nota1 + 3 * nota2 + 5 * nota3) / (2 + 3 + 5);
	printf("A Media final do aluno foi de: %f\n", notamedia);

	return 0;
}