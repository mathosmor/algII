// prova_atividade 1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"

#include <math.h>
int main()
{
	float x1, x2, y1, y2, distancia;

	printf("Informe o valor do x1: ");
	scanf_s("%f", &x1);
	printf("Informe o valor do x2: ");
	scanf_s("%f", &x2);
	printf("Informe o valor do y1: ");
	scanf_s("%f", &y1);
	printf("Informe o valor do y2: ");
	scanf_s("%f", &y2);

	distancia = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	// distancia =sqrt(pow((x2 - x1), 2) +pow ((y1 - y2), 2));
	printf("A distancia entre os pontos e: %f\n", distancia);

	return 0;
}