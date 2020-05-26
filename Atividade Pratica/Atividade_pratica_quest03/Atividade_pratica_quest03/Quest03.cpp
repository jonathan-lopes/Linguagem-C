#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct ficha_aluno		// Criando struct
	{
		char nome[40];
		int ru;

	}; struct ficha_aluno aluno;	// Criando a variável aluno que	vai ser do tipo struct

	printf("\n CADASTRO ALUNO \n\n");

	printf("Digite o nome do aluno: ");
	gets_s(aluno.nome);				// Adicionado o nome na estrutura	
	printf("RU do aluno: ");
	scanf_s("%d", &aluno.ru);			// Adicionado o RU na estrutura	

	system("cls");			// Limpando a tela

	puts(aluno.nome);							// Mostrando o dado armazenado na estrutura aluno.nome
	printf("RU: %d \n\n", aluno.ru);				// Mostrando o dado armazenado na estrutura aluno.ru

	system("pause");
	return 0;
}