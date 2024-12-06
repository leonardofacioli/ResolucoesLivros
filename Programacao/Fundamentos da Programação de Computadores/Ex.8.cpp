#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 7

int main(){
	
	int media[NUM], maiormedia = 0, i, j = 0;
	char nome[NUM][50], nomemaior[50];
	
	for(i = 0; i < NUM; i++){
		printf("Informe o nome do aluno:");
		scanf(" %[^\n]", nome[i]);
		printf("Informe a nota do aluno:");
		scanf("%d", &media[i]);
		
		if(media[i] < 7){
			j++;
		}
	}
	
	int exame[j];
	
	maiormedia = media[0];
	strcpy(nomemaior, nome[0]);
	for(i = 0; i < NUM; i++){
		if(maiormedia < media[i]){
			maiormedia = media[i];
			strcpy(nomemaior, nome[i]);
		}
	}
	
	printf("O %s tem a maior media com %d.\n\n\n", nomemaior, maiormedia);
	
	j = 0;
	
	for(i = 0; i < NUM; i++){
		if(media[i] < 7){
			exame[j] = 10 - media[i];
			printf("O aluno %s tem que tirar %d para passar.\n", nome[i], exame[j]);
			j++;
		}
	}
	
	
}