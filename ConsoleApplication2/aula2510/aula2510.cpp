

#include "pch.h"
#include <iostream>




int main()
{
	int nro, nantigo, crescente = 0;
	
	nantigo = 1000000;
	
	for (int i = 0; i < 5; i++) {

		printf("digite o numero:\n");
		scanf_s("%i", &nro);
		
		if (nantigo <= nro)
		{
			crescente = crescente + 1 ;
		}
		else {
			
			crescente = 0;
		}
		nantigo = nro;
		
	}

	if (crescente == 4) {
		printf("Crescente");
	}
	else{
		printf("N crescente");
	}




	return 0;

}
