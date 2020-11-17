/*Escreva um trecho de c ́odigo para fazer a criacao dos novos tipos de dados conforme solicitado abaixo:Horario: 
composto de hora, minutos e segundos.Data: composto de dia, mes e ano. Compromisso: composto de uma data, horario e texto que descreve o compromisso*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	float hora, minutos, segundos;

}TipoHorario;

typedef struct 
{
	float dia, mes, ano;

}TipoData;

typedef struct 
{
	char consulta[100];

}TipoCompromisso;

int main()
{
	TipoHorario horario;
	TipoCompromisso compromisso1[100];
	TipoData data;

	printf("Digite o horario: (Hora, minutos, segundos):  ");
	scanf_s("%f %f %f", &horario.hora, &horario.minutos, &horario.segundos);

	printf("Digite a data: (dd/mm/aaaa):  ");
	scanf_s("%f/%f/%f", &data.dia, &data.mes, &data.ano);
	getchar();
	printf("Digite a descricao do compromisso:  ");
	fgets(compromisso1->consulta, 100, stdin);
	
	printf("\n\n");

	printf("A data do compromisso e: %.0f/%.0f/%.0f\n", data.dia, data.mes, data.ano);
	printf("O horario do compromisso e: %.0f Horas %.0f Minutos %.0f Segundos\n", horario.hora, horario.minutos, horario.segundos);
	printf("O compromisso e: %s\n", compromisso1->consulta);

	system("pause");

}