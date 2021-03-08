/*****************************************************************
*
* Name: fila.c
* Purpose: Implements main function of fila.h
* Author: Fabio Amorim da Silva
*
******************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"fila.h"

int main(void){

    int op, num_aux;

    fila = criaFila();

    do{
           printf("Menu de opções fila.\n");
		 printf("Insere na fila - 1\n");
		 printf("Remove da fila - 2\n");
		 printf("Mostra o primeiro elemento da fila - 3\n");
		 printf("Esvazia a fila - 4\n");
		 printf("Sair - 5\n");
		 scanf("%d",&op);

		 switch(op){
		     case 1:
			       printf("Digite o número a ser inserido na fila: ");
				  scanf("%d",&num_aux);
				  insere(fila,num_aux);
				  break;
	          case 2:
			       remover(fila);
				  break;
	          case 3:
			       printf("Primeiro: %d\n",primeiro(fila));
				  break;
	          case 4:
			       esvazia(fila);
				  break;
	          case 5:
			       break;
		 
		     default:
			       printf("opção inválida!\n");
				  break;
		 }            
    
    }while(op!=5);

return 0;

}
