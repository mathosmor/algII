

#include "pch.h"
#include <iostream>

int main()
{
	/*int i, num[10], num2[10];
	for (i = 0; i < 10; i++){
		num[i] = (i + 1) * 2;
	}
	for (i = 0; i < 10; i++) {
		printf_s("%3d\t", num[i]);
	}

	printf_s("\n\n");
	///////////////////////////
	for (i = 0; i < 10; i++) {
		num2[i] = i + 10;
	}

	for (i = 0; i < 10; i++) {
		printf_s("%3d\t", num2[i]);
	}
	//////////////////////////
	printf_s("\n\n");
	for (i = 0; i < 10; i++) {
		printf_s("%3d\t", num[i] + num2[i]);
	}
	printf_s("\n\n");
	system("pause");
	*/
	int matriz1[2][2], matriz2[2][2], matrizSoma[2][2], i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf_s("Digite um numero1: ");
			scanf_s("%i", &matriz1[i][j]);
		}
		printf_s("\n");
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf_s("Digite um numero2: ");
			scanf_s("%i", &matriz2[i][j]);
		}
		printf_s("\n");
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf_s("%3i", matrizSoma[i][j]);
		}
		printf_s("\n");
	}

	printf_s("\n\n");
	return 0;
}
