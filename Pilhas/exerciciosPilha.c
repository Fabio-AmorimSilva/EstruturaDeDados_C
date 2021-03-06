/***********************************************************
*
* Name: exerciciosPilha.c
* Purpose: Implement main function of Pilha.h
* Author: Fabio Amorim da Silva
*
************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"exerciciosPilha.h"

int main(void){

   int num_aux, op;

   pilha1 = criaPilha();
   pilha2 = criaPilha();
   pilha3 = criaPilha();

   do{
       
	  printf("Menu de opções para pilha.\n");
	  printf("Para olhar o top da pilha - 1.\n");
	  printf("Para inserir (push) - 2\n");
	  printf("Para remover (pop) - 3\n");
	  printf("Para esvaziar a pilha - 4\n");
	  printf("Inverte pilha - 5\n");
	  printf("Coloca a pilha em ordem crescente - 6\n");
          printf("Imprime - 7\n");
	  printf("Sair - 8\n");
	  scanf("%d",&op);
   
       switch(op){
	      case 1:
			printf("Pilha1: %d\n", top(pilha1));
			printf("Pilha2: %d\n", top(pilha2));
			break;

           case 2:
		        printf("Digite o número a ser inserido: ");
			scanf("%d",&num_aux);
			push(pilha1, num_aux);
			break;

           case 3:
		        pop(pilha1);
			break;

	   case 4:
		        esvaziaPilha(pilha1);
			break;
           case 5:
		        revertePilha(pilha1, pilha2, pilha3);
			break;
	   case 6:
		        ordemCresc(pilha1,pilha2);
			break;
           case 7:
			imprime(pilha1);
			break;
           case 8:
		        break;
	  }
   
   }while(op!=8);

return 0;

}
