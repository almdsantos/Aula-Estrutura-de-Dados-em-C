#include <stdio.h>
#include <stdlib.h>

main()
{
int hora;
float salario_bruto, salario_liquido;
printf("\n Digite as horas trabalhadas:");
scanf("%d",&hora);
salario_bruto = hora * 19.50;
if(salario_bruto > 1500.00)
	salario_liquido = 0.90*salario_bruto;
else
	salario_liquido = salario_bruto;
printf("\n Seu salario liquido e: R$ %.2f", salario_liquido);
}
