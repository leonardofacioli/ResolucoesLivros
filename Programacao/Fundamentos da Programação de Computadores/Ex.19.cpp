#include <stdio.h>

#define NUM 10

int main(){
	
	int vetor1[NUM], vetor2[NUM], vetorr[NUM], i;
	
	for(i = 0; i < NUM; i++){
		printf("Digite a posicao %d:", i + 1);
		scanf("%d", &vetor1[i]);
	}
	for(i = 0; i < NUM; i++){
		printf("Digite a posicao %d:", i + 1);
		scanf("%d", &vetor2[i]);
	}
	for(i = 0; i < NUM; i++){
		vetorr[i] = vetor1[i] * vetor2[i];
	}
	for(i = 0; i < NUM; i++){
		printf("Posicao %d vetor resultante:%d.\n", i + 1, vetorr[i]);
	}
}