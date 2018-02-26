#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

int A[30], B[30], X;
char op;

main(){
	do{ system("cls");
		printf("\nValores de A:");
		for(int i=0; i<30; i++){
			A[i]=rand()%100;
			printf("\n[%d]= %d", i, A[i]);
		}
		printf("\nValores de B:");
		for(int i=0; i<30; i++){
			B[i]=rand()%100;
			printf("\n[%d]= %d", i, B[i]);
	}
	printf("\n\n");
	X=rand()%100;
	printf("\nX= %d", X);
	printf("\nPressione qualquer tecla para continuar. . . .");
	getch();
	system("cls");
	for(int i=0; i<30; i++){
		if(A[i]==X){
			printf("\nO numero de X que esta contido em A e: %d na posicao %d", X, i);
			printf("\nNa mesma posicao em B o numero e: %d", B[i]);
	}
}
	
	printf("\nDeseja repetir a operacao? <S> ou <N>");
	op=getch(); op=toupper(op);
} while (op!='N');
}
