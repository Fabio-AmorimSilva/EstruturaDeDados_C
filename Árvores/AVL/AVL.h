/***********************************************************************
*
* Nome: AVL.h
* Propósito: Implementa uma árvore  AVL
* Autor: Fabio Amorim da Silva
*
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

   Node *esq;
   Node *dir;
   int item;
   int altura;

}Node;

Node *avl;

int altura(Node *raiz){

    if(!raiz){
	return - 1;

    }else{
	return raiz->altura;

    }
     

}


