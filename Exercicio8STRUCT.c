/*Faca um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), armazenando em um vetor. 
Uma vez lidos os dados, divida estes dados em 2 novos vetores,o vetor dos aprovados e o vetor dos reprovados, 
considerando a media mınima para aaprovacao como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char nome[20];
	int matricula;
	float mediaFinal;


}TipoAlunos;

int main() 
{
	TipoAlunos alunos[10], alunosAprovados[10], alunosReprovados[10];
	int i;

	for (i = 0; i < 3; i++) 
	{
		printf("Digite o nome do aluno:  ");
		scanf_s("%[^\n]s", &alunos[i].nome, 20);

		printf("Digite a matricula do aluno:  ");
		scanf_s("%i", &alunos[i].matricula);

		printf("Digite a media final do aluno:  ");
		scanf_s("%f", &alunos[i].mediaFinal);

		getchar();
	}

	for (i = 0; i < 3; i++) 
	{
		if (alunos[i].mediaFinal > 5)
		{
			alunosAprovados[i] = alunos[i];
		}
		if (alunos[i].mediaFinal <= 5)
		{
			alunosReprovados[i] = alunos[i];
		}
	}

	for (i = 0; i < 3; i++) 
	{
		if (alunosAprovados[i].mediaFinal > 5)
		printf("Alunos aprovados; Nome: %s, Matricula: %i. Media final: %.2f\n", alunosAprovados[i].nome, alunosAprovados[i].matricula, alunosAprovados[i].mediaFinal);
	}
	for (i = 0; i < 3; i++) 
	{
		if (alunosReprovados[i].mediaFinal <= 5 && alunosReprovados[i].mediaFinal > 0)
		printf("Alunos reprovados; Nome: %s, Matricula: %i. Media final: %.2f\n", alunosReprovados[i].nome, alunosReprovados[i].matricula, alunosReprovados[i].mediaFinal);
	}
	system("pause");
}