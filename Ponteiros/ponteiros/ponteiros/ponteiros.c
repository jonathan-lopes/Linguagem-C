#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, x;

    printf("Digite um numero: ");
    scanf_s("%d", &x);

    p = &x;             // y recebe o valor de x.

    printf("\nVoce digitou o numero: %d", *p);          // Imprime o dado que y aponta.
  
    system("pause");
    return 0;
}