// prova_atividade 2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int a, b, c;

	printf("Primeiro valor inteiro e positivo: ");
	scanf_s("%i", &a);
	printf("Segundo valor inteiro e positivo: ");
	scanf_s("%i", &b);
	printf("Terceiro valor inteiro e positivo: ");
	scanf_s("%i", &c);
	int r = (a + b) * (a + b);
	printf("Resultado de R foi de: %i\n", r);
	int s = (b + c) * (b + c);
	printf("Resultado de S foi de: %i\n", s);
	int d = (r + s) / 2;
	printf("Resultado de D foi de: %i\n", d);
	
	return 0;
}
