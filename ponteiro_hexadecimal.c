#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = 0x5DC;

    printf("p = Hexadecimal: %p Decimal: %d \n", p,p);

    p++;
    printf("p = Hexadecimal: %p Decimal: %d \n", p,p);

    p = p + 15;
    printf("p = Hexadecimal: %p Decimal: %d \n", p,p);

    p = p - 2;
    printf("p = Hexadecimal: %p Decimal: %d \n", p,p);

    system("pause");
    return 0;
}