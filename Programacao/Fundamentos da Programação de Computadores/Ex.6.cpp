#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM 10
int main(){
	
	int valorreceber[NUM], comissao[NUM], totaldevendas[NUM], maiorvalor, menorvalor, i;
	char nome[NUM][50], nomemaiorvalor[50], nomemenorvalor[50];
	for(i = 0; i < NUM; i++){
		printf("Digite o nome do vendedor:");
		scanf(" %[^\n]", nome[i]);
		printf("Digite o total que ele vendeu:");
		scanf("%d", &totaldevendas[i]);
		printf("Digite seu percentual de comissao:");
		scanf("%d", &comissao[i]);
		
		valorreceber[i] = totaldevendas[i] * (comissao[i]/100);
		
	}
	
	menorvalor = valorreceber[0];
	maiorvalor = valorreceber[0];
	strcpy(nomemaiorvalor, nome[0]);
	strcpy(nomemenorvalor, nome[0]); 
	for(i = 0; i < NUM; i++){
		if(menorvalor > valorreceber[i]){
			menorvalor = valorreceber[i];
			strcpy(nomemenorvalor, nome[i]);
		}
		if(maiorvalor<valorreceber[i]){
			maiorvalor = valorreceber[i];
			strcpy(nomemaiorvalor, nome[i]);
		}
	}
	for(i = 0; i < NUM; i++){
		printf("O vendedor %s tem %d a receber e ele vendeu %d.\n", nome[i], valorreceber[i], totaldevendas[i]);
	}
	
	printf("O vendedor com o menor valor a receber e o %s e ele tem que receber %d.\n\n\n", nomemenorvalor, menorvalor);
	printf("O vendedor com o maior valor a receber e o %s e ele tem que receber %d.\n\n\n", nomemaiorvalor, maiorvalor);
}