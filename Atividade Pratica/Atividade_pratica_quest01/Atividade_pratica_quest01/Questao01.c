#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int numRu = 32, * pont_ru;
	float num_4digits = 61.32, *pont_4digits;		// Declarando e inicializando vari�veis
	char name = 'J', * pont_name;

	pont_ru = &numRu;						// pont_ru recebe o endere�o de numRU
	pont_4digits = &num_4digits;			// pont_4digits recebe o endere�o de num_4digits
	pont_name = &name;						// pont_name recebe o endere�o de name	

	printf("\nIMPRIMINDO VALORES DAS VARI�VEIS\n");
	printf("Primeira letra do nome: %c \n", name);
	printf("Dois �ltimos d�gitos do RU: %d \n", numRu);						// Mostrando vari�veis antes da modifica��o
	printf("Os 4 �ltimos d�gitos do RU: %.2f \n", num_4digits);

	*pont_ru = 65;				
	*pont_4digits = 45;		// Modificando vari�veis pelos ponterios
	*pont_name = 'N';

	printf("\nIMPRIMINDO VALORES DAS VARI�VEIS AP�S MODIFICA��O \n");
	printf("Primeira letra do nome: %c \n", *pont_name);
	printf("Dois �ltimos d�gitos do RU: %d \n", *pont_ru);							// Mostrando vari�veis ap�s a modifica��o
	printf("Os 4 �ltimos d�gitos do RU: %.2f \n\n", *pont_4digits);

	system("pause");
	return 0;
}