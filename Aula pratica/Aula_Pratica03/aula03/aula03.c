#include <stdio.h>
#include <stdlib.h>

int main() 
{
	FILE* arq;
	errno_t err;
	int num;

	err = fopen_s(&arq, "uninter.txt", "a");

	if (err == 0)
	{
		printf("Digite um numero inteiro: ");
		do
		{
			num = getchar();
			fputc(num, arq);
		} while (num != '\n');
	}
	else
	{
		printf("Erro, arquivo nao foi aberto\n\n");
	}

	if (arq)
	{
		err = fclose(arq);
		if (err == 0)
		{
			printf("\nArquivo fechado\n\n");
		}
		else
		{
			printf("Arquivo nao foi fechado");
		}
	}

	system("pause");
	return 0;
}