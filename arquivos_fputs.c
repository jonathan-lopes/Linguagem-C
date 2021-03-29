#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20] = "hello world!!\n";
    int result = 0;
    FILE *arq;
    arq = fopen("ArqGrav.txt", "w");

    if (arq == NULL) {
        printf("Problema na criacao do arquivo");
        system("pause");
        exit(1);
    }
    
    result = fputs(str, arq);

    if(result == EOF) {
        printf("Problema na gravacao\n");
    }
    fclose(arq);
    system("pause");
    return 0;
}