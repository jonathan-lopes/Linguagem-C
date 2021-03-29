#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &*(p+i));
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }

    system("pause");
    return 0;
}