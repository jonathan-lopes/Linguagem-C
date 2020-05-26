#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pont[4];			// Vetor de ponteiros do tipo inteiro

	int x[3] = { 1,22,322 };	// Primeiro vetor com três elementos
	int y[3] = { 4,51,66 };		// Segundo vetor com três elementos
	int z[3] = { 7,83,99 };		// Terceiro vetor com três elementos
	int w[3] = { 10,11,12 };	// Quarto vetor com três elementos

	pont[0] = x;		// Atribui o endereço do x para o ponteiro pont[0]
	pont[1] = y;		// Atribui o endereço do y para o ponteiro pont[1]
	pont[2] = z;		// Atribui o endereço do z para o ponteiro pont[2]
	pont[3] = w;		// Atribui o endereço do w para o ponteiro pont[3]

	printf("O valor de x[0]: %d\n", *pont[0]);
	printf("O valor de y[0]: %d\n", *pont[1]);
	printf("O valor de z[0]: %d\n", *pont[2]);
	printf("O valor de w[0]: %d\n", *pont[3]);
	

	system("pause");
	return 0;
}