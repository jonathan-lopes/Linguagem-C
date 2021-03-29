#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arq;
    arq = fopen("ArqGravacao.txt", "rb");

    if (arq == NULL) {
        printf("Problema na criacao do arquivo");
        system("pause");
        exit(1);
    }

    char str1[20], str2[20];
    float x;
    int v1[5], v2[5];

    //le a string toda no arquivo
    fread(str1, sizeof(char), 12, arq);
    str1[12] = '\0';
    puts(str1);
    //le apenas os 5 primieros caracteres da string
    fread(str2, sizeof(char), 5, arq);
    str2[5] = '\0';
    puts(str2);
    //le o valor de x no arquivo
    fread(&x, sizeof(float), 1, arq);
    printf("%f\n", x);
    //le todo o vetor no arquivo (5 posicoes)
    fread(v1, sizeof(int), 5, arq);
    for (int i = 0; i < 5; i++) {
        printf("v1[%d] = %d\n", i, v1[i]);
    }
    //le apenas as 2 primieras posicoes do vetor
    fread(v2, sizeof(int), 2, arq);
    for (int i = 0; i < 2; i++) {
        printf("v2[%d] = %d\n", i, v2[i]);
    }

    fclose(arq);
    system("pause");
    return 0;
}