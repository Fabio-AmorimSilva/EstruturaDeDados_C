/***********************************************
*
* Name: funcoes.c
* Purpose: implementa funções recursivas
* Author: Fabio Amorim da Silva
*
************************************************/

#include<stdio.h>
#include<stdlib.h>

int soma(int);
int fatorial(int);
int primos(int);
int cubo(int);

int main(void){

   int num;

   printf("Digite o número a ser somado recursivamente: ");
   scanf("%d",&num);

   printf("Soma: %d\n", soma(num));
   printf("Fatorial %d: %d\n", num, fatorial(num));
   primos(num);
   printf("O cubo de %d é: %d\n", num, cubo(num));
	

return 0;

}

int soma(int num){

   if(num == 0){
      return 0;
   
   }else{
      return num + soma(num-1);
   
   }

}

int fatorial(int num){

   if(num == 0){
     return 1;   
   
   }else{
     return num*fatorial(num-1);
   
   }

}

int primos(int num){ 

    if(num == 0){
       return num;
   
    }else{
        
      if((num+1)% 2 == 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0 || num == 3 || num == 5 || num == 7 || num == 2){

	   printf("Primos: %d\n", num);
        return primos(num-1);

      }else{
	   return primos(num-1);
	 
	 }
   
    }

}

int cubo(int num){

    int count = 3;

    if(count == 0){
       return num;

    }else{
       count--;
       return num*cubo(num);
    
    }

}

