#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20];
    char *result;
    FILE *arq;
    arq = fopen("ArqGrav.txt", "r");

    if (arq == NULL) {
        printf("Problema na criacao do arquivo");
        system("pause");
        exit(1);
    }
    
    result = fgets(str, 13, arq);

    if(result == NULL) {
        printf("Erro na leitura\n");
    }
    else {
        puts(str);
    }
    fclose(arq);
    system("pause");
    return 0;
}