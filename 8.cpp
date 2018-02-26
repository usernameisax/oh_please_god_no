#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

int V[5];
char op, c[5];

main(){
	do{ system("cls");
		printf("\nPreencha os vetores");
		for (int i=0; i<5; i++){
			c[i]=(rand()%26) + 'a';
			c[i]= toupper(c[i]);
		printf("\nO vetor [%d] e igual a %c", i, c[i]);
		}
		printf("\nDeseja re-inserir os vetores? <S> ou <N>");
		op=getche(); op=toupper(op);
	} while (op!='N');
}

