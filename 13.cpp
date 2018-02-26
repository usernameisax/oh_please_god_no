#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>


int vet[16];
int aux, i;
char op;

  
main() {
  
  do{ system ("cls");
  
  for (i = 0; i < 16; i++){
  	vet[i]=rand()%16;
  	printf("\nVet[%d] = %d", i, vet[i]);
  }
  printf("\n\n Troca de posicao: \n");
  for(i = 0; i < 8; i++)  {
    
    aux = vet[i+8];
    vet[i+8] = vet[i];
    vet[i] = aux;
      }

  for(i = 0;i<16;++i){
  
    printf("\nVet[%d] = %d", i, vet[i]);}
    printf("\nDeseja novo vetor <S> ou <N>");
    op=getche();op=toupper(op);
}while (op != 'N');  

}
