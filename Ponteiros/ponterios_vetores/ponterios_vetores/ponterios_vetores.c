#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = { 2,16,15,10,3 };
    int* pont;

    pont = x;

    printf("O valor de x[0]: %p\n", x);
    printf("O valor de x[0]: %p\n", pont);

    system("pause");
    return 0;
}

