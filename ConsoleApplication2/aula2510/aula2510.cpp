

#include "pch.h"
#include <iostream>




int main()
{
	int nro, nantigo, crescente;
	nantigo = 0;
	for (int i = 0; i < 5; i++) {

		printf("digite o numero:\n");
		scanf_s("%i", &nro);
		
		if (nantigo <= nro)
		{
			crescente = true;
		}
		nantigo = nro;
		
	}

	if (crescente == false) {
		printf("Nao e Crescente");
	}
	else {
		printf("crescente");
	}




	return 0;

}
