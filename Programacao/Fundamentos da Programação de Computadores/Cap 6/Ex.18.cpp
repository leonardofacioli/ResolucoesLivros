#include <stdio.h>

int main(){
	
	int vetor[15], i, maiornumero, menornumero;
	
	for(i = 0; i < 15; i++){
		printf("Digite a posicao %d desse vetor:", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	maiornumero = vetor[0];
	
	for(i = 0; i < 15; i++){
		if(vetor[i] > maiornumero){
			maiornumero = vetor[i];
		}
	}
	
	menornumero = vetor[0];
	
	for(i = 0; i < 15; i++){
		if(vetor[i] < menornumero){
			menornumero = vetor[i];
		}
	}
	
	for(i = 0; i < 15; i++){
		if(maiornumero == vetor[i]){
			printf("O vetor de posicao %d tem o maior valor:", i + 1);
		}
		if(menornumero == vetor[i]){
			printf("\nO vetor de posicao %d tem o menor valor:", i + 1);
		}
	}
	
	
}