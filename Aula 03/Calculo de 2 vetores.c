//Calculo de 2 vetores

#include <stdio.h>
#include <conio.h>

int soma(int a, int b)  // Declaração de uma função pra receber um parametro
{
	return a + b; // Aqui informa que a var soma retornara o calculo de a + b
}

//OBS - as variaveis acima declaradas são locais, serve somente para criação da função

main()
{
	int c = 0, d = 0, result = 0; // Declaração de Variáveis
	printf("Vamos somar 2 valores! \n");
	printf("Digite o primeiro valor da soma:  "); //Entrada de Dados - Primeiro Valor
	scanf("%d", &a); //Gravação na variavel
	printf("Digite o segundo valor da soma:  "); //Entrada de Dados - Segundo Valor
	scanf("%d", &b); //Gravação na variavel
	result = soma(c,d); // Retorna a função criada na linha 8, somando os valores entre parenteses
	printf("O resultado a soma e: %d", result); // Mostra o resultado
	
	getch(); // Trava a tela para visualização
	
}

//OBS - as variaveis declaradas dentro do "main" são locais, serve para solicitar os dados.
