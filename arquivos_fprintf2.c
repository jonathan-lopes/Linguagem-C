#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * arq;
    char texto[20],nome[20];
    int i, result;
    float a;

    arq = fopen("textoFormatado.txt", "r");
    if(arq == NULL) {
        printf("Erro na abetura do arquivo\n");
        system("pause");
        exit(1);
    }

    fscanf(arq, "%s%s", texto, nome);
    printf("%s %s\n", texto, nome);
    fscanf(arq, "%s %d",texto, &i);
    printf("%s %d\n", texto, i);
    fscanf(arq, "%s %f",texto, &a);
    printf("%s %f\n", texto, a);

    if (result < 0)
        printf("Erro na escrita\n");

    fclose(arq);
    system("pause");
    return 0;
}