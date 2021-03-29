#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cadastro{
    char nome[50];
    short int idade;
    char rua[30];
    int numero;
} cad1, cad2;// Criando vareáveis do tipo cadastro

int main() {
    strcpy(cad1.nome, "jonathan"); //Atribuindo a string "Jonathan" ao campo nome da variável cad1
    cad1.idade = 25;
    strcpy(cad1.rua, "Avenida Brasil");
    cad2.numero = 785;
    
    struct cadastro cad3;// Criando vareáveis do tipo cadastro
    cad3.idade = 21;

    struct cadastro cad4 = {"Jonathan Lopes", 21, "Avnida Raquel", 85}; // Inicializando uma estrutura

    struct cadastro c[4]; //Vetor de estrutura

    for(int i = 0; i < 4; i++) {
        printf("Digite um nome para a estrutura numero %d : \n", i);
        gets(c[i].nome);
        printf("Digite uma idade para a estrutura numero %d : \n", i);
        scanf("%hd", &c[i].idade);
        printf("Digite o nome da rua para a estrutura numero %d : \n", i);
        gets(c[i].rua);
        printf("Digite o numero da rua para a estrutura numero %d : \n", i);
        scanf("%d", &c[i].numero);
    }

    /*Atribuição entre estruturas OBS: só pode ser feito quando as estruturas são as mesmas,
    ou seja, quando possuem o mesmo nome*/
    c[3] = c[0]; 
    cad2 = cad1;
    system("pause");
    return 0;
}