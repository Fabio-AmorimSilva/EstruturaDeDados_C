/*******************************************************
*
* Name: exerciciosPilha.h
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

Pilha *pilha1;
Pilha *pilha2;
Pilha *pilha3;

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


void revertePilha(Pilha *pilhar, Pilha *pilha1, Pilha *pilha2){

    float tam = sizeof(pilhar); //Tamanho da pilha
    int count = (int)tam;

    if(vazia(pilhar)){
      printf("Pilha vazia!\n");
   
    }else{
    
      while(vazia(pilhar) != 1){
	    push(pilha1, pilhar->top->num);
	    pop(pilhar);
	 
	 }

	 while(count > tam/2){
	   push(pilha2, pilha1->top->num);
	   pop(pilha1);
	   count--;
	 
	 }

	 while(vazia(pilha1) != 1){
	   push(pilha2, pilha1->top->num);
	   pop(pilha1);
	 
	 }

	 while(vazia(pilha2) != 1){
	   push(pilhar, pilha2->top->num);
	   pop(pilha2);
	 
	 }

   }

}

void ordemCresc(Pilha *pilha1, Pilha *pilha2){

   Node *aux_ptr = pilha2->top;
   Node *ant = NULL;
   int aux_num;
  
   if(vazia(pilha1) == 1){
     printf("Pilha vazia!\n");

   }else{
    
   push(pilha2, pilha1->top->num);
   pop(pilha1);

 while(vazia(pilha1) != 1){
   while(pilha1->top->num >= aux_ptr->num){
 	  ant=aux_ptr;
	  aux_ptr=aux_ptr->prox;

   }

    aux_num=aux_ptr->num;
    aux_ptr->num=pilha1->top->num;
    ant->num=aux_num;
    pop(pilha1);

  }
   }
   
     while(vazia(pilha2) != 1){
      push(pilha1, pilha2->top->num);
      pop(pilha2);

    }
   
}

void imprime(Pilha *pilha){

  Node *aux_ptr=pilha->top;

  if(vazia(pilha) != 1){
    while(aux_ptr != NULL){
       printf("%d\n", aux_ptr->num);
       aux_ptr=aux_ptr->prox;

    }
  }else{
 	printf("Pilha vazia!\n");

  }

}










