
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

float vet[5];

main(){
	
	printf("\n entrada de Valores do Vetor");
	for(int i=0;i<5;i++){
		 vet[i]= (rand() % 50) * 0.3;
		 printf("\n Vet[%d] = %d", i, vet[i]);
		}
	
	printf("\n\n-------------------------------------------------------\n\n");
	printf("\nOs valores do vetor sao\n");
	for (int i = 0; i<=4; i++){
		printf("vetor[%i] = %.2f\n",i,vet[i]);
	}
	
	system("pause");
}

