// prova_atividade23.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int distancia, tempo, velocidade, litros_usados;

int main()
{
	

	printf("Digite a velocidade media : \n");
	scanf_s("%i", velocidade);

	printf("Digite tempo gasto na viagem em horas : \n");
	scanf_s("%i", tempo);

	distancia = tempo * velocidade;
	litros_usados = distancia / 12;

	printf("A distancia percorrida e %i, o tempo gasto e %i e a quantidade de litros usados foi %i .", distancia, tempo, litros_usados);
	return 0;
	   	 

}
