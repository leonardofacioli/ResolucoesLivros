#include <stdio.h>
#include <stdlib.h>

int main(){

	int vetor[10], i, impar = 0, par = 0, j = 0, n = 0;

	printf("Preencha o vetor:\n\n\n");
	for(i = 0; i < 10; i++){
		printf("Digite a posicao %d desse vetor:", i + 1);
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 == 0){
			par++;
	}
		else{
		impar++;
		}
	}	
	int vetorimpar[impar], vetorpar[par];
	for(i = 0; i < 10; i++){
	if(vetor[i] % 2 == 0){
		vetorpar[j] = vetor[i];
		j++;
	}
	else{
		vetorimpar[n] = vetor[i];
		n++;
	}
	}
	printf("---- O primeiro vetor resultante----\n\n\n");
	for( i = 0; i < par; i++){
		printf("A posicao %d: %d\n", i + 1, vetorpar[i]);
	}
	printf("---- O segundo vetor resultante----\n\n\n");
	for( i = 0; i < impar; i++){
	printf("A posicao %d: %d\n", i + 1, vetorimpar[i]);
	}

}
