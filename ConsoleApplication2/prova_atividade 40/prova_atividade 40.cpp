// prova_atividade 40.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	int codigo;
	int quant;
	float preco;
	printf("_________Digite -1 negativo para encerrar__________\n");
	printf("Informe o codigo do produto: ");
	scanf_s("%i", &codigo);
	printf("Informe a quantidade vendida: ");
	scanf_s("%i", &quant);

	if(codigo > 0){
		switch (codigo)
		{
		case 1001:
			preco = quant * 5.32;
			printf("O valor a ser pago e: %f\n", preco);
			break;
		case 1324:
			preco = quant * 6.45;
			printf("O valor a ser pago e: %f\n", preco);
			break;
		case 6548:
			preco = quant * 2.37;
			printf("O valor a ser pago e: %f\n", preco);
			break;
		case 987:
			preco = quant * 5.32;
			printf("O valor a ser pago e: %f\n", preco);
			break;
		case 7623:
			preco = quant * 6.45;
			printf("O valor a ser pago e: %f\n", preco);
			break;
		default:
			printf("Codigo invalido\n");
		}
	}	
}

