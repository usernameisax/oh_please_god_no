#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<ctype.h>
#include<io.h>
#include<string.h>
#include<dos.h>
#include <locale.h>
#include <time.h>

using namespace std;

struct dados{

		
	char nomepe[20];
	char codpe[50];
	char materialde[30];
	float valorpe;
	float numerodepe;
	char datacon[20];
	
	} peca;
FILE *prod;
FILE *pf;
char op;
int tamf, opcf;



void cria_arq1(){
	if((prod=fopen("novo.dat","a"))==NULL){
		printf("Erro de criacao do arquivo");
		return;
	}
	printf("Arquivo criado");
	fclose(prod);
}

void cria_arq()
{
	if ((pf = fopen("novo.dat","a"))==NULL)
     {
	printf("Erro de criacao do arquivo");
	return;
     }
     printf("Arquivo Criado");
     //delay(1000);
     fclose(pf);//fecha arquivo
}

void cadastra_peca()
{
  system("cls");
  int tamanho=0;
  prod= fopen("func.dat","r+");
  rewind(prod);//aponta para o primeiro registro, comeÁo do arquivo(registro 0)
  do{
  fread(&peca,sizeof(prod),1,prod);
  tamanho++;}
  while(!feof(prod));

  fseek(prod,sizeof(peca),tamanho);
  do
  {
  	system("cls");
     printf("\nDigite o nome da peca:");
     cin>>peca.nomepe;
     printf("Digite o  material:");
     cin>>peca.materialde;
     printf("Digite o valor da peca:");
     cin>>peca.valorpe;
     tamanho=tamanho+fwrite(&peca,sizeof(struct dados),1,prod);
     printf("\nContinuar cadastrando<s> ou <n>:");
     cin>>op;
     op = toupper(op);
     }while (op=='S');
     fclose(prod);
}

void consulta()
{
system ("cls");
prod=fopen("func.dat","r+");
fseek(prod,sizeof(struct dados),0);
while(fread(&peca,sizeof(peca),1,prod)==1)
{


system("cls");
printf("Nome da peca:  %s\n",peca.nomepe);
printf("Materail:   %s\n",peca.materialde);
printf("Valor:   %2f\n",peca.valorpe);

getch();
      }
     printf("fim do arquivo");
     fclose(prod);
     getch();
}

void consulta_nome(){
     char nom_pro[20];
     int achou,
	 cont=0;
	system("cls");
	prod=fopen("novo.dat","r+");
    fseek(prod,sizeof(struct dados),0);
	printf("Digite o Nome p/ Procura : ");
	cin>> nom_pro;
	while(fread(&peca,sizeof(peca),1,prod)==1){
		achou=strcmp(peca.nomepe,nom_pro);
		if(achou==0){
		   printf("\nO Nome Ç.................:%s\n",peca.nomepe);
		   printf("material Ç................:%d\n",peca.materialde);
		   printf("valor Ç........:%0.2f\n",peca.valorpe);
		   
		    printf("_____________________________________________\n");
		   getch();
		   cont=1;}}

		if(cont==0){
		    printf("Nome n∆o Cadastrado\n");
		    printf("\nCadastrar Peca<s> ou <n>:");
		    cin>>op;
		    op = toupper(op);
		    if (op=='S'){
		    cadastra_peca();
		    getch();}}}
		    
		    
		    
void menu()
{
  system("cls");
  printf("Menu de opcoes");
  printf("\n");
  printf("1 - Cadastrar\n");
  printf("2 - Consultar Por Nome\n");
  printf("Digite uma opcao\n");
  cin>>opcf;
  switch(opcf)
  {
  	case 1:cadastra_peca();break;
  	case 2:consulta();break;
  	case 3:consulta_nome();break;
  }}
  	
main(){
system("cls");
cria_arq();
int opc = 1;
  do
  {
  menu();
  }
  while (op!=8);

}
