#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int vet1[9], vet2[9], vet3[9], vet4[9];
char op; 

main(){
	do{
		printf("\nPrimeiro Vetor");
		for (int i=0;i<9;i++){
		vet1[i]=rand()%30;
		printf("\n\nvet[%d]=%d",i,vet1[i]); }
		getch();
		system("cls");
		
		printf("\nSegundo Vetor");
		for (int i=0;i<9;i++){
		vet2[i]=rand()%30;
		printf("\n\nvet[%d]=%d",i,vet2[i]); }
		getch();
		system("cls");
					
		printf("\nTerceiro Vetor");
		for (int i=0;i<9;i++){
		vet3[i]=rand()%30;
		printf("\n\nvet[%d]=%d",i,vet3[i]); }
		getch();
		system("cls");
		
		printf("\nVetor Resultante:");
		for (int i=0;i<3;i++){
			vet4[i]=rand()%30;
			vet4[i]=vet1[i];
			vet4[i+3]=vet2[i+3];
			vet4[i+6]=vet3[i+6]; }
		printf("\n Resultante composto pelo primeiro terco de vet1 o segundo terco de vet2 e o ultimo terco de vet3");
		for(int i=0; i<9; i++){
			printf("\n\nvet[%d]= %d", i, vet4[i]);}
		getch();
		system("cls");
		
	
	op=getch();op=toupper(op);
	}while(op!='N');
	}
