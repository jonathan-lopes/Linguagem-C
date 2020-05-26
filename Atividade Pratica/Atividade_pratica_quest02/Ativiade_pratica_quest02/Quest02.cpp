#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ru, valor = 0, * pRu = NULL, * pValor = NULL;		// Declara��o e inicializa��o das vari�veis

	printf("Digite seu RU: ");
	scanf_s("%d", &ru);
	printf("Digite o valor 1234567: ");			// Armazenando os dados
	scanf_s("%d", &valor);

	while (valor != 1234567)				// Loop caso o us�ario digite algo diferente
	{
		printf("Entrada invalida! \n");
		printf("Digite o valor 1234567: ");
		scanf_s("%d", &valor);
	}

	pRu = &ru;				// pRu recebe o endere�o de ru
	pValor = &valor;		// pValor recebe o endere�o de valor

	system("cls");			// Limpeza de tela

	printf("RU: %d \n", *pRu);				// Mostrando o RU
	printf("Valor: %d \n", *pValor);		// Mostrando 1234567

	if (*pRu > * pValor)		// Teste para saber se pRu � maior que pValor
	{
		printf("O maior valor e %d\n\n", *pRu);			// Mostrando caso pRu for maior 
	}
	else
	{
		printf("O maior valor e %d\n\n", *pValor);		// Mostrando caso pValor for maior 
	}

	system("pause");
	return 0;
}