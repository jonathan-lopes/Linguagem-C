#include <stdio.h>
#include <stdlib.h>

int main() {
    int * p;
    p = (int *) malloc(50 * sizeof(int)); 

    if (p == NULL) {
        printf("Erro: Memoria insuficiente \n");
        system("pause");
        exit(1);
    }

    for (int i = 0; i < 50; i++) {
        p[i] = i + 1;
    }

    // libera Memoria alocada
    free(p);

    //tenta imprimir o vetor
    //cuja memoria ja foi liberada
    for (int i = 0; i < 50; i++) {
        printf("%d\n", p[i]);
    }
    
    system("pause");
    return 0;
}