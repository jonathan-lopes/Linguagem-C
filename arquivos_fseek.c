#include <stdio.h>
#include <stdlib.h>

struct cadastro {
    char nome[20], rua[20]; 
    int idade;
};

int main() {
    FILE * f;
    f = fopen("arquivo5.txt", "wb");
    if(f == NULL) {
        printf("Erro na abetura do arquivo\n");
        system("pause");
        exit(1);
    }

    struct cadastro c1,c2[4] = {
        "Ricardo", "Rua 1", 31,
        "Carlos", "Rua 2", 28,
        "Ana", "Rua 3", 45,
        "Bianca", "Rua 4", 32};
    fwrite(c2, sizeof(struct cadastro), 4, f);
    fclose(f);
    
    f = fopen("arquivo5.txt", "rb");
    if(f == NULL) {
        printf("Erro na abetura do arquivo\n");
        system("pause");
        exit(1);
    }

    fseek(f, 2*sizeof(struct cadastro), SEEK_SET);
    fread(&c1, sizeof(struct cadastro), 1, f);
    printf("%s\n%s\n%d\n", c1.nome, c1.rua, c1.idade);

    fclose(f);
    system("pause");
    return 0;
}