#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x = 4, y = 7;
    int *px, *py;
    
    printf("Endereco (&x) = %p --- dado (x) = %d \n", &x, x);
    printf("Endereco (&y) = %p --- dado (y) = %d \n\n", &y, y);

	px = &x;
	py = &y;

	printf("Endereco (px) = %p --- dado (*px) = %d \n", &x, x);
	printf("Endereco (py) = %p --- dado (*py) = %d \n\n", &y, y);

    system("pause");
    return 0;
}
