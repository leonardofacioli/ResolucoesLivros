#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int codigocliente = 1, quantidadeproduto[10], codigoproduto[10], codigocompra, quantidadecompra, i;

	
	for(i = 0; i < 10; i++){
		printf("Informe o codigo do produto:");
		scanf("%d", &codigoproduto[i]);
		printf("Informe a quantidade desse produto:");
		scanf("%d", &quantidadeproduto[i]);
	}
	
	while(codigocliente != 0){
		printf("As opcoes de produto sao:\n");
		for(i = 0; i < 10; i++){
			printf("%d\n", codigoproduto[i]);
		}
		printf("\nInsira o codigo do cliente(pressione 0 para sair):\n");
		scanf("%d", &codigocliente);
		
		if(codigocliente != 0){
		printf("Informe o codigo do produto que voce quer comprar:\n");
		scanf("%d", &codigocompra);
		
		i = 0;
		while(codigocompra != codigoproduto[i]){
			if(i > 9){
				printf("Produto nao encontrado\n");
				break;
			}
			i++;
		}
		
		if(i>9){
			break;
		}
		printf("Informe a quantidade desse produto:\n");
		scanf("%d", &quantidadecompra);
		
		if(quantidadeproduto[i] >= quantidadecompra ){
			printf("Aqui esta seu pedido %d de %d", quantidadecompra, codigocompra);
			quantidadeproduto[i] = quantidadeproduto[i] - quantidadecompra;
		}
		else{
			printf("Nao temos a quantidade desse produto:\n");
		}
		
		}
		else{
			printf("Voce saiu do programa.\n\n\n");
		}
		
		
	
	}
	for(i = 0; i < 10; i++){
		printf("O produto %d tem no estoque %d.\n", codigoproduto[i], quantidadeproduto[i]);
	}
	
	
}