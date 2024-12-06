#include <stdio.h>

#define NUM 5

int main(){
	
	int vetor[NUM], j = 0, i, qtdprimos = 0;
	
	printf("Preencha o vetor:\n\n\n");
	for(i = 0; i < NUM; i++){
		printf("Posicao %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	for (int i = 2; i * i <= vetor[j]; i++) {
		for(j = 0; j < NUM; j++){
			if(vetor[j] % i == 0 && vetor[j] <= 1){
				vetor[j] = vetor[j];	
        	}
        	else{
        		qtdprimos++;
			}
		}
    }
    int vetorR[qtdprimos], n = 0;
    for (int i = 2; i * i <= vetor[j]; i++) {
		for(j = 0; j < NUM; j++){
			if(vetor[j] % i == 0 || vetor[j] <= 1){
				vetor[j] = vetor[j];	
        	}
        	else{
        		vetorR[n] = vetor[j];
        		n++;
			}
		}
        
    }
    printf("\n\n\nVetor resultante dos numeros primos:\n\n\n");
    for(i = 0; i < qtdprimos; i++){
    	printf("Posicao %d:%d.\n", i + 1, vetorR[i]);
	}

}