/*******************************************************
*
* Name: fila.h
* Purpose: Implement the queue data struct and fucntions
* Author: Fabio Amorim da Silva
*
********************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

   int num;
   struct Node *prox;

}Node;

typedef struct Fila{

   Node *inicio;
   Node *fim;

}Fila;

Fila *fila;

//Cria uma fila vazia
Fila *criaFila(){

  Fila *fila = (Fila*)malloc(sizeof(Fila));
  fila->inicio=NULL;
  fila->fim=NULL;

  return fila;

}

//Verifica se a fila está vazia
int vazia(Fila *fila){

   if(fila->inicio == NULL){
      return 1;
   
   }else{
      return 0;
   
   }

}

//Insere na fila
void insere(Fila *fila, int valor){

   Node *novo = (Node*)malloc(sizeof(Node));
   novo->num = valor;
   novo->prox = NULL;

   if(vazia(fila)){
     fila->inicio=novo;   
     fila->fim=novo;

   }else{
     
	fila->fim->prox=novo;
        
   }

}

//Retorna o primeiro elemento da fila
int primeiro(Fila *fila){

   if(vazia(fila)){
      printf("Lista vazia!\n");
      return 0;

   }else{
      return fila->inicio->num;

   }
}

//Remove o primeiro elemento da fila
int remover(Fila *fila){

   Node *aux=fila->inicio;
   fila->inicio=aux->prox;
   int valor;
   valor = aux->num;
   free(aux);
   aux=NULL;
   if(fila->inicio == NULL){
      fila->fim = NULL;
   
   }
   
   return valor;
}

//Esvazia fila
void esvazia(Fila *fila){

   while(vazia(fila) != 1){
      remover(fila);

   }
}

