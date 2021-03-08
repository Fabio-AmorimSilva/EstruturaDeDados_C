/*************************************************************
*
* Name: listaD.c
* Purpose: Main.c of listaD.h
* Author: Fabio Amorim da Silva
*
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"listaD.h"


int main(void){

    int num, op;

    //Cria uma lista vazia
    lista = criaLista();

    //Laço de repetição para as opção da lsita duplamente encadeada
    do{
        printf("Menu de opção para lista duplamente encadeada\n");
	   printf("1  - Insere no início da lista.\n");
	   printf("2  - Insere no fim da lista.\n");
	   printf("3  - Remove no início da lista.\n");
	   printf("4  - Remove no fim da lista.\n");
	   printf("5  - Remove nó.\n");
	   printf("6  - Imprime a lista.\n");
	   printf("10 - Sair\n");
	   scanf("%d",&op);

        switch(op){
	       case 1:
		         printf("Digite o valor a ser inserido: ");
			    scanf("%d",&num);
			    lista = insereInicio(lista,num);
			    break;
	       case 2:
			    printf("Digite o valor a ser inserido: ");
			    scanf("%d",&num);
			    lista = insereFim(lista,num);
			    break;
	       case 3:
			    lista = removeInicio(lista);
			    break;
	       case 4:
		         lista = removeFim(lista);
			    break;
	       case 5:
		         printf("Digite o número a ser removido: ");
			    scanf("%d",&num);
			    lista=removeNode(lista,num);
			    break;
	       case 6:
			    imprime(lista);
			    break;
		  case 10: 
			     break;
	       default:
		          printf("Opção inválida!\n");
				break;
			    
	   }
    
    }while(op!=10);


return 0;

}

//Fim da dunção main
