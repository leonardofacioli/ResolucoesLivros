#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j, ldp[10], log[15];
	
	printf("Preencha o codigo dos alunos que fazem logica:\n\n\n");
	for(i = 0; i < 15; i++){
		printf("Escreva o codigo do aluno %d:", i + 1);
		scanf("%d", &log[i]);
	}
	printf("Preencha o codigo dos alunos que fazem linguagem de programacao:\n\n\n");
	for(i = 0; i < 10; i++){
		printf("Escreva o codigo do aluno %d:", i + 1);
		scanf("%d", &ldp[i]);
	}
	
	printf("O codigo dos alunos que fazem ambas displinas sao:");
	for(j = 0; j < 10; j++){
		for(i = 0; i < 15; i++){
			if(ldp[j] == log[i]){
				printf("O aluno: %d\n", ldp[j]);
			}
		}
	}
	
	
	
}