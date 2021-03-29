#include <stdio.h>
#include <stdlib.h>

int main() {
    int * p;
    p = (int *) realloc(NULL, 5 * sizeof(int)); // ponteiro null, alocara igual a funcao malloc

    for (int i = 0; i < 5; i++) {
        p[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%4d", p[i]);
    }
    
    system("pause");
    return 0;
}