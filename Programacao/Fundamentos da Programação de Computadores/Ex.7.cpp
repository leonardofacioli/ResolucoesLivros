#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor[10], i, somapositivos = 0, qtdnegativos = 0;
	
	printf("Preencha o vetor:\n\n\n");
	for(i = 0; i < 10; i++){
		printf("Insira a posicao %d:", i + 1);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] < 0){
			qtdnegativos++;
		}
		else{
			somapositivos+=vetor[i];
		}
	}
	
	printf("Soma dos numeros postivos desse vetor: %d\n\n\n", somapositivos);
	
	printf("A quantidade de numeros negativos desse vetor: %d", qtdnegativos);
}