#include <stdio.h>
#include <stdlib.h>

struct endereco {
    char rua[50];
    int numero;
};

struct cadastro {
    char nome[50];
    int idade;
    struct endereco ender;
};

int main()
{
    struct cadastro cad;

    printf("Digite seu nome: ");
    gets(cad.nome);
    printf("Digite sua idade: ");
    scanf("%d", &cad.idade);
    printf("digite seu endereco: ");
    gets(cad.ender.rua);
    printf("digite o numero do seu endereco: ");
    scanf("%d", &cad.ender.numero);

    system("pause");
    return 0;
}