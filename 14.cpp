#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int vect[20], h;
char op;

main(){
			do{ system("cls");
			
			printf("\n\nPreenchimento do vetor\n\n");
			int encontrou=0;
						
			for (int i=0; i<20; i++) {
				vect[i]=rand()% 30;}
				
			printf("\nInsira um valor para x de 0 a 30:");
			scanf("%d", &h);
			for (int i=0; i<20; i++) {
					if (h==vect[i]){
						printf("\n\nX na posicao vet[%d] = %d", i, vect[i]);
						encontrou=1;
					}} 
					
					if (encontrou==0){
						printf("\nNao foi encontrado. ");
						
					} 
				
		  
			printf("\nDeseja inserir novo valor de x <s> ou <n>?");
			op=getche();op=toupper(op);			
		}while (op!='N');
		
	}
