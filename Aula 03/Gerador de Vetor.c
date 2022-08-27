//Gerador de Vetor

#include <stdio.h> // <-- Biblioteca
#include <stdlib.h> // <-- Biblioteca
#define TAM 10 // <-- Definição de uma constante - Expressão numérica

void preenche(int*vetor){ // <-- "void" função vazia, que realizara uma ação
int i; // <-- Percorrer o contador
	printf("\nGerando um vetor com %d inteiros:\n", TAM); // <-- Solicita que o usuário inclua os valores
	for(i=0; i<TAM;i++) // <-- Realiza o looping, enquanto o valor for menor que o "TAM" ele solicitara os valores
		scanf("%d",&vetor[i]); // <-- Recebe os valores para inclusão no vetor
	getchar(); // <-- Serve para ver o que ocorreu
}

void mostra(int*vetor){ // <-- "void" função vazia, que realizara uma ação
int i; // <-- Percorrer o contador
	printf("\nVetor:\n "); // <-- Imprime o texto Vetor
	for(i=0; i<TAM;i++) // <-- Realiza o looping, enquanto o valor for menor que o "TAM" ele solicitara os valores
		printf("%d\t",vetor[i]); // <-- Imprime os valores inclusos no vetor ("\t" TAB)
	getchar(); // <-- Serve para ver o que ocorreu
}

main()
{
	int vetor[TAM]; // <-- Entrada do vetor
	preenche(vetor); // <-- Chama a função preenche
	mostra(vetor); // <-- Chama a função mostra
}
