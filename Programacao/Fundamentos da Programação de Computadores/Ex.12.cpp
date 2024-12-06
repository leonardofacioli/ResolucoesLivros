#include <stdio.h>

int main(){


	int vetor[5], i, soma = 0;

	for(i=0; i < 5; i++){
    	printf("Digite a posicao %d desse vetor:", i + 1);
    	scanf("%d", &vetor[i]);
    	soma += vetor[i];
}
    printf("Os numeros digitados foram: %d + %d + %d + %d + %d = %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], soma);
}