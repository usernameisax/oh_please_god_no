#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int v1[5];
int v2[5];
int result[5];
char op;  

int main(void) {
	do{
	
	
	printf("Digite 5 valores: ");
	int contador; 
	for(contador = 0; contador <= 4; contador++) {
		scanf("%i",&v1[contador]);
  	}
  	
	printf("Digite 5 valores: ");
	for(contador = 0; contador <= 4; contador++) {
		scanf("%i",&v2[contador]);
		result[contador] = v1[contador] * v2[contador];
  	}
 
  	for(contador = 0; contador <= 4; contador++) {
		printf("\nValor do indice %i dos vetores é: %i x %i = %i ", contador, v1[contador], v2[contador], result[contador]);
  	}
 
printf("\n\n");
		printf("\n Deseja novos valores <S> ou <N> \n\n");
		op=getche(); 
		op=toupper(op);} 
		while(op != 'N');
}	

