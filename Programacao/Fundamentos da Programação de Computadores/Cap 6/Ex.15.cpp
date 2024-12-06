#include <stdio.h>

#define NUM 3

int main(){
	
	char clientes[NUM][50];
	int dvd[NUM], i;
	
	for(i = 0; i < NUM; i++){
		printf("Digite o nome do cliente:");
		scanf(" %[^\n]", clientes[i]);
		printf("Informe a quantidade de dvds que ele locou em 2011:");
		scanf("%d", &dvd[i]);
	}
	for(i = 0; i < NUM; i++){
		printf("O cliente %s tem direito a %d locacoes gratis.\n", clientes[i], dvd[i]/10);
	}
	
	
}