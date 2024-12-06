#include <stdio.h>

#define NUM 10

int main(){
	
	int vetor[NUM], vetor2[NUM], i;
	
	for(i = 0; i < NUM; i++){
		printf("Digite a posicao %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < NUM; i++){
		if(vetor[i] == 0){
			vetor2[i] = 1;
		}
		else{
			vetor2[i] = vetor[i];
		} 
	}
	printf("Vetor resultante:\n\n\n");
	for(i = 0; i < NUM; i++){
		printf("Posicao %d:%d.\n", i + 1, vetor2[i]);
	}
}