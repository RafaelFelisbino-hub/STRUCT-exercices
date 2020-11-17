/*Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuarioa informacao de 5 alunos, armazene em vetor 
dessa estrutura e imprima os dados na tela.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nome[30], curso[30];
	int matricula;

}TipoAlunos;

int main() 
{
	TipoAlunos alunos[5];
	int i;

	for (i = 0; i < 5; i++) 
	{
		printf("Digite o nome ");
		fgets(alunos[i].nome, 30, stdin);

		printf("Digite a matricula:  ");
		scanf_s("%i", &alunos[i].matricula);

		printf("Digite o curso:  ");
		fgets(alunos[i].curso, 30, stdin);

		system("cls");
	}

	for (i = 0; i < 5; i++)
		printf("Aluno %s de matricula %i do curso %s\n", alunos[i].nome, alunos[i].matricula, alunos[i].curso);

	system("pause");
}