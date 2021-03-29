#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    arq = fopen("ArqGrav2.bin", "wb");

    if (arq == NULL) {
        printf("Problema na criacao do arquivo");
        system("pause");
        exit(1);
    }

    int total_gravado, v[5] = {1, 2, 3, 4, 5};
    
    // grava todo o array no arquivo (5 posicoes)
    total_gravado = fwrite(v, sizeof(int), 5, arq);

    if(total_gravado != 5) {
        printf("Erro na escrita do arquivo\n");
        system("pause");
        exit(1);
    }    
    fclose(arq);
    system("pause");
    return 0;
}