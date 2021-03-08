/*****************************************************************
*
* Name: listaC.h
* Purpose: Implements a circular list in C
* Author: Fabio Amorim da Silva
*
******************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

   int info;
   struct Node *prox;
   struct Node *ant;

}Node;

Node *lista;

//Cria uma lista vazia
Node *criaLista(){

   return NULL;

}

//Verifica se a lista está vazia
int vazia(Node *lista){

    if(lista == NULL){
       return 1;
    
    }else{
       return 0;
    
    }

}

//Insere no início da lista
Node *insereInicio(Node *lista, int num){

    Node *novo = (Node*)malloc(sizeof(Node));
    Node *aux  = lista;
    novo->info = num;
    novo->ant  = NULL;

    if(vazia(lista)){
       lista=novo;
	  lista->prox=lista;
    
    }else{

       while(aux->prox != lista){
	     aux=aux->prox;
	  
	  }
      
	  aux->prox=novo;
       novo->prox=lista;
	  lista->ant=novo;
	  lista=novo;
    
    }

return lista;

}

//Insere no fim da lista
Node *insereFim(Node *lista, int num){

    Node *novo = (Node*)malloc(sizeof(Node));
    Node *aux  = lista;
    novo->info = num;
    novo->ant  = NULL;

    if(vazia(lista)){
       lista=novo;
	  lista->prox=lista;
    
    }else{

       while(aux->prox != lista){
	     aux=aux->prox;
	  
	  }

       aux->prox=novo;
	  novo->ant=aux;
	  novo->prox=lista;
    
    }

return lista;

}

//Remove início da lista
Node *removeInicio(Node *lista){

    Node *aux=lista;
    
    if(vazia(lista)){
       return lista;
    
    }else{
       
	  lista=lista->prox;
       free(aux);
	  aux=NULL;
      
    }

return lista;

}

//Remove fim da lista
Node *removeFim(Node *lista){

    Node *aux=lista;
    Node *ante=NULL;

    if(vazia(lista)){
       return lista;
    
    }else{
    
       while(aux->prox != lista){
	     ante=aux;
	     aux=aux->prox;
	  
	  }

       ante->prox=lista;
	  free(aux);
	  aux=NULL;
    
    }

return lista;

}

//Imprime a lista
void imprime(Node *lista){

    Node *aux;
    int i = 0;

    for(aux=lista; aux->ant!=lista; aux=aux->prox){    
       printf("%d é o elemento %d\n",aux->info, i+1);
	  i++;

    }

}
