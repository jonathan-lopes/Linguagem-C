#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void buffer();

int main()
{
	setlocale(LC_ALL, "portuguese");

	struct teste
	{
		int matricula;
		float salario;
	}; struct teste tes;

	printf("Digite sua matricula: ");
	scanf_s("%d", &tes.matricula);
	buffer();
	printf("Digite seu salario: ");
	scanf_s("%f", &tes.salario);
	buffer();

	printf("MATRICULA: %d \n\n", tes.matricula);
	printf("SALARIO: %.2f \n\n", tes.salario);


	system("pause");
	return 0;
}
void buffer()
{
	char c;

	while ((c = getchar()) != '\n' && c != EOF);
}