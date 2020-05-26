#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int numRu = 32, * pont_ru;
	float num_4digits = 61.32, *pont_4digits;		// Declarando e inicializando variáveis
	char name = 'J', * pont_name;

	pont_ru = &numRu;						// pont_ru recebe o endereço de numRU
	pont_4digits = &num_4digits;			// pont_4digits recebe o endereço de num_4digits
	pont_name = &name;						// pont_name recebe o endereço de name	

	printf("\nIMPRIMINDO VALORES DAS VARIÁVEIS\n");
	printf("Primeira letra do nome: %c \n", name);
	printf("Dois últimos dígitos do RU: %d \n", numRu);						// Mostrando variáveis antes da modificação
	printf("Os 4 últimos dígitos do RU: %.2f \n", num_4digits);

	*pont_ru = 65;				
	*pont_4digits = 45;		// Modificando variáveis pelos ponterios
	*pont_name = 'N';

	printf("\nIMPRIMINDO VALORES DAS VARIÁVEIS APÓS MODIFICAÇÂO \n");
	printf("Primeira letra do nome: %c \n", *pont_name);
	printf("Dois últimos dígitos do RU: %d \n", *pont_ru);							// Mostrando variáveis após a modificação
	printf("Os 4 últimos dígitos do RU: %.2f \n\n", *pont_4digits);

	system("pause");
	return 0;
}