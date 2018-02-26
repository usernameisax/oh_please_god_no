TermometroN1-01.cpp
Ano passado
28 de jun de 2017

Mitzrael Tassinari compartilhou 1 item
C++
TermometroN1-01.cpp
M
Pode editar
Mariah Rodrigues
M
Pode editar
Matahary Matahary
R
Pode editar
Rafael Izidoro
20 de abr de 2017Computador
J
Juliana Cruz fez o upload de 1 item
C++
TermometroN1-01.cpp
#include<iostream>
#include<conio.h>
#include<stdio.h>

int n1, n2,n3;
float media;
char op;

main() { do{


	do {
	
	printf("\n\nDigite um numero inteiro N1: ");
	scanf("%d",&n1); } while (n1>13);
	
	do {
	
	printf("\n\nDigite um numero inteiro N2: ");
	scanf("%d",&n2); } while (n1>13);
	
	do {
	
	printf("\n\nDigite um numero inteiro N3: ");
	scanf("%d",&n3); } while (n1>13);
							
	printf ("\nSelecione a opcao desejada:");
	printf("\n 1 - ordem crescente\n");
	printf("\n 2 - ordem decrescente\n");
	printf("\n 3 - ordem media\n__");
	scanf("%s",&op);
	
	if (op=='1') {
	if((n1<n2) && (n1<n3) && (n2<n3)) {	printf("\n %d, %d, %d",n1,n2,n3);}
	 	
	if((n1<n2) && (n1<n3) && (n3<n2)) {printf("\n %d, %d, %d", n1,n3,n2);}
		
	if ((n2<n1) && (n2<n3) && (n1<n3)) {printf ("\n %d, %d, %d",n2,n1,n3);}	
	
	if ((n2<n1) && (n2<n3) && (n3<n1)) {printf ("\n %d, %d, %d",n2,n3,n1);}
	
	if ((n3<n1) && (n3<n2) && (n2<n1)) {printf ("\n %d, %d, %d",n3,n2,n1);}
	
	if ((n3<n1) && (n3<n2) && (n1<n2)) {printf ("\n %d, %d, %d",n3,n1,n2);}
	
		 }
		 
	if (op=='2') {
	if((n1>n2) && (n1>n3) && (n2>n3)) {	printf("\n %d, %d, %d",n1,n2,n3);}
	 	
	if((n1>n2) && (n1>n3) && (n3>n2)) {printf("\n %d, %d, %d", n1,n3,n2);}
		
	if ((n2>n1) && (n2>n3) && (n1>n3)) {printf ("\n %d, %d, %d",n2,n1,n3);}	
	
	if ((n2>n1) && (n2<n3) && (n3<n1)) {printf ("\n %d, %d, %d",n2,n3,n1);}
	
	if ((n3>n1) && (n3>n2) && (n2>n1)) {printf ("\n %d, %d, %d",n3,n2,n1);}
	
	if ((n3>n1) && (n3>n2) && (n1>n2)) {printf ("\n %d, %d, %d",n3,n1,n2);}
	
		 }
		 
	if (op=='3') { media = (n1+n2+n3)/3;
	printf ("\nA media dos entre os numeros e: %.2f\n\n",media);
				}
	
	printf ("\n\nDeseja outro valor <S> ou <N>___");
	op=getche();
	op=toupper(op);
	
	} while (op!='N');

}


