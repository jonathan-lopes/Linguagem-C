#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração de um veroe com 3 posições
    int vet[3];
    int *v;         // Declaração de um ponteiro

    v = vet;        // variavel p recebe o endereço do vetor

    vet[0] = 294;   // Vetor na posição 0 recebe 294
    vet[1] = 954;   // Vetor na posição 1 recebe 954
    vet[2] = 587;   // Vetor na posição 2 recebe 587

    printf("IMPRESSAO ACESSANDO O VETOR\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Vetor[%d] = %d\n\n ", i, vet[i]);
    }

    printf("IMPRESSAO ACESSANDO O PONTEIRO\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Vetor[%d] = %d\n\n ", i, *(v + i));
    }

    system("pause");
    return 0;
}