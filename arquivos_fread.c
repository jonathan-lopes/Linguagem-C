#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    arq = fopen("ArqGrav2.txt", "rb");

    if (arq == NULL) {
        printf("Problema na criacao do arquivo");
        system("pause");
        exit(1);
    }

    int total_lido, v[5];
    
    // le todo o array no arquivo (5 posicoes)
    total_lido = fread(v, sizeof(int), 5, arq);

    if(total_lido != 5) {
        printf("Erro na leitura do arquivo\n");
        system("pause");
        exit(1);
    }
    else {
        for (int i = 0; i < 5; i++)
        {
            printf("v[%d] = %d \n", i, v[i]);
        }
        
    }
        
    fclose(arq);
    system("pause");
    return 0;
}