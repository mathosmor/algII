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

int ler()
{
	int a;
	printf("Digite o numero  ");
	scanf_s("%i", &a);
	return a;
}



int main()
{
	int primeiro = ler();
	int segundo = ler();

	



	int r = soma(primeiro, segundo);
	int s = sub(primeiro, segundo);
	float d = div(primeiro, segundo);
	int m = mult(primeiro, segundo);

	printf("\tValor da soma : %i\n ", r);
	printf("\tValor da subtracao : %i\n ", s);
	printf("\tValor da multiplicacao : %i\n ", m);
	printf("\tValor da divisao : %f\n ", d);


}
// mathosmor
