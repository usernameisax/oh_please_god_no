#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

	float  vetor[5]; 
	char op;

		main(){
	do{
		system("cls");
	
	
		printf("\n entrada de Valores do Vetor Inicial");
	for(int i=0;i<5;i++){
		vetor[i]=( rand() % 50) * 0.3;
		printf("\n Vet[%d] = [%.1f]", i, vetor[i]);
		}
		
	
		printf("\n\n");
		printf("\n Deseja novos valores <S> ou <N>");
		op=getche(); 
		op=toupper(op);} 
		while(op != 'N');
}
