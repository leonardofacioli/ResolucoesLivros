#include <stdio.h>

#define NUM 3

int main(){
	
	float nota1[NUM], nota2[NUM], mediaaluno[NUM], mediaclasse = 0, peraprov = 0, perreprov = 0, perexam = 0;
	char nome[NUM][50];
	int i;
	
	for(i = 0; i < NUM; i++){
		printf("Informe o nome do aluno: ");
		scanf(" %[^\n]", nome[i]);
		printf("Informe a nota de %s na primeira prova:", nome[i]);
		scanf("%f", &nota1[i]);
		printf("Informe a nota de %s na segunda prova:", nome[i]);
		scanf("%f", &nota2[i]);
		
		mediaaluno[i] = (nota1[i] + nota2[i]) / 2;
		mediaclasse += mediaaluno[i];
	}
	
	for(i = 0; i < NUM; i++){
		if(mediaaluno[i] < 4){
			printf("O aluno %s tirou %.2f na primeira prova, %.2f na segunda prova tem media %.2f e esta reprovado.\n", nome[i], nota1[i], nota2[i], mediaaluno[i]);
			perreprov++;
		}
		else if(mediaaluno[i] < 7){
			printf("O aluno %s tirou %.2f na primeira prova, %.2f na segunda prova tem media %.2f e esta de exame.\n", nome[i], nota1[i], nota2[i], mediaaluno[i]);
			perexam++;
		}
		else{
			printf("O aluno %s tirou %.2f na primeira prova, %.2f na segunda prova tem media %.2f e esta aprovado.\n", nome[i], nota1[i], nota2[i], mediaaluno[i]);
			peraprov++;
		}
	}
	printf("A media da classe: %.2f\n", mediaclasse/NUM);
	printf("O percentual de alunos aprovados: %.2f porcento\n", (peraprov/NUM)*100 );
	printf("O percentual de alunos reprovados: %.2f porcento\n", (perreprov/NUM)*100 );
	printf("O percentual de alunos exame: %.2f porcento\n", (perexam/NUM)*100 );
}