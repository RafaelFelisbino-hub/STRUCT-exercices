/*Faca um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de 
ate 10 alunos. Apos ler todos os dados digitados, e depois de armazena-los em um vetor
de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias
finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0)*/#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int matricula, codigoDisciplina;
	char nome[20];
	float nota1, nota2;

}TipoAlunos;

int main()
{
	TipoAlunos alunos[10];
	int i;
	float mediaPonderada[10];

	for (i = 0; i < 3; i++) 
	{
		printf("Digite o nome do aluno:  ");
		scanf_s("%[^\n]s", &alunos[i].nome,20);

		printf("Digite a matricula do aluno:  ");
		scanf_s("%i", &alunos[i].matricula);

		printf("Digite o codigo da disciplina:  ");
		scanf_s("%i", &alunos[i].codigoDisciplina);

		printf("Digite a nota 1 do aluno:  ");
		scanf_s("%f", &alunos[i].nota1);

		printf("Digite a nota 2 do aluno:  ");
		scanf_s("%f", &alunos[i].nota2);

		mediaPonderada[i] = alunos[i].nota1 * 1 + alunos[i].nota2 * 2 / 3;

		getchar();
	}
	
	for (i = 0; i < 3; i++) 
		printf("Aluno %s de matricula %i da disciplina %i com nota %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].codigoDisciplina, mediaPonderada[i]);
	

	system("pause");

}