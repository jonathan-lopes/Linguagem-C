#include <stdio.h>
#include <stdlib.h>

union tipo {
    short int x; // 16 bits ou 2 bytes
    unsigned char c; // 8 bits ou 1 byte
};

int main() {
    union tipo t;

    t.x = 1545;
    printf("x = %d \n", t.x);
    printf("c = %d \n", t.c);
    t.c = 69;
    printf("x = %d \n", t.x);
    printf("c = %d \n", t.c);

    system("pause");    
    return 0;
}