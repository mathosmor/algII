// prova_atividade 23@.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	float tempo, velocidade, distancia, litros;
	
	printf("Informe o tempo gasto na viagem em minutos: ");
	scanf_s("%f", &tempo);
	printf("Informe a velocidade media durante a viagem: ");
	scanf_s("%f", &velocidade);
	tempo = tempo / 60;
	distancia = tempo * velocidade;
	litros = distancia / 12;
	printf("A velocidade media durante a viagem foi de: %f km/h\n", velocidade);
	printf("O tempo gasto na viagem foi de: %f horas\n", tempo);
	printf("A distancia percorrida foi de: %f  km\n", distancia);
	printf("A quantidade de litros utilizados foi de: %f  litros\n", litros);
	return 0;
}
