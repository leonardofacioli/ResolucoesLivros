#include <stdio.h>

int main(){
	
	float preco[5], precomaior100 = 0;
	char nome[5][50];
	int i, qtdmenor50 = 0, qtdmaior100 = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome do produto:");
		scanf(" %[^\n]", nome[i]);
		printf("Digite o preco de %s:", nome[i]);
		scanf("%f", &preco[i]);
		if(preco[i]<50){
			qtdmenor50++;
		}
		if(preco[i]>100){
			qtdmaior100++;
			precomaior100 += preco[i];
		}
	}
	
	precomaior100  = precomaior100/qtdmaior100;
	
	printf("A quantidade de produtos com o preco inferior a 50:%d \n", qtdmenor50);
	printf("Os produtos com preco entre 50 e 100 sao:\n");
	for(i = 0; i < 5; i++){
		if(preco[i] >= 50 && preco[i] <= 100){
			printf("%s.\n", nome[i]);
		}
	}
	
	printf("\nA media dos produtos com preco superior a 100:%.2f", precomaior100);
	
}