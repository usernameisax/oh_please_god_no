#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int vet[10],i;
char op;



main() {
	do {
		system("cls");

for(int i=0; i<10; i++) {
    do {
      vet[i]= rand() % 50;
      }while (vet[i] % 2 == 0);
      		printf("\n Vet[%d] = %d ",i,vet[i]);
			  }
          
        printf("\n\n");
		printf("\n Deseja novos valores <S> ou <N>");
		op=getche(); 
		op=toupper(op);} 
		while(op != 'N');}
