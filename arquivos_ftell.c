#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tam;
    FILE *arq;
    arq = fopen("arquivo.bin", "rb");

    if (arq == NULL) {
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    fseek(arq, 0, SEEK_END);
    tam = ftell(arq);
    fclose(arq);

    printf("Tamanho do arquivo em bytes: %d", tam);
    system("pause");
    return 0;
}