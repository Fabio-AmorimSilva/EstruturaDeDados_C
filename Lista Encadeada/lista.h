#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

   int info;
   struct Node *prox;

}Node;

Node *lista;

//Cria Lista vazia
Node *criaLista(){

    return NULL;

}

int vazia(Node *lista){

    if(lista==NULL){
       return 1;
    
    }else{
       return 0;
     
    }

}

//Insere início
Node *insereInicio(Node *lista, int num){

    Node *novo = (Node*)malloc(sizeof(Node));
    novo->info = num;
    novo->prox = NULL;

    if(vazia(lista)){
       lista=novo;
	  lista->prox = NULL;
    
    }else{
       novo->prox=lista;
       lista=novo;
    
    }

   return lista;

}

//Insere Fim
Node *insereFim(Node *lista, int num){

   Node *novo=(Node*)malloc(sizeof(Node));
   Node *aux=lista;
   novo->info=num;

   if(vazia(lista)){
      lista=novo;
      lista->prox = NULL;
   
   }else{   

    while(aux->prox!=NULL){
	    aux=aux->prox;
    }

    aux->prox=novo;
    novo->prox=NULL;
    
   }

   return lista;

}

//Insere ordenado
Node *insereOrdem(Node *lista, int num){

   Node *novo=(Node*)malloc(sizeof(Node));
   Node *aux=lista;
   Node *ant=lista;
   novo->info=num;
   novo->prox=NULL;

   if(vazia(lista)){
      lista=novo;
	 lista->prox=NULL;
	 
   }else{

	 if(aux->prox==NULL){
	    aux->prox=novo;
	    novo->prox=NULL;
	 
	 }else{

	    while(novo->info > aux->info){
	       ant=aux;
		  aux=aux->prox;
	    
	    }

	     novo->prox=ant->prox;
	     ant->prox=novo;
      }

   }

   return lista;

}

//Imprime lista
void imprime(Node *lista){

   Node *aux;
   int i = 0;

   for(aux=lista; aux!=NULL; aux=aux->prox){
     
       printf("Item %d: %d\n",i+1,aux->info);
	  i++;
   
   }

}

//Remove início
Node *removeInicio(Node *lista){

   Node *aux=lista;
   lista=aux->prox;
   free(aux);
   aux=NULL;

   return lista;

}

//Remove fim
Node *removeFim(Node *lista){

  Node *aux=lista; 
  Node *ant=NULL;

  if(vazia(lista)){
     return lista;
  
  }else if(aux->prox == NULL){
	free(aux);
	aux=NULL;
	lista=NULL;

  }else{

   while(aux->prox!=NULL){
      ant=aux;
	 aux=aux->prox;
  
   }

   ant->prox=NULL;
   free(aux);
   aux=NULL;
  }

  return lista;

}

int busca(Node *lista, int elem){

    Node *aux=lista;

    while(aux!=NULL){

       if(aux->info == elem){
	     printf("%d está contido na lista.\n", elem);
		return 1;

        }

	   aux=aux->prox;

    }

    printf("%d não estpa contido na lista.\n", elem);
    return 0;

}


