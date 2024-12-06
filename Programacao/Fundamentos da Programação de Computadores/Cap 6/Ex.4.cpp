#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor[10], i;
	
	printf("Preencha o vetor.\n");
	for(i = 0; i < 10; i++){
		printf("Vetor de posicao %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	printf("As posicoes iguais a 30 sao:\n\n\n ");
	for(i = 0; i < 10; i++){
		if(vetor[i] == 30){
			printf("Posicao %d.\n", i + 1);
		}
	}
	
	
}