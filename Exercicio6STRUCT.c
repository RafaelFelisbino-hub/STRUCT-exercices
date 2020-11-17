/*Faca um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionario de uma empresa, compostos de: 
Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de ate 30 caracteres) e Salario. 
Os dados devem ser digitados pelo usuario, armazenados na estrutura e exibidos na tela.*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct 
{
	int dia, mes, ano;

}TipoDataNascimento;

typedef struct 
{
	char nome[20], sexo[3], ccpf[12], cargo[30];
	int idade, codigoSetor;
	float salario;

	TipoDataNascimento dataNascimento;

}TipoFuncionario;

char cpf[12];
int icpf[12];
int i, somador = 0, digito1, result1, result2, digito2, valor;

bool validadorDeCPF(char pCpf[12]);

int main() 
{
	TipoFuncionario funcionario;

	printf("Nome do funcionario:  ");
	scanf_s("%s", &funcionario.nome, 20);

	printf("Sexo do funcionario (M) ou (F):  ");
	scanf_s("%s", &funcionario.sexo, 3);

	printf("CPF do funcionario:  ");
	scanf_s("%s", &funcionario.ccpf, 12);

	while (!validadorDeCPF(funcionario.ccpf))
	{
		printf("CPF Invalido:  ");
		scanf_s("%s", &funcionario.ccpf, 12);
	}

	printf("Cargo do funcionario:  ");
	scanf_s("%s", &funcionario.cargo, 30);

	printf("Idade do funcionario:  ");
	scanf_s("%i", &funcionario.idade);

	printf("Data de nascimento do funcionario (dd/mm/aaaa):  ");
	scanf_s("%i/%i/%i", &funcionario.dataNascimento.dia,&funcionario.dataNascimento.mes,&funcionario.dataNascimento.ano);

	printf("Codigo do setor do funcionario (0-99):  ");
	scanf_s("%i", &funcionario.codigoSetor);

	printf("Salario do funcionario:  ");
	scanf_s("%f", &funcionario.salario);

	printf("Nome: %s do sexo %s de CPF %s\n", funcionario.nome, funcionario.sexo, funcionario.ccpf);
	printf("Cargo: %s no setor %i\n", funcionario.cargo, funcionario.codigoSetor);
	printf("Idade %i nascido no dia %i/%i/%i com salario de %.4f\n", funcionario.idade, funcionario.dataNascimento.dia,funcionario.dataNascimento.mes,funcionario.dataNascimento.ano, funcionario.salario);

	system("pause");
}

bool validadorDeCPF(char pCpf[12])
{

	for (i = 0; i < 11; i++)
		icpf[i] = pCpf[i] - 48;

	for (i = 0; i < 9; i++)
		somador += icpf[i] * (10 - i);

	result1 = somador % 11;

	if ((result1 == 0) || (result1 == 1))
		digito1 = 0;

	else
		digito1 = 11 - result1;

	somador = 0;

	for (i = 0; i < 10; i++)
		somador += icpf[i] * (11 - i);

	valor = (somador / 11) * 11;
	result2 = somador - valor;

	if ((result2 == 0) || (result2 == 1))
		digito2 = 0;

	else
		digito2 = 11 - result2;

	if ((digito1 != icpf[9]) && (digito2 != icpf[10]))
		return false;
	else
		return true;
}