// prova_atividade 3.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int dias;
int anos;
int meses;
int main()
{
	printf("Informe sua idade em dias: ");
	scanf_s("%i", &dias);
	int anos = dias / 365;
	int meses = anos * 12;
	printf("Idade em Anos: %i\n", anos);
	printf("Idade em Meses: %i\n", meses);
	printf("Idade em Dias: %i\n", dias);

	return 0;
}