#include <stdio.h>

#define NUM 5

int main(){
	
	int i;
	float vetor[NUM], maiornumero;
	printf("Preencha o vetor:");
	for(i = 0; i < NUM; i++){
		printf("Posicao %d:", i + 1);
		scanf("%f", &vetor[i]);
	}
	
	maiornumero = vetor[0];
	for(i = 0; i < NUM; i++){
		if(vetor[i] > maiornumero){
			maiornumero = vetor[i];
		}
	}
	for(i = 0; i < NUM; i++){
		vetor[i] = vetor[i] / maiornumero;
	}
	printf("Vetor resultante:\n\n\n");
	for(i = 0; i < NUM; i++){
		printf("Posicao %d:%.2f.\n", i + 1, vetor[i]);
	}
}