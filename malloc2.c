#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p;

    p = (int *) malloc(5 * sizeof(int));

    if(p == NULL) {
        printf("Erro: Memoria insuficiente\n");
        system("pause");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor da poisicao %d: ", i);
        scanf("%d", &p[i]); // p[i] ou *(p+i)
    }
    
    system("pause");
    return 0;
}
