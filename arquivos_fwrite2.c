#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arq;
    arq = fopen("ArqGravacao.txt", "wb");

    if (arq == NULL) {
        printf("Problema na criacao do arquivo");
        system("pause");
        exit(1);
    }

    char str[20] = "Hello world!";
    float x = 5;
    int v[5] = {1,2,3,4,5};

    //Grava a string toda no arquivo
    fwrite(str, sizeof(char), strlen(str), arq);
    //Grava apenas os 5 primieros caracteres da string
    fwrite(str, sizeof(char), 5, arq);
    //Grava o valor de x no arquivo
    fwrite(&x, sizeof(float), 1, arq);
    //Grava todo o vetor no arquivo (5 posicoes)
    fwrite(v, sizeof(int), 5, arq);
    //Grava apenas as 2 primieras posicoes do vetor
    fwrite(v, sizeof(int), 2, arq);
    
    fclose(arq);
    system("pause");
    return 0;
}