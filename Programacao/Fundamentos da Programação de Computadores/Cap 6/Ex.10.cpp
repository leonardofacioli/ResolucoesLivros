#include <stdio.h>
#include <stdlib.h>

int main(){

int vetor1[10], vetor2[5], i, j = 0, par = 0, impar = 0;

	for(i = 0; i < 10; i++){
		printf("Informe a posicao %d desse vetor:", i + 1);
		scanf("%d", &vetor1[i]);
		if(vetor1[i] % 2 == 0){
			par++;
		}
		else{
			impar++;
		}
		}
	int vetorpar[par], vetorimpar[impar];
	int n = 0;
	for(i = 0; i < 10; i++){
		if(vetor1[i] % 2 == 0){
			vetorpar[j] = vetor1[i];
			j++;
		}
		else{
			vetorimpar[n] = vetor1[i];
			n++;
		}
		}

	for(i = 0; i < 5; i++){
		printf("\nInforme a posicao %d desse segundo vetor:", i + 1);
		scanf("%d", &vetor2[i]);
	}
	for(i = 0; i < par; i++){
		for(j = 0; j < 5; j++){
			vetorpar[i] += vetor2[j];
		}
	}
	int vetordivisivel[impar];
	for(i = 0; i < impar; i++){
		vetordivisivel[i] = 0;
		for(j = 0; j < 5; j++){
			if(vetorimpar[i] % vetor2[j] == 0){
				vetordivisivel[i]++;
			}
		}
	}
	printf("Primeiro vetor resultante:\n\n\n\n\n");
	for(i = 0; i < par; i++){
		printf("Posicao %d: %d\n", i + 1, vetorpar[i]);
	}

	printf("Segundo vetor resultante:\n\n\n\n\n");
	for(i = 0; i < impar; i++){
	printf("Posicao %d: %d\n", i + 1, vetordivisivel[i]);
	}

}
