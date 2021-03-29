#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * arq;
    char nome[20] = "Ricardo";
    int i = 30, result;
    float a = 1.74;

    arq = fopen("textoFormatado.txt", "w");
    if(arq == NULL) {
        printf("Erro na abetura do arquivo\n");
        system("pause");
        exit(1);
    }

    result = fprintf(arq, "Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, i, a);

    if (result < 0)
        printf("Erro na escrita\n");

    fclose(arq);
    system("pause");
    return 0;
}