#include <stdio.h>
#include <stdlib.h>

float soma(float *, float *);

int main() {
    float x, y;

    printf("Digite um numero ");
    scanf("%f", &x);
    printf("Digite outro numero ");
    scanf("%f", &y);
    
    printf("\nResultado..: %2.f \n", soma(&x, &y));

    system("pause");
    return 0;
}

float soma(float * n, float * n1) {
    float result = *n + *n1;
    return result;
}
