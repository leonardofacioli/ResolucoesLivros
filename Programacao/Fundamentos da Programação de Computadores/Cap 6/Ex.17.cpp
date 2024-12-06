#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor1[10], vetor2[10], vetorr[20], i, j = 10, compara;
	
	for(i = 0; i < 10; i++){
		printf("Digite a posicao %d desse vetor:", i + 1);
		scanf("%d", &vetor1[i]);
	}
	for(i = 0; i < 10; i++){
		printf("Digite a posicao %d desse vetor:", i + 1);
		scanf("%d", &vetor2[i]);
	}
	for(i = 0; i < 10; i++){
		vetorr[i] = vetor1[i];
	}
	for(i = 0; i < 10; i++){
		vetorr[j] = vetor2[i];
		j++;
	}
	
	for(i = 0; i < 20; i ++){
		for(j = i + 1; j < 20; j++){
			if(vetorr[i] < vetorr[j]){
				compara = vetorr[i];
				vetorr[i] = vetorr[j];
				vetorr[j] = compara;
			}
		}
	}
	
	for(i = 0; i < 20; i++){
		printf("Posicao %d:%d\n", i + 1, vetorr[i]);
	}
}