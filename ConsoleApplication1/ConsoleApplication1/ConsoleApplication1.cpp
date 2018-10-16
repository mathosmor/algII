// ConsoleApplication1.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"


int soma(int x, int y)
{
	int a = x + y;
	return a;
}

int sub(int x, int y)
{
	int a = x - y;
	return a;
}

int mult(int x, int y)
{
	int a = x * y;
	return a;
}

float div(float x, float y)
{
	float a = x / y;
	return a;
}




int main()
{
	int a;
	printf("Digite o primeiro numero  ");
	scanf_s("%i", &a);

	int b;
	printf("Digite o segundo numero  ");
	scanf_s("%i", &b);



	int r = soma(a, b);
	int s = sub(a, b);
	float d = div(a, b);
	int m = mult(a, b);

	printf("\tValor da soma : %i\n ", r);
	printf("\tValor da subtracao : %i\n ", s);
	printf("\tValor da multiplicacao : %i\n ", m);
	printf("\tValor da divisao : %f\n ", d);


}
// mathosmor 2.00
