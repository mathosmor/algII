// prova_atividade 39.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"



	
int main(){
      
	int Qtde, pessoas[];
        printf("Campos: nome, altura, peso, cpf, sexo\n");
        for(int i=0; (i < Qtde); i++){
                printf("\nInforme os dados da pessoa(%i): ",i+1);
                scanf("%s %f %f %Lu %c",pessoas[i].nome, &pessoas[i].altura,
                        &pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
        }

        printf("\nInforme o CPF da pessoa: ");
        long long cpf_localizador;
        scanf("%Lu",&cpf_localizador); // 1

        printf("\nSexo\tNome\tIMC");
        for(int i=0; (i < Qtde); i++){ //2
                if (cpf_localizador == pessoas[i].cpf){ //3
                        float imc = pessoas[i].peso / (pessoas[i].altura *
                                pessoas[i].altura);
                        printf("\n%c\t%s\t%1.2f\n",pessoas[i].sexo,
                                pessoas[i].nome, imc);
                        break;
                }
        }

        getchar();
        return 0;
		
}

