#include <stdio.h>
#include <stdlib.h>

int main() {
    int * p;
    p = (int *) malloc(5 * sizeof(int)); 

    for (int i = 0; i < 5; i++) {
        p[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%4d", p[i]);
    }

    p = (int *) realloc(p, 0); // Libera a memoria alocada
    
    system("pause");
    return 0;
}