#include <stdio.h>
#include <conio.h>

main()
{
float nota;
printf("Digite a nota: ");
scanf("%f", &nota);
if((nota >= 0.0) && (nota <= 10.0))
{
	printf("Nota válida \n");
	if(nota >= 7.0)
	{
		printf("Passou Direto \n");
	}
	else {
		printf("Não passou direto \n");
	}
}
else 
{
	printf("Nota invalida");
}
getch();
}

