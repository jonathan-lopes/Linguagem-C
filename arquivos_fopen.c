#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;

    arq = fopen("exemplo.bin", "wb");

    if(arq == NULL) {
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }

    fclose(arq);
    system("pause");
    return 0;
}