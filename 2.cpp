#include<iostream>
#include<conio.h>
#include<stdio.h>

float p1,p2,p3,p4,q1,q2,q3,q4, total, desc, parc2, parc3;
char op;
char nome[60], email[60],fone[30],cpf[30];

main() { do {
	
	printf("\n--------------------- LOJA DE INFORMATICA --------------------------------- ");
	printf("\n\n---CADASTRO DO CLIENTE ---------------------------------------------------- ");
	printf("\n\n Insira seu nome: ");
	scanf("%s",&nome);
	printf("\n Insira seu e-mail: ");
	scanf("%s",&email);
	printf("\n Insira seu CPF: ");
	scanf("%s",&cpf);
	printf("\n Insira seu telefone: ");
	scanf("%s",&fone);
	
	printf ("\nEscolha as quantidades dos produtos abaixo:");
	
	printf("\n  1- HD 1 tera R$ 500.00 - qtd:_");
		scanf("%f",&q1);
	printf("\n  2- Impressora laser R$ 800.00 - qtd:_");
		scanf("%f",&q2);
	printf("\n  3- Pendrive 32Gb R$ 40.00 - qtd:_");
		scanf("%f",&q3);
	printf("\n  4- Note Dell i3 R$ 2300.00 - qtd:_");
		scanf("%f",&q4);
	
	p1= q1*500;
	p2= q2*800;
	p3= q3*40;
	p4= q4*2300;
	total = p1 + p2 + p3 + p4;
	desc= total*0.90;
	parc2 = total/2;
	parc3= total/3;
	
	if (total >=3000) {
		printf ("\n\nEscolha uma das opcoes (1, 2 ou 3) de pagamento: ");
		printf ("\n 1 - Parcela unica com desconto: %.2f",desc);
		printf ("\n 2 - 2 parcelas de :R$ %.2f", parc2);
		printf ("\n 3 - 3 parcelas de : R$ %.2f", parc3);
		printf ("\n Digite uma opcao:__");
		scanf ("%s", &op);
		 
			if ( op == '1') 
				{ printf("\n---------------------------- NOTA FISCAL -------------------------------------");
				  printf("\n DADOS DO CLIENTE");
				  printf("\n  Nome: %s", nome);
				  printf("\n  CPF: %s", cpf);
				  printf("\n  Telefone: %s",fone);
				  printf("\n  E-mail: %s", email);
				  printf("\n ------- DADOS DOS PRODUTOS --------------------------------------------------");
				                printf("\n PRODUTOS         | Valor Unit | Qtd   | Valor");
				  	if (q1>0) {	printf ("\n HD 1 tera         | R$  500.00 | %.2f  | %.2f", q1,p1);}
					if (q2>0) {	printf ("\n Impressora laser  | R$  800.00 | %.2f  | %.2f", q2,p2);}
					if (q3>0) {	printf ("\n Pendrive 32Gb     | R$   40.00 | %.2f  | %.2f", q3,p3);}
					if (q4>0) {	printf ("\n Note Dell i3      | R$ 2300.00 | %.2f  | %.2f", q4,p4);}
				 			    printf("\n\n Valor total da nota: R$ %.2f", total);
				 			    printf("\n Forma de pagamento a vista com desconto, valor final de R$ %.2f", desc);
				}
			if ( op == '2') 
				{ printf("\n---------------------------- NOTA FISCAL -------------------------------------");
				  printf("\n DADOS DO CLIENTE");
				  printf("\n  Nome: %s", nome);
				  printf("\n  CPF: %s", cpf);
				  printf("\n  Telefone: %s",fone);
				  printf("\n  E-mail: %s", email);
				  printf("\n ------- DADOS DOS PRODUTOS --------------------------------------------------");
				                printf("\n PRODUTOS          | Valor Unit | Qtd   | Valor");
				  	if (q1>0) {	printf ("\n HD 1 tera         | R$  500.00 | %.2f  | %.2f", q1,p1);}
					if (q2>0) {	printf ("\n Impressora laser  | R$  800.00 | %.2f  | %.2f", q2,p2);}
					if (q3>0) {	printf ("\n Pendrive 32Gb     | R$   40.00 | %.2f  | %.2f", q3,p3);}
					if (q4>0) {	printf ("\n Note Dell i3      | R$ 2300.00 | %.2f  | %.2f", q4,p4);}
				 			    printf("\n\n Valor total da nota: R$ %.2f", total);
				 			    printf("\n Forma de pagamento em 2 parcelas de R$ %.2f", parc2);
				}
				
			if ( op == '3') 
				{ printf("\n---------------------------- NOTA FISCAL -------------------------------------");
				  printf("\n DADOS DO CLIENTE");
				  printf("\n  Nome: %s", nome);
				  printf("\n  CPF: %s", cpf);
				  printf("\n  Telefone: %s",fone);
				  printf("\n  E-mail: %s", email);
				  printf("\n ------- DADOS DOS PRODUTOS --------------------------------------------------");
				                printf("\n PRODUTOS           | Valor Unit | Qtd   | Valor");
				  	if (q1>0) {	printf ("\n HD 1 tera         | R$  500.00 | %.2f  | %.2f", q1,p1);}
					if (q2>0) {	printf ("\n Impressora laser  | R$  800.00 | %.2f  | %.2f", q2,p2);}
					if (q3>0) {	printf ("\n Pendrive 32Gb     | R$   40.00 | %.2f  | %.2f", q3,p3);}
					if (q4>0) {	printf ("\n Note Dell i3      | R$ 2300.00 | %.2f  | %.2f", q4,p4);}
				 			    printf("\n\n Valor total da nota: R$ %.2f", total);
				 			    printf("\n Forma de em 3 parcelas de R$ %.2f", parc3);
				}
				
		}
		
		if (total < 3000) {
				  printf("\n---------------------------- NOTA FISCAL -------------------------------------");
				  printf("\n DADOS DO CLIENTE");
				  printf("\n  Nome: %s", nome);
				  printf("\n  CPF: %s", cpf);
				  printf("\n  Telefone: %s",fone);
				  printf("\n  E-mail: %s", email);
				  printf("\n ------- DADOS DOS PRODUTOS --------------------------------------------------");
				                printf("\n PRODUTOS          | Valor Unit | Qtd   | Valor");
				  	if (q1>0) {	printf ("\n HD 1 tera         | R$  500.00 | %.2f  | %.2f", q1,p1);}
					if (q2>0) {	printf ("\n Impressora laser  | R$  800.00 | %.2f  | %.2f", q2,p2);}
					if (q3>0) {	printf ("\n Pendrive 32Gb     | R$   40.00 | %.2f  | %.2f", q3,p3);}
					if (q4>0) {	printf ("\n Note Dell i3      | R$ 2300.00 | %.2f  | %.2f", q4,p4);}
				 			    printf("\n\n Valor total da nota: R$ %.2f", total);
				 			    printf("\n Forma de pagamento em parcela unica sem desconto");
						
		}
	
		
	printf("\n\n\nDeseja novo valor <S> ou <N> __");
	op=getch();
	op=toupper(op);
	} while (op!='N');
	
		
}
