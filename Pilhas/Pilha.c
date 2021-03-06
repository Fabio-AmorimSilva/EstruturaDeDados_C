/***********************************************************
*
* Name: Pilha.c
* Purpose: Implement main function of Pilha.h
* Author: Fabio Amorim da Silva
*
************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"Pilha.h"

int main(void){

   int num_aux, op;

   pilha = criaPilha();

   do{
       
	  printf("Menu de opções para pilha.\n");
	  printf("Para olhar o top da pilha - 1.\n");
	  printf("Para inserir (push) - 2\n");
	  printf("Para remover (pop) - 3\n");
	  printf("Para esvaziar a pilha - 4\n");
	  printf("Sair - 5\n");
	  scanf("%d",&op);
   
       switch(op){
	      case 1:
			   printf("%d\n", top(pilha));
			   break;

           case 2:
		        printf("Digite o número a ser inserido: ");
			   scanf("%d",&num_aux);
			   push(pilha, num_aux);
			   break;

           case 3:
		        pop(pilha);
			   break;

	      case 4:
		        esvaziaPilha(pilha);
			   break;
           case 5:
		        break;
	  }
   
   }while(op!=5);

return 0;

}
