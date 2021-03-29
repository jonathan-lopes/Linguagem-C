#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x, y;
};

int main() {
    printf("Tamanho char: %d byte\n", sizeof(char));
    printf("Tamanho int: %d bytes\n", sizeof(int));
    printf("Tamanho float: %d bytes\n", sizeof(float));
    printf("Tamanho double: %d bytes\n", sizeof(double));
    printf("Tamanho struct ponto %d bytes\n", sizeof(struct ponto));
    int x;
    double y;

    printf("Tamanho da variavel x: %d bytes\n", sizeof x);
    printf("Tamanho da variavel y: %d bytes\n", sizeof y);

    system("pause");
    return 0;
}