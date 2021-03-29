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

    for (int i = 0; i < 50; i++) {
        printf("%4d", p[i]);
    }

    // libera Memoria alocada
    free(p);
    p = NULL; // Dangling Pointers
    system("pause");
    return 0;
}