#include <stdio.h>
#include <stdlib.h>

main()
{
    int a, b;
    float media;
    printf("Entre com dois numeros inteiros a e b:");
    scanf("%d %d", &a, &b);
    media = (a + b)/2.0;
    printf("A m�dia da opera��o de %d e %d � %.2f\n", a, b, media);
}
