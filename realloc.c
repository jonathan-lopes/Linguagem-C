#include <stdio.h>
#include <stdlib.h>

int main() {
    int * ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", ptr[i]);

    printf("\n");

    //Diminui o tamanho do vetor
    printf("Vetor diminuido \n");
    ptr = realloc(ptr, 3 * sizeof(int));
    for (int i = 0; i < 3; i++)
        printf("%d\n", ptr[i]);
    printf("\n");

    printf("Vetor aumentado\n");
    //Aumneta o tamanho do vetor
    ptr = realloc(ptr, 10 * sizeof(int));
    
    for (int i = 0; i < 10; i++)
        printf("%d\n", ptr[i]);
    printf("\n");
    
    system("pause");
    return 0;
}