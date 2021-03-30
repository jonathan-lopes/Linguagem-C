#include <stdio.h>
#include <stdlib.h>

int imprimeN(int, int );

int main()
{
	int comeco = 1, sfim = 21;

	printf("Funcao Recursiva\n");
	imprimeN(comeco, sfim); //Chamada da funcao recursiva

	printf("\n\n");

	printf("Funcao iterativa for\n");
	for (int i = comeco; i < sfim; i++)
	{
		printf("%d ", i);
	}

	printf("\n\n");

	printf("Funcao iterativa while\n");
	while (comeco < sfim)
	{
		printf("%d ", comeco);
		comeco++;
	}

	printf("\n\n");

	system("pause");
	return 0;
}

int imprimeN(int comeco, int sfim) //Funcao recursiva
{
	if (comeco < sfim)
	{
		printf("%d ", comeco);
		imprimeN(comeco + 1, sfim);
	}
}