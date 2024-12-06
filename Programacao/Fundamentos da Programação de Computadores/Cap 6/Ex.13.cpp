#include <stdio.h>

#define NUM 8

int main(){
	
	char alunos[NUM][50];
	float notas[NUM], media = 0;
	int i;
	
	for(i = 0; i < NUM; i++){
		printf("Digite o nome do %d aluno: ", i + 1);
		scanf(" %[^\n]", alunos[i]);
		printf("Informe a nome do %s:", alunos[i]);
		scanf("%f", &notas[i]);
		
		media += notas[i];
	}
	
	for(i = 0; i < NUM; i++){
		printf("\n%s %.1f", alunos[i], notas[i]);
	}
	
	printf("\nA media da sala: %.1f", media/NUM);
}