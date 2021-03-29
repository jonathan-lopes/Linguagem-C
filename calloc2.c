#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Alocacao com malloc
    int *p, *p1;
    p = (int *) malloc(5*sizeof(int));
    p1 = (int *) calloc(5, sizeof(int));

    if((p == NULL) && (p1 == NULL)) {
        printf("Erro: Memoria insuficiente");
        system("pause");
        exit(1);
    }

    printf("calloc \t\t malloc\n");
    for (int i = 0; i < 5; i++)
    {
        printf("p1[%d] = %d \t p[%d] = %d\n", i, p1[i], i, p[i]);
    }
    system("pause");
    return 0;
}
