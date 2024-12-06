#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, vetor[7];
	
	for(i = 0; i < 7; i++){
		printf("Escreva a posicao %d desse vetor:", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	printf("Os numeros multiplos de dois sao: \n\n\n\n");
	for(i = 0; i < 7; i++){
		if(vetor[i] % 2 == 0){
			printf("%d\n", vetor[i]);
		}
	}
	
	printf("\n\n\nOs numeros multiplos de tres sao: \n\n\n\n");
	for(i = 0; i < 7; i++){
		if(vetor[i] % 3 == 0){
			printf("%d\n", vetor[i]);
		}
	}
	
	printf("\n\n\nOs numeros multiplos de ambos sao: \n\n\n\n");
	for(i = 0; i < 7; i++){
		if(vetor[i] % 6 == 0){
			printf("%d\n", vetor[i]);
		}
	}
}