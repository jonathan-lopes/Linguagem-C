#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Alocacao com malloc
    int *p;
    p = (int *) malloc(50*sizeof(int));

    if(p == NULL) {
        printf("Erro: Memoria insuficiente");
        system("pause");
        exit(1);
    }

    // Alocacao com calloc
    int *p1;
    p1 = (int *) calloc(50, sizeof(int));

    if(p1 == NULL) {
        printf("Erro: Memoria insuficiente");
        system("pause");
        exit(1);
    }    
    system("pause");
    return 0;
}
