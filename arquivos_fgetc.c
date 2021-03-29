#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt", "r");

    if (arq == NULL) {
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    for(int i = 0; i < 5; i++) {
        c = fgetc(arq);
        printf("%c", c);
    }
    printf("\n");
    
    fclose(arq);
    system("pause");
    return 0;
}