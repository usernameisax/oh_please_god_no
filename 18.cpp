#include <stdio.h>
char nome[10][100];
float altura[10];
int sexo[10];
 
int main(void) {
	printf("Digite em ordem, nome altura e sexo (sendo masculino 1 e feminino 2): ");
	for(int i = 0; i < 10; i++){
		scanf("%s", &nome[i]);
		scanf("%f", &altura[i]);
		scanf("%i", &sexo[i]);
	}
 
	for(int i = 0; i < 10; i++){
		printf("\nNome: %s Altura: %f Sexo: %i", nome[i], altura[i], sexo[i]);
	}
 
	float maiorAltura = altura[0], menorAltura = altura[0], somaAlturaMulheres = 0, somaAltura = 0;
	int mulheres = 0;
	for(int i = 0; i < 10; i++){
		somaAltura += altura[i];
		if(maiorAltura < altura[i]) {
			maiorAltura = altura[i];
		}
		if(menorAltura > altura[i]) {
			menorAltura = altura[i];
		}
 
		if(sexo[i] == 2) {
			mulheres++;
			somaAlturaMulheres += altura[i];
		}
	}
	printf("\n\nMaior altura: %f, Menor altura: %f", maiorAltura, menorAltura);
 
	float mediaAlturaMulheres = somaAlturaMulheres/mulheres;
	for(int i = 0; i < 10; i++){
		if(sexo[i] == 2 && altura[i] > mediaAlturaMulheres) {
			printf("\n%s tem %f de altura e é maior que a média %f", nome[i], altura[i], mediaAlturaMulheres);
		}
	}
	float mediaAltura = somaAltura/10;
	for(int i = 0; i < 10; i++){
		if(altura[i] < mediaAltura) {
			printf("\n%s tem %f de altura e é menor que a média %f", nome[i], altura[i], mediaAltura);
		}
	}
	return 0;
}
