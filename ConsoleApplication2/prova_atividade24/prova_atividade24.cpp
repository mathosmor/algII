// prova_atividade24.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
int A, B, antigoA, antigoB;
int main()
{
	printf("Digite o valor A\n");
	scanf_s("%int", &A);

	printf("Digite o valor B\n");
	scanf_s("%int", &B);

	antigoA = B;
	antigoB = A;

	printf("O valor de A era : %i \n", A);
	printf("O valor de B era : %i \n", B);
	printf("O valor de A agora e : %i \n", antigoA);
	printf("O valor de B agora e : %i \n", antigoB);
	return 0;

}
