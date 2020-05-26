#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
	/*O primeiro endereço de um vetor é o endereço do primeiro elemento deste vetor */
	int vet[TAM] = { 32,56,78,32,44 };

	// imprime os elementos do vetor de forma conversional
	printf("IMPRIMINDO O VETOR DIRETAMNETE \n");
	for (int i = 0; i < TAM ; i++)
	{
		printf("elemento do vetor sem ponteiros [%d] = %d \n", i, vet[i]);
	}
	
	printf("\n");

	// imprime os elementos do vetor usando a notção de ponteiros

	printf("\nIMPRIMINDO O VETOR COM NOTACAO *(vet + i) \n");
	for (int i = 0; i < TAM; i++)
	{
		printf("elemento do vetor com ponteiros [%d] = %d \n", i, *(vet + i));
	}

	printf("\n");

	system("pause");
	return 0;
}