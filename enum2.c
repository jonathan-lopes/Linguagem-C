#include <stdio.h>
#include <stdlib.h>

enum semana {Domingo = 1, Segunda, Terca, Quarta = 7, Quinta, Sexta, Sabado};

int main(int argc, char const *argv[]) {
    printf("Domingo = %d \n", Domingo);
    printf("Segunda = %d \n", Segunda);
    printf("Terca = %d \n", Terca);
    printf("Quarta = %d \n", Quarta);
    printf("Quinta = %d \n", Quinta);
    printf("Sexta = %d \n", Sexta);
    printf("Sabado = %d \n",Sabado);

    system("pause");
    return 0;
}
