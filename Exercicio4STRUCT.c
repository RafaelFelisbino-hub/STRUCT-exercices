/*Crie uma estrutura representando os alunos de um determinado curso. 
A estrutura deveconter a matrıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.(a)  
Permita ao usuario entrar com os dados de 5 alunos.(b)  Encontre o aluno com maior nota da primeira prova.(c)  
Encontre o aluno com maior media geral.(d)  Encontre o aluno com menor media geral(e)  
Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 paraaprovacao.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	float notaProva1, notaProva2, notaProva3;
	char nome[20];
	int matricula;

}TipoAlunos;

int main() 
{
	TipoAlunos alunos[5];
	float  somaNotas[5] = { 0,0,0,0,0 }, notaGeralMaior = 0, notaGeralMenor = 999, notaMaiorProva1 = 0;
	char nomeMaior[20], nomeMenor[20], nomeMaiorNotaProva1[20];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Digite o nome do aluno:  ");
		scanf_s("%s", &alunos[i].nome, 20);

		printf("Digite a nota da primeira prova:  ");
		scanf_s("%f", &alunos[i].notaProva1);

		printf("Digite a nota da segunda prova:  ");
		scanf_s("%f", &alunos[i].notaProva2);

		printf("Digite a nota da terceira prova:  ");
		scanf_s("%f", &alunos[i].notaProva3);

		if (alunos[i].notaProva1 > notaMaiorProva1) 
		{
			notaMaiorProva1 = alunos[i].notaProva1;
			strcpy_s(nomeMaiorNotaProva1,20, alunos[i].nome);
		}

		somaNotas[i] += alunos[i].notaProva1 + alunos[i].notaProva2 + alunos[i].notaProva3;

		if (somaNotas[i] > notaGeralMaior)
		{
			notaGeralMaior = somaNotas[i];
			strcpy_s(nomeMaior,20, alunos[i].nome);
		}
		if (somaNotas[i] < notaGeralMenor) 
		{
			notaGeralMenor = somaNotas[i];
			strcpy_s(nomeMenor,20, alunos[i].nome);
		}

		system("cls");
	}

	printf("Aluno com maior nota da primeira prova %s = %.2f\n", nomeMaiorNotaProva1, notaMaiorProva1);
	printf("Aluno com maior media geral %s = %.2f\n", nomeMaior, notaGeralMaior);
	printf("Aluno com menor media geral %s = %.2f\n", nomeMenor, notaGeralMenor);

	system("pause");
}