#include <stdio.h>

int main(){
	
	int vetorA[5], vetorB[5], vetorR[5], i;
	
	printf("Preencha o vetor A:\n\n\n");
	for(i = 0; i < 5; i++){
		printf("Digte a posicao %d:", i + 1);
		scanf("%d", &vetorA[i]);
	}
	printf("\n\n\nPreencha o vetor B:\n\n\n");
	for(i = 0; i < 5; i++){
		printf("Digte a posicao %d:", i + 1);
		scanf("%d", &vetorB[i]);
	}
	for(i = 0; i < 5; i ++){
		vetorR[i] = vetorB[4 - i] - vetorA[i];
	}
	
	printf("Vetor resultante:\n\n\n");
	for(i = 0; i < 5; i++){
		printf("Posicao %d:%d\n", i + 1, vetorR[i]);
	}
}