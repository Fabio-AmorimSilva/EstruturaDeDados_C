/********************************************************
*
* Name: Binaria.c
* Purpose: Implements a main function of Binaria.h
* Author: Fabio Amorim da Silva
*
*********************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"Binaria.h"


int main(void){

    int op, aux_valor;

    //Criação da árvore binária
    arv = criaArvore();

    do{
	printf("--Menu de opções para Árvore Binária--\n");
	printf("1 - Inserir\n");
	printf("2 - Deletar\n");
	printf("3 - Buscar valor máximo\n");
	printf("4 - Buscar valor minímo\n");
	printf("5 - Buscar valor\n");
	printf("6 - Imprime em Pré-Ordem\n");
	printf("7 - Imprime em Ordem\n");
	printf("8 - Imprime em Pós-Ordem\n");
	printf("9 - Sair\n");
	printf("Sua opção: ");
	scanf("%d", &op);


	switch(op){
		case 1:
			printf("Digite o valor a ser inserido: ");
			scanf("%d", &aux_valor);
			arv = insereBinaria(arv, aux_valor);
			break;

		case 2:	
			printf("Digite o valor a ser deletado: ");
			scanf("%d", &aux_valor);
			arv = deletaBinaria(arv, aux_valor);
			break;

		case 3:
			arv = buscaMax(arv);
			printf("Máximo: %d\n", arv->num);
			break;
	
		case 4:
			arv = buscaMin(arv);
			printf("Minímo: %d\n", arv->num);
			break;

		case 5:
			printf("Digite o valor a ser buscado: ");
			scanf("%d", &aux_valor);
			arv = buscaBinaria(arv, aux_valor);
			printf("Valor %d encontrado\n", arv->num);
			break;

		case 6:
			preOrdem(arv);
			break;

		case 7:
			Ordem(arv);
			break;

		case 8:
			posOrdem(arv);
			break;		

		case 9:
			break;

		default:
			printf("Opção inválida. Tente outra.\n");
			break;
		

	}



    }while(op != 9);



    return 0;

}






























