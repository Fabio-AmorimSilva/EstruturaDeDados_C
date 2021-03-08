/*************************************************************
*
* Name: lista.c
* Purpose: Implements linked list
* Author: Fabio Amorim da Silva
*
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"lista.h"



int main(void){

    int num,op;

    lista = criaLista();

    do{

      printf("Selecione uma das opções abaixo\n");
	 printf("Insere no início da lista - 1\n");
	 printf("Insere no fim da lista - 2\n");
	 printf("Insere em ordem na lista - 3\n");
	 printf("Remove no início da lista - 4\n");
	 printf("Remove no fim da lista - 5\n");
	 printf("Imprime a lista - 6\n");
	 printf("Busca elemento na lista - 7\n");
	 printf("Sair - 10\n");
      scanf("%d",&op);

      switch(op){
	     case 1:
		       printf("Digite um número: ");
			  scanf("%d",&num);
			  lista = insereInicio(lista, num);
			  break;
	     case 2:
		       printf("Digite um número: ");
			  scanf("%d",&num);
			  lista = insereFim(lista, num);
			  break;
	     case 3:
		       printf("Digite um número: ");
			  scanf("%d",&num);
			  lista = insereOrdem(lista, num);
	            break;
	     case 4:
			  removeInicio(lista);
			  break;
	     case 5:
			  removeFim(lista);
			  break;
	     case 6:
			  imprime(lista);
			  break;
	     case 7:
		       printf("Digite o número a ser buscado: ");
			  scanf("%d",&num);
			  busca(lista, num);
			  break;
	     default:
			  printf("Opção inválida!\n");
			  break;
	 }


    }while(op!=10);


return 0;

}
