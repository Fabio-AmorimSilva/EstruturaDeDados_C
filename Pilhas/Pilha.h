/*******************************************************
*
* Name: Pilha.h
* Purpose: Implement stack data structure
* Author: Fabio Amorim da Silva
*
********************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

   int num;
   struct Node *prox;

}Node;

typedef struct Pilha{

   Node *top; 

}Pilha;

Pilha *pilha;

//Cria uma pilha vazia
Pilha *criaPilha(){

   Pilha *pilha=(Pilha*)malloc(sizeof(Pilha));
   pilha->top=NULL;
   return pilha;

}

//Verifica se a pilha está vazia
int vazia(Pilha *pilha){

   if(pilha->top == NULL){
      return 1;
   
   }else{
      return 0;
   
   }
}

//Retorna o topo da pilha
int top(Pilha *pilha){

    if(vazia(pilha)){
      return 0;

    }else{
       return pilha->top->num;

    }

}

//Insere na pilha (push)
void push(Pilha *pilha, int valor){

   Node *novo = (Node*)malloc(sizeof(Node));
   novo->num = valor;
   novo->prox=pilha->top;
   pilha->top=novo;

}

//Remove o topo da pilha (pop)
int pop(Pilha *pilha){

   Pilha *aux=(Pilha*)malloc(sizeof(Pilha));
   aux->top=pilha->top;
   int valor;

   if(vazia(pilha)){
     return 0;

   }else{

    valor = pilha->top->num;
    pilha->top=aux->top->prox;
    free(aux);
    aux=NULL;
    return valor;

    }
   
}

//Esvazia a pilha (Empty)
void esvaziaPilha(Pilha *pilha){

   while(vazia(pilha) != 1){
      pop(pilha);
   }
}















