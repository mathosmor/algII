// Atividade.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
int idade, mes, dias;
int main()
{
	printf("Digite quantos anos voce tem: ");
	scanf_s("%i",&idade);
	mes = idade * 12;
	dias = mes * 30;
	printf("Sua idade em dias e : %i", dias);
	return 0;
}

