#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main(){
	
	int codigo[NUM], i;
	float preco[NUM], novopreco[NUM];
	char nome[NUM][50];
	
	for(i = 0; i < NUM; i++){
		printf("Digite o nome do produto: ");
		scanf(" %[^\n]", nome[i]);
		printf("Digite o codigo do produto: ");
		scanf("%d", &codigo[i]);
		printf("Digite o preco do produto: ");
		scanf("%f", &preco[i]);
		
		novopreco[i] = preco[i];
	}
	
	for(i = 0; i < NUM; i++){
		if(codigo[i] % 2 == 0 && preco[i] > 1000){
			novopreco[i] = preco[i] * 1.2; 
		}
		else if(codigo[i] % 2 == 0){
			novopreco[i] = preco[i] * 1.15;
		}
		else if(preco[i] > 1000){
			novopreco[i] = preco[i] * 1.1;
		}
		else{
			novopreco[i] = preco[i];
		}
	}
	
	for(i = 0; i < NUM; i++){
		if(preco[i] < novopreco[i]){
			printf("O produto %s tem codigo %d seu preco era %.2f e o hoje custa %.2f.\n", nome[i], codigo[i], preco[i], novopreco[i]);
		}
		else{
			printf("O produto %s tem codigo %d seu preco eh %.2f e nao sofreu alteracao.\n", nome[i], codigo[i], preco[i]);
		}
	}
}