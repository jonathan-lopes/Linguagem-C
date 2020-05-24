#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	int *px = &x; 		//*px recebe o endereço de x
	
	x = 14;  			// x recebe 14
	y = *px;			// y recebe o dado de x pelo endereço de *px
	px = &y;			// px recebe o endereço de y
	x = 16; 			// Alterando o valor de x
	
	printf("x = %d \n", x);
	printf("Endereco de x...... = %p \n", &x);  	// Endereço de y
	
	printf("y = %d \n", y);
	printf("Endereco de y -> px = %p \n", px); 		// Endereço de y em px
	printf("Endereco de y......= %p \n\n", &y);		// Endereço de y
	
	system("pause");
	return 0;
}
