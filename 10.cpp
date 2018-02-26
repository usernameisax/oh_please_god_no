#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>


	int vet[5];
	int i, j, temp;
	char op;
		
		
		main(){
	do{
		system("cls");
			printf("\n entrada de Valores do Vetor Inicial");
	for(int i=0;i<5;i++){
		vet[i]= rand() % 10;
		printf("\n Vet[%d] = %d", i, vet[i]);
		}
	
	for(i=0;i<5; i++)
	for(j=i+1;j<5;j++)
			{
	if (vet[i]>vet[j])
				{
		temp=vet[i];
		vet[i]=vet[j];
		vet[j]=temp;
		}
			}
		
		printf("\n\n Vetor em ordem crescente: \n");
	for(i=0;i<5;i++)
		printf(" %d",vet[i]); 

		printf("\n\n");
		printf("\n Deseja novos valores <S> ou <N>");
		op=getche(); 
		op=toupper(op);} 
		while(op != 'N');
}
