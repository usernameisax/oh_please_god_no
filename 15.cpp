#include <stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>

int par=0, vet[13];
char op;

main(){

printf("\n entrada de Valores do Vetor");
	for(int k=0;k<13;k++){
		 vet[k]= rand() % 100;
		 printf("\n Vet[%d] = %d", k, vet[k]);
		}
		
	printf("\n\n Saida de Valores Pares do Vetor");
	for(int k=0;k<13;k++){
		if(vet[k] % 2 == 0){
		printf("\n\n Vet[%d] = %d ",k,vet[k]);
		par = par + 1;
		printf("\n\nExistem %d valores pares no vetor", par);}
}

}
