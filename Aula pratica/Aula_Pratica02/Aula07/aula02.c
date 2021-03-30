#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	ptr = (int*)calloc(4, sizeof(int));

	if (ptr == NULL)
	{
		printf("Erro: Memoria insuficiente");
		system("pause");
		exit(1);
	}

	printf("Digite os dados para o vetor de 4 posicoes\n\n");
	for (int i = 0; i < 4; i++)
	{
		printf("Digite ptr[%d] :", i);
		scanf_s("%d", &*(ptr+i));
	}
	
	printf("\nDados do vetor\n\n");
	for (int i = 0; i < 4; i++) 
	{
		printf("Posicao ptr[%d] = %d\n", i, *(ptr + i));
	}

	printf("\n");
	free(ptr);
	system("pause");
	return 0;
}