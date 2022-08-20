#include <stdio.h>
#include <stdlib.h>

main()
{
    int a, b;
    float media;
    printf("Entre com dois numeros inteiros a e b:");
    scanf("%d %d", &a, &b);
    media = (a + b)/2.0;
    printf("A média da operação de %d e %d é %.2f\n", a, b, media);
}
