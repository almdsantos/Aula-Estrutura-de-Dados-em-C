//Calculo de 2 vetores

#include <stdio.h>
#include <conio.h>

int soma(int a, int b)  // Declara��o de uma fun��o pra receber um parametro
{
	return a + b; // Aqui informa que a var soma retornara o calculo de a + b
}

//OBS - as variaveis acima declaradas s�o locais, serve somente para cria��o da fun��o

main()
{
	int c = 0, d = 0, result = 0; // Declara��o de Vari�veis
	printf("Vamos somar 2 valores! \n");
	printf("Digite o primeiro valor da soma:  "); //Entrada de Dados - Primeiro Valor
	scanf("%d", &a); //Grava��o na variavel
	printf("Digite o segundo valor da soma:  "); //Entrada de Dados - Segundo Valor
	scanf("%d", &b); //Grava��o na variavel
	result = soma(c,d); // Retorna a fun��o criada na linha 8, somando os valores entre parenteses
	printf("O resultado a soma e: %d", result); // Mostra o resultado
	
	getch(); // Trava a tela para visualiza��o
	
}

//OBS - as variaveis declaradas dentro do "main" s�o locais, serve para solicitar os dados.
