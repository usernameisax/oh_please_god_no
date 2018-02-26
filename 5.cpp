Vetores_Ex1.cpp
Ano passado
28 de jun de 2017

Mitzrael Tassinari compartilhou 1 item
Texto
Vetores_Ex1.cpp
R
Pode editar
Rafael Izidoro
26 de jun de 2017

Ricardo Bresolin fez o upload de 1 item
Texto
Vetores_Ex1.cpp
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int vet1[5], vet2[5], vet3[5];

main(){
	
printf("\n entrada de Valores do Vetor 1");
	for(int i=0;i<5;i++){
		 vet1[i]= rand() % 10;
		 printf("\n Vet1[%d] = %d", i, vet1[i]);
		}
	
printf("\n entrada de Valores do Vetor 2");
	for(int i=0;i<5;i++){
		 vet2[i]= rand() % 10;
		 printf("\n Vet2[%d] = %d", i, vet2[i]);
		}
		
	vet3[0] = vet1[0]*vet2[0];
	vet3[1] = vet1[1]*vet2[1];
	vet3[2] = vet1[2]*vet2[2];
	vet3[3] = vet1[3]*vet2[3];
	vet3[4] = vet1[4]*vet2[4];
	
	
	printf("\nOs valores do vetor 3 sao\n");
	for (int i = 0; i<=4; i++){
		printf("Vetor 3[%i] = %.2d\n",i,vet3[i]);
	}
	
	system("pause");			
}


