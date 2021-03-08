/*****************************************************************************
*
* Name: listaC.c
* Purpose: Implements main fucntion of Circular List listaC.h
* Author: Fabio Amorim da Silva
*
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"listaC.h"

int main(void){

    int num, op;

    lista = criaLista();

    do{

        printf("Menu de opções para lista circular.\n");
	   printf("1  - Insere no início da lista\n");
	   printf("2  - Insere no fim da lista\n");
	   printf("3  - Remove no início da lista\n");
	   printf("4  - Remove no fim da lista\n");
	   printf("6  - Imprime\n");
	   printf("10 - Sair\n");
	   printf("Digite sua opção:  ");
	   scanf("%d",&op);
    
        switch(op){
              case 1:
		          printf("Digite o número a ser inserido:");
				scanf("%d",&num);
				lista = insereInicio(lista, num);
				break;

	         case 2:
		          printf("Digite o número a ser inserido: ");
				scanf("%d",&num);
				lista = insereFim(lista, num);
				break;

	         case 3:
			     lista = removeInicio(lista);
				break;

	         case 4:
			     lista = removeFim(lista);
				break;

	         case 6:
			     imprime(lista);
				break;

	         case 10:
			     break;

	         default:
			     printf("opção inválida!\n");
				break;

	   }

    }while(op!=10);

return 0;

}
