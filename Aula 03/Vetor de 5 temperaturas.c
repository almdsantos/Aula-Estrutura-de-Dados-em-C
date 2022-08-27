//Vetor de 5 temperaturas

#include <stdio.h>
#include <stdlib.h>

main () {
	
	//Declaração de Variáveis
	float temp[5]; // <-- Sabemos que é vetor por guardar a posição
	float soma, media, maior;
	int i; // Variavel de controle de laço
	soma = 0;
	
	for (i=0;i<5;i++) // Entrada de valores
	{
		printf("Digite uma temperatura: ");
		scanf("%f", &temp[i]); // <-- ("scanf" - Entrada de dados) -- ("%f" - float) -- ("temp[i]" - Armazena o valor na posição correspondente do laço)
	}
	
	maior = temp[0]; // <-- Aqui ele nomeia o primeiro vetor como maior
	
	
	for (i=0; i<5;i++) // <-- Cria um contador de loop
	{
		soma = soma + temp[i]; // <-- Calcula todas as temperaturas
		if (temp[i]>maior) // <-- Aqui ele percorre todos os valores para ver se o anterior é maior que o proximo
			maior = temp[i]; // <-- Caso seja maior ele altera o valor que foi criado na linha 20
	}
	
	media = soma / 5; //<-- Calcula a média dos valores
	printf("\n A media das temperaturas e igual a %.2f\n ", media);
	printf("\n A maior temperatura e igual a %.2f\n ", maior);
	
 	getch();
	
}
