#include "pch.h"
#include <iostream>

int main()
{

	int distancia, tempo, velocidade, litros_usados;


	printf("Digite a velocidade media : ");
	scanf_s("%i", &velocidade);

	printf("Digite tempo gasto na viagem em horas : ");
	scanf_s("%i", &tempo);

	distancia = tempo * velocidade;
	litros_usados = distancia / 12;

	printf("A distancia percorrida e %i KM\n o tempo gasto e %i Hrs\n e a quantidade de litros usados foi %i L .", distancia, tempo, litros_usados);
	
	
	return 0;


}