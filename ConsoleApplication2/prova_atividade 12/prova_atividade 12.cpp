// prova_atividade 12.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	float area, base, altura;
	printf("Informe o valor da base do trianguilo: ");
	scanf_s("%f", &base);
	printf("Informe a altura do trianguilo: ");
	scanf_s("%f", &altura);
	area = (base * altura) / 2;
	printf("A Area do trianguilo e: %f", area);
	return 0;
}
