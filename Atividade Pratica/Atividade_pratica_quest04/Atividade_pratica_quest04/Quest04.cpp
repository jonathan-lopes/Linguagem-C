#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct ficha_aluno		// Criando struct
	{
		char nome[40];
		int ru;

	}; struct ficha_aluno aluno, *ponteiro_aluno;	// Criando a variável aluno que	vai ser do tipo struct

	ponteiro_aluno = &aluno;		// ponteiro_aluno recebe o endereço da struct

	printf("\n CADASTRO ALUNO \n\n");

	printf("Digite o nome do aluno: ");
	gets_s((*ponteiro_aluno).nome);			// Adicionado o nome na estrutura	
	printf("RU do aluno: ");
	scanf_s("%d", &(*ponteiro_aluno).ru);	// Adicionado o RU na estrutura	

	system("cls");		// Limpando a tela

	printf("nome: "); puts((*ponteiro_aluno).nome);		// Mostrando o dado armazenado na estrutura aluno.nome
	printf("RU: %d \n\n", (*ponteiro_aluno).ru);		// Mostrando o dado armazenado na estrutura aluno.ru

	system("pause");
	return 0;
}