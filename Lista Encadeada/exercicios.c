/*************************************************************
*
* Name: lista.c
* Purpose: Implements linked list
* Author: Fabio Amorim da Silva
*
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"exercicios.h"



int main(void){

    int num,op, tam = 1;

    lista1 = criaLista();
    lista2 = criaLista();
    lista3 = criaLista();

    do{

      printf("Selecione uma das opções abaixo\n");
	 printf("Insere no início da lista1 e lista2 - 1\n");
	 printf("Insere no fim da lista1 e lista2 - 2\n");
	 printf("Insere em ordem na lista1 e lista2 - 3\n");
	 printf("Remove no início da lista1 e lista2 - 4\n");
	 printf("Remove no fim da lista1 e lista2 - 5\n");
	 printf("Remove elemento específico da lista - 6\n");
	 printf("Imprime a lista1 e lista2 - 7\n");
	 printf("Busca elemento na lista1 e lista2 - 8\n");
	 printf("Combina duas listas encadeadas em uma - 9\n");
	 printf("Imprime lista combinada - 10\n");
         printf("Imprime o tamanho da lista - 11\n");
	 printf("Sair - 13\n");
      scanf("%d",&op);

      switch(op){
	     case 1:
		          printf("Digite um número para lista1: ");
			  scanf("%d",&num);
			  lista1 = insereInicio(lista1, num);
			  //printf("Digite um número para lista2: ");
			  //scanf("%d",&num);
			  //lista2 = insereInicio(lista2, num);
			  break;
	     case 2:
		          printf("Digite um número para lista1: ");
			  scanf("%d",&num);
			  lista1 = insereFim(lista1, num);
			  printf("Digite um número para lista2: ");
			  scanf("%d",&num);
			  lista2 = insereFim(lista2, num);
			  break;
	     case 3:
		          printf("Digite um número para lista1: ");
			  scanf("%d",&num);
			  lista1 = insereOrdem(lista1, num);
                          printf("Digite um número para lista2: ");
			  scanf("%d",&num);
			  lista2 = insereOrdem(lista2, num);
	                  break;
	     case 4:
			  lista1 = removeInicio(lista1);
			  lista2 = removeInicio(lista2);
			  break;
	     case 5:
			  lista1 = removeFim(lista1);
			  lista2 = removeFim(lista2);
			  break;
	     case 6:
		          printf("Digite o número a ser removido: \n");
			  scanf("%d",&num);
			  lista1 = removeNode(lista1, num);
			  break;
	     case 7:
			  imprime(lista1);
			  break;
	     case 8:
		          printf("Digite o número a ser buscado: ");
			  scanf("%d",&num);
			  busca(lista1, num);
			  printf("Digite o número a ser buscado: ");
			  busca(lista2, num);
			  break;
	     case 9:
			  lista3 = combinaListas(lista1, lista2, lista3); 
			  break;
	     case 10:
			  imprime(lista3);
			  break;
	     case 11:
			  printf("Tamanho: %d\n", tamanho(lista1, tam));
             case 13:
			  break;

	     default:
			  printf("Opção inválida!\n");
			  break;
	 }


    }while(op!=13);


return 0;

}
