/*Implemente  um  programa  que  leia  o  nome,  a  idade  e  o  endereco  de  uma  pessoa  earmazene os dados em uma estrutura*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nome[30], endereco[30];
	int idade;

}TipoDados;

int main() 
{
	TipoDados dados;

	printf("Digite o nome:  ");
	fgets(dados.nome, 30,stdin);

	printf("Digite a idade:  ");
	scanf_s("%i", &dados.idade);

	getchar();
	printf("Digite o endereco:  ");
	fgets(dados.endereco, 30, stdin);

	printf("Nome %s, Idade %i, Endereco %s", dados.nome, dados.idade, dados.endereco);

	system("pause");
}