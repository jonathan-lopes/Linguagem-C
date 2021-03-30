#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int *v, int n) {
    for(int i = 0; i < n; i++)
        printf("%d, ", v[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int v[5] = {1,2,3,4,5};
    print(v, 5);

    memset(v, 0, 4); // Preenchimento de memoria
    print(v, 5);

    memset(v, 0, 20);
    print(v, 5);

    memset(v, 1802, 20);
    print(v, 5);
    system("pause");
    return 0;
}
