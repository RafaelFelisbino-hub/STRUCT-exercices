/*Utilizando uma estrutura, faca um programa que permita a entrada de nome, endereco e telefone de 5 pessoas e os imprima em ordem alfabetica*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[20], endereco[20];
	int telefone;

}TipoLista;

int main() 
{
	TipoLista lista[5];
	int i,j;
	char aux[20];

	for (i = 0; i < 5; i++) 
	{
		printf("Digite o nome:  ");
		scanf_s("%[^\n]s", &lista[i].nome, 20);

		getchar();
		printf("Digite o endereco:  ");
		scanf_s("%[^\n]s", &lista[i].endereco, 20);

		printf("Digite o telefone:  ");
		scanf_s("%i", &lista[i].telefone);

		getchar();
	}

	for(i = 1; i < 5; i++)
		for (j = 1; j < 5; j++) 
		{
			if (strcmp(lista[j - 1].nome, lista[j].nome) > 0) 
			{
				strcpy_s(aux, 20, lista[j - 1].nome);
				strcpy_s(lista[j - 1].nome,20, lista[j].nome);
				strcpy_s(lista[j].nome, 20, aux);
			}
		}
	
	for (i = 0; i < 5; i++) 
		printf("Nome: %s. Endereco: %s. Telefone: %i\n", lista[i].nome, lista[i].endereco, lista[i].telefone);

	system("pause");
}