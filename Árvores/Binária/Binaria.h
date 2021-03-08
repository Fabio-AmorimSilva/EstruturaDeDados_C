/********************************************************
*
* Name: Binaria.h
* Purpose: Implements a binary tree
* Author: Fabio Amorim da Silva
*
*********************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

   int num;
   struct Node *esq;
   struct Node *dir;

}Node;

Node *arv;

Node *criaArvore(){
	return NULL;

}

//Imprime os elementos em pré-ordem
void preOrdem(Node *raiz){

   if(raiz != NULL){

	printf("%d ", raiz->num);
	preOrdem(raiz->esq);
	preOrdem(raiz->dir);	

    }

}

//Imprime os elementos em Ordem
void Ordem(Node *raiz){

    if(raiz != NULL){
	
	Ordem(raiz->esq);
	printf("%d ", raiz->num);
	Ordem(raiz->dir);

    }


}

//Imprime os elementos em pós-ordem
void posOrdem(Node *raiz){

    if(raiz != NULL){
	
	posOrdem(raiz->esq);
	posOrdem(raiz->dir);
	printf("%d ", raiz->num);

    }


}





//Busca um elemento na árvore
Node *buscaBinaria(Node *raiz, int valor){

    if(raiz == NULL){
	return NULL;

    }
    if(valor < raiz->num){
	return buscaBinaria(raiz->esq, valor);
    
    }else if(valor > raiz->num){
	return buscaBinaria(raiz->dir, valor);

    }

    return raiz;

}

//Busca o menor elemento da árvore
Node *buscaMin(Node *raiz){

    if(raiz == NULL){
	return NULL;

    }else if(raiz->esq == NULL){
	return raiz;

    }
    else{
	return buscaMin(raiz->esq);

    }

}

//Busca o maior elemento da árvore
Node *buscaMax(Node *raiz){

    if(raiz == NULL){
 	return NULL;

    }else if(raiz->dir == NULL){
	return raiz;

    }
    else{
	return buscaMax(raiz->dir);

    }

}

//Insere elementos na árvore
Node *insereBinaria(Node *raiz, int valor){

    if(raiz == NULL){
	raiz = (Node*)malloc(sizeof(Node));
	raiz->num = valor;
        raiz->dir = NULL;
        raiz->esq = NULL;

    }else if(valor < raiz->num){
	raiz->esq = insereBinaria(raiz->esq, valor);

    }else if(valor > raiz->num){
	raiz->dir = insereBinaria(raiz->dir, valor);

    }

    return raiz;

}

//Deleta elementos da árvore
Node *deletaBinaria(Node *raiz, int valor){

    Node *temp;

    if(raiz == NULL){
	printf("O elemento não foi encontrado.\n");

    //Buscando pelo elemento
    }else if(valor < raiz->num){
	raiz->esq = deletaBinaria(raiz->esq, valor);

    }else if(valor > raiz->num){
	raiz->dir = deletaBinaria(raiz->dir, valor);

    }else{
	//Achou o elemento
	//Dois filhos
	//Troca o elemento com o maior da subárvore da esquerda
 	if(raiz->esq != NULL && raiz->dir != NULL){
	    temp = buscaMax(raiz->esq);
	    raiz->num = temp->num;
	    raiz->esq = deletaBinaria(raiz->esq, raiz->num);

	}else{
	//Um filho
	    temp = raiz;
	    if(raiz->esq == NULL){
	  	temp = raiz->dir;

	    }
	    if(raiz->dir == NULL){
		temp = raiz->esq;
	    
	    }

	    free(temp);
	}
	
    }

    return raiz;

}































