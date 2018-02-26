#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>


int x, y, z, vetor[12]; 
char op;

		main() { 
	do{
		system("cls");
		printf("\n entrada de Valores do Vetor Inicial");
	for(int i=0;i<12;i++){
		vetor[i]= rand() % 100;
		printf("\n Vet[%d] = %d", i, vetor[i]);
		}

		printf("\n\n\n Quais valores voce quer somar? Digite a primeira posicao: "); 
		scanf("%d", &x); 
		printf("\n\n Digite a segunda posicao: "); 
		scanf("%d", &y); 
		printf("\n\n Voce escolheu os valores: %d e %d \n", vetor[x],vetor[y]); 

		z = (vetor[x] + vetor[y]); 

		printf("O valor da soma e: %d \n", z); 
		printf("\n\n");
		printf("\n Deseja novos valores <S> ou <N>");
		op=getche(); 
		op=toupper(op);} 
	while(op != 'N');
}

