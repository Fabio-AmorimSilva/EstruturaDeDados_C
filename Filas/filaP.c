/**************************************************************
*
* Name: filaP.c
* Purpose: Implements main function of filaP.h
* Author: Fabio Amorim da Silva
*
***************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"filaP.h"

int main(void){

    int num_aux, pri_aux, op;

    filaP = criaFilaP();

    do{
        printf("Menu de opções fila de prioridade.\n");
	   printf("Insere na fila - 1\n");
	   printf("Remove na fila - 2\n");
	   printf("Retorna o primeiro elemento - 3\n");
	   printf("Esvazia a fila - 4\n");
	   printf("Sair - 5\n");
	   scanf("%d",&op);

	   switch(op){
	         case 1:
		           printf("Digite o número a ser inserido: ");
				 scanf("%d", &num_aux);
				 printf("Digite a prioridade: ");
				 scanf("%d", &pri_aux);
                     insereFilaP(filaP, num_aux, pri_aux);
				 break;
	         case 2:
		           printf("Valor removido: %d\n",removerFilaP(filaP));
				 break;
	         case 3:
		           printf("Primeiro: %d\n", primeiro(filaP));
				 break;
	         case 4:
		           esvazia(filaP);
				 break;
	         case 5:
		           break;
	         default:
		           printf("Opção inválida!\n");
				 break;
	   }
    
    }while(op != 5);

return 0;

}
