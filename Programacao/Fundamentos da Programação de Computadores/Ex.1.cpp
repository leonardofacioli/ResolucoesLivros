	//Exercicio 1 do Capitulo 6 do livro Ascensio
	/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
	■ todos os números pares;
	■ a quantidade de números pares;
	■ todos os números ímpares;
	■ a quantidade de números ímpares.*/
	//1.Adicionar as bibliotecas necessarias para a resolucao dos exercicios.
#include <stdio.h>

int main(){
	
	//2.Declarara as variaveis que voce utilizara.

	int vetor[6], pares = 0, impares = 0;
	
	//3.Preencher o vetor.

	for(int i = 0; i < 6; i++){
		printf("Digite o numero de posicao %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	
	//4.Fazer a verificacao se o numero e par.
	printf("----Os numeros pares sao----\n");
	for(int i = 0; i < 6; i++){
		if(vetor[i] % 2 == 0){
			printf("%d\n", vetor[i]);
			pares++;
		}
	}
	
	//5.Imprimir a quantidade de numeros pares.
	printf("A quantidade de numeros pares e:%d\n", pares);
	
	//6.Fazer a verificacao se o numero e impar.
	printf("----Os numeros impares sao----\n");
	for(int i = 0; i < 6; i++){
		if(vetor[i] % 2 != 0){
			printf("%d\n", vetor[i]);
			impares++;
		}
	}
	
	//7.Imprimir a quantidade de numeros impares.
	printf("A quantidade de numeros impares e:%d", impares);
	
	
}