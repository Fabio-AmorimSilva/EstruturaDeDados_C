/**************************************************************
*
* Name: ListaD
* Purpose: Implements a doubly-linked list
* Author: Fabio Amorim da Silva
*
**************************************************************
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

   int info;
   struct Node *prox;
   struct Node *ant;

}Node;

Node *lista;

//Cria lista vazia
Node *criaLista(){

    return NULL;

}

//verifica se a lista está vazia
int vazia(Node *lista){

   if(lista==NULL){
      return 1;
   
   }else{
      return 0;
   
   }

}

//Insere no início
Node *insereInicio(Node *lista, int num){
     
     Node *novo = (Node*)malloc(sizeof(Node));
     novo->info = num;
	novo->ant  = NULL;
	novo->prox = NULL;

     if(vazia(lista)){
	   lista=novo;
	   lista->prox=NULL;

	}else{
	   
	   novo->prox=lista;
	   lista->ant=novo;
	   lista=novo;
	
	}


return lista;

}

//Insere no fim da lista
Node *insereFim(Node *lista, int num){

    Node *novo = (Node*)malloc(sizeof(Node));
    Node *aux=lista;
    novo->info=num;
    novo->prox=NULL;

    if(vazia(lista)){
       lista=novo;
	  lista->prox=NULL;
    
    }else{

       while(aux->prox!=NULL){
	     aux=aux->prox;
	  
	  }

	   aux->prox=novo;
	   novo->ant=aux;
	   
    }

return lista;

}


//Remove o início da lista
Node *removeInicio(Node *lista){

    Node *aux=lista;
    
    if(vazia(lista)){
       free(aux);
	  lista=NULL;
    
    }else{

       lista=lista->prox;
       free(aux);
	  aux=NULL;
    
    }

return lista;

}


Node *removeFim(Node *lista){

    Node *aux=lista;
    Node *ante=NULL;

    if(vazia(lista)){

	  free(aux);
	  aux=NULL;
    
    }else{
    
       while(aux->prox!=NULL){
	     ante=aux;
	     aux=aux->prox;
	  
	  }

       ante->prox=NULL;
	  free(aux);
	  aux=NULL;
    
    }

return lista;

}

Node *removeNode(Node *lista, int num){

    Node *aux=lista;
    Node *post=NULL;
    Node *ante=NULL;
 
   if(vazia(lista)){
      free(aux);
	 aux=NULL;
   
   }else{
       
    while(aux->info != num){
       ante=aux;
       aux=aux->prox;
   } 

   if(aux->prox == NULL){
      ante->prox=NULL;
      free(aux);
	 aux=NULL;
   
    }else{

     post=aux->prox;
     ante->prox=aux->prox;
     post->ant=aux->ant;
     free(aux);
     aux=NULL;
    
    }

   }

return lista;

}

//Imprime a lista
void imprime(Node *lista){

    Node *aux;
    int i = 0;

    for(aux=lista; aux!=NULL; aux=aux->prox){
    
        printf("%d é o elemento %d dá lista.\n", aux->info,i+1);
	   i++;
    
    }

}




