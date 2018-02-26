Vetores_Ex3.cpp
Ano passado
28 de jun de 2017

Mitzrael Tassinari compartilhou 1 item
Texto
Vetores_Ex3.cpp
R
Pode editar
Rafael Izidoro
26 de jun de 2017

Ricardo Bresolin fez o upload de 1 item
Texto
Vetores_Ex3.cpp
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

