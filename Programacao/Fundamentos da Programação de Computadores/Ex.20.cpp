#include <stdio.h>

#define NUM 3

int main(){
	
	int vetor[NUM], i;
	
	for(i = 0; i < NUM; i++){
		printf("Digite a posicao %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	printf("Os numeros negativos sao:\n\n");
	for(i = 0; i < NUM; i++){
		if(vetor[i] > 0){
			printf("%d\n", vetor[i]);
		}
	}
}