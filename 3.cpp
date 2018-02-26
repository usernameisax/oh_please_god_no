#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int veta[7], vetb[7], vetc[14], resposta;
char op;

main() {
	do {
		system("cls");

//vet_a
		printf("\n\n A\n\n");
		for(int i=0; i<7; i++) {
			veta[i]=rand() % 99;
		}

		for(int i=0; i<7; i++) {
			printf("\n vet[%d]=%d", i, veta[i]);
		}
//vet_b
		printf("\n\n B\n\n");
		for(int i=0; i<7; i++) {
			vetb[i]=rand() % 99;
		}

		for(int i=0; i<7; i++) {
			printf("\n vetb[%d]=%d", i, vetb[i]);
		}



		printf("\n\n op:1 ");
		printf("\n op 2:");
		printf("\n op:3 ");
		printf("\n op:4");
		scanf("%d", &resposta);

		int i, j, aux;

		if(resposta==1) {
			for( i=0; i<7; i++ ) {
				for( j=i+1; j<7; j++ ) {
					if( veta[i] > veta[j] ) {
						aux = veta[i];
						veta[i] = veta[j];
						veta[j] = aux;
					}
				}
			}


			for(int i=0; i<7; i++) {
				printf("\n vet[%d]=%d", i, veta[i]);
			}
		}

		if(resposta==2) {
			for( i=0; i<7; i++ ) {
				for( j=i+1; j<7; j++ ) {
					if( vetb[i] < vetb[j] ) {
						aux = vetb[i];
						vetb[i] = vetb[j];
						vetb[j] = aux;
					}
				}
			}


			for(int i=0; i<7; i++) {
				printf("\n vet[%d]=%d", i, vetb[i]);
			}
		}

		if(resposta==3) {
			vetc[0] = veta[0];
			vetc[1] = vetb[0];
			vetc[2] = veta[1];
			vetc[3] = vetb[1];
			vetc[4] = veta[2];
			vetc[5] = vetb[2];
			vetc[6] = veta[3];
			vetc[7] = vetb[3];
			vetc[8] = veta[4];
			vetc[9] = vetb[4];
			vetc[10] = veta[5];
			vetc[11] = vetb[5];
			vetc[12] = veta[6];
			vetc[13] = vetb[6];

			for(int i=0; i<14; i++) {
				printf("\n vet[%d]=%d", i, vetc[i]);
			}
		}

		if(resposta==4) {
			printf("\n deseja novamente? <s> ou <n>");
			op=getche();
			op=toupper(op);
		}
	} while (op!='N');

}

