#include <stdio.h>

#define NUM 10

int main(){
	
	int vetora[NUM], qtdpositivos = 0, i;
	
	for(i = 0; i < NUM; i++){
		printf("Digite a posicao %d:", i + 1);
		scanf("%d", &vetora[i]);
		if(vetora[i] > 0){
			qtdpositivos++;
		}
	}
	int vetorB[qtdpositivos], j = 0;
	
	for(i = 0; i < NUM; i++){
		if(vetora[i] > 0){
			vetorB[j] = vetora[i];
			j++;
		}
	}
	for(i = 0; i < qtdpositivos; i++){
		printf("Posicao %d:%d.\n", i + 1, vetorB[i]);
	}
}