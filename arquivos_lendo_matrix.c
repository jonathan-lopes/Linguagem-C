#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * arq;
    arq = fopen("matrix.txt", "w");
    if(arq == NULL) {
        printf("Erro na abetura do arquivo\n");
        system("pause");
        exit(1);
    }

    int v, soma = 0;
    while (!feof(arq))
    {
        fscanf(arq, "%d", &v);   
        soma += v;
    }
    printf("Soma = %d\n", soma);
    fclose(arq);
    system("pause");
    return 0;
}