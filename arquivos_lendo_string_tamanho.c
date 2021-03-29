#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arq;
    arq = fopen("ArqGravacao2.txt", "rb");

    if (arq == NULL) {
        printf("Problema na criacao do arquivo");
        system("pause");
        exit(1);
    }
    char str[20];
    int t;

    fread(&t, sizeof(int), 1, arq);
    fread(str, sizeof(char), t, arq);
    str[t] = '\0';
    puts(str);
    printf("\nTamanho da string: %d\n", t);
    fclose(arq);
    system("pause");
    return 0;
}