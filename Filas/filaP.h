/************************************************************
*
* Name: filaP.h
* Purpose: Implements a priority queue
* Author: Fabio Amorim da Silva
*
*************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

    int num;
    int pri;
    struct Node *prox;

}Node;

typedef struct Fila{

    Node *inicio;
    Node *fim;

}Fila;

Fila *filaP;

//Cria uma fila vazia
Fila *criaFilaP(){

    Fila *fila = (Fila*)malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->fim = NULL;

    return fila;
}

//Verifica se a lista está vazia
int vazia(Fila *fila){
    
    if(fila->inicio == NULL){
       return 1;
    
    }else{
       return 0;
    
    }
}

//Insere fila
void insereFilaP(Fila *fila, int valor, int prio){

   Node *novo=(Node*)malloc(sizeof(Node));
   Node *aux=fila->inicio;
   Node *ant=NULL;
   novo->prox=NULL;
   novo->num=valor;
   novo->pri=prio;

   if(vazia(fila)){
      fila->inicio=novo;
      fila->fim=novo;
      
   }else{
      
	 if(fila->fim == NULL){
	    fila->fim->prox=novo;	 
	 }

      while(novo->pri < aux->pri && aux->prox != NULL){
	    ant=aux;
         aux=aux->prox;

      }

	 if(novo->pri >= fila->inicio->pri){
	    fila->inicio=novo;
	 
	 }else{

         ant->prox=novo;
	    novo->prox=aux;

      }

   }
}

//Remove fila
int removerFilaP(Fila *fila){

    Node *aux=fila->inicio;
    fila->inicio=aux->prox;
    int valor;
    valor = aux->num;
    free(aux);
    aux=NULL;
    if(fila->inicio == NULL){
       fila->fim=NULL;
    
    }

    return valor;

}

//Retorna o primeiro elemento da fila
int primeiro(Fila *fila){

    if(vazia(fila)){
       printf("Lista vazia!\n");
       return 0;
    
    }else{

       printf("Prioridade: %d\n", fila->inicio->pri);
       return fila->inicio->num;
    
    }

}

//Esvazia fila
void esvazia(Fila *fila){

   while(vazia(fila) != 1){
      removerFilaP(fila);
   
   }

}



