// Manipulação de dados com ponteiros

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *x, *y, c = 5, d = 3;
	 
	x = &c;			// x aponta para c
	y = &d;			// y aponta para d
	*y = 8; 		// alterando o valor existente na variavel d
	*x = *y;  		//  copia o valor dde d (apontado por y) para c (opontado por x)
	*x = 1;			// alterando o valor de c
	y = x;			// y aponta para o mesmo lugar que x, ou seja, para c
	*y = 0; 		// alterando o valor de c
	
printf("O valor de da variavel c: %d \n\nValor da variavel d: %d\n\n", c, d);	
	
	system("pause");
	return 0;
}
