#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro {
    char nome[50];
    int idade;
} cad;

int main()
{
    cad c;

    printf("Digite seu nome: ");
    gets(c.nome);
    printf("Digite sua idade: ");
    scanf("%d", &c.idade);

    system("pause");
    return 0;
}