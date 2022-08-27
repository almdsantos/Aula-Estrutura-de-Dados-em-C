//Conversor de Temperatura

#include <stdio.h>
#include <conio.h>

float converte(float c)  // <-- Declaração de uma função pra receber um parametro
{
	float f; // <-- variavel "f" que sera usado para receber o valor convertido
	f = 1.8*c + 32; // <-- Esse trecho calcula o valor recebido em "c" e converter para variavel "f"
	return f; // <-- Retornara a nova temperatura
}

//OBS - as variaveis acima declaradas são locais, serve somente para criação da função

main ()
{
	float t1; // <-- Variavel que recebera o valor do usuario
	float t2; // <-- Variavel que retornara a nova temperatura
	printf("Digite a temperatura em Celsius: "); // <-- Solicita a entrada do usuário
	scanf("%f", &t1); // <-- Recebe o valor na variavel t1 da linha 17
	t2 = converte(t1); // Retorna a função criada na linha 6, convertendo o valor de Celsius para Fahrenheit
	printf("A temperatura em Fahrenheit e %.2f\n", t2); // Mostra a saida
	
	getch(); //Pausa a tela
}
